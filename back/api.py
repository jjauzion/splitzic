import os
from flask import Flask, render_template, jsonify, request, send_from_directory
from flask_cors import CORS
from pathlib import Path
from werkzeug.utils import secure_filename
from zipfile import ZipFile
import split

UPLOAD_FOLDER = 'raw_data'
ALLOWED_EXTENSIONS = {'mp3'}

app = Flask(__name__, static_folder="static", static_url_path="", template_folder="template")
app.config['UPLOAD_FOLDER'] = UPLOAD_FOLDER
CORS(app)

def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS

def split_audio(filename, stem):
    output_dir = Path("output")
    tmp_dir = Path("tmp")
    split.split(str(Path(app.config['UPLOAD_FOLDER']) / filename), str(output_dir), int(stem))
    return True

# sanity check route
@app.route('/ping', methods=['GET'])
def ping_pong():
    print(request)
    return jsonify('pong!')

@app.route('/upload', methods=['POST'])
def save_file():
    if request.method == 'POST':
        if 'file' not in request.files:
            return 'No file'
        file = request.files['file']
        if file.filename == '':
            return 'No filename'
        if file and allowed_file(file.filename) and request.form['stem']:
            filename = secure_filename(file.filename)
            file_path = Path(app.config['UPLOAD_FOLDER']) / filename
            file.save(str(file_path))
            stem = int(request.form['stem'])
            split_audio(filename, stem)
        else:
            return "Wrong file format. Only '.mp3' accepted"
    return "Upload successfull"


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
    app.run(host='0.0.0.0', port=int("5050"))
