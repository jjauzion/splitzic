import os
from flask import Flask, render_template, request, redirect, url_for
from flask import send_from_directory
from flask_cors import CORS
from werkzeug.utils import secure_filename
from pathlib import Path
from zipfile import ZipFile

from src import split

UPLOAD_FOLDER = 'raw_data'
ALLOWED_EXTENSIONS = {'mp3'}


# enable CORS
CORS(app, resources={r'/*': {'origins': '*'}})

app = Flask(__name__, static_folder="static", static_url_path="", template_folder="template")
app.config['UPLOAD_FOLDER'] = UPLOAD_FOLDER

# sanity check route
@app.route('/ping', methods=['GET'])
def ping_pong():
    return jsonify('pong!')

def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS


@app.route('/', methods=['GET', 'POST'])
def upload_file():
    if request.method == 'POST':
        # check if the post request has the file part
        if 'file' not in request.files:
            return 'No file part'
        file = request.files['file']
        # if user does not select file, browser also submit an empty part without filename
        if file.filename == '':
            return 'No selected file'
        if file and allowed_file(file.filename):
            filename = secure_filename(file.filename)
            file_path = Path(app.config['UPLOAD_FOLDER']) / filename
            file.save(str(file_path))
            stem = request.form['stems']
            return redirect(url_for('split_audio', filename=filename, stem=stem))
        else:
            return "Wrong file format. Only '.mp3' accepted"
    return redirect(url_for('home'))


@app.route('/split/<filename>/<stem>')
def split_audio(filename, stem):
    output_dir = Path("output")
    tmp_dir = Path("tmp")
    split.split(str(Path(app.config['UPLOAD_FOLDER']) / filename), str(tmp_dir), int(stem))
    output_file = output_dir / f"{Path(filename).stem}.zip"
    with ZipFile(output_file, 'w') as zp:
        for file in tmp_dir.iterdir():
            zp.write(file)
    for file in tmp_dir.iterdir():
        file.unlink()
    return send_from_directory(output_dir, output_file.name, as_attachment=True, attachment_filename=output_file.name)

if __name__ == '__main__':
    app.config['SESSION_TYPE'] = 'filesystem'
    app.debug = True
    app.run()
