<template>
  <v-container>
    <v-layout
      text-center
      wrap
    >
    <v-flex xs12>
        <v-img
          :src="require('../assets/logo.png')"
          class="my-3"
          contain
          height="200"
        ></v-img>
      </v-flex>

      <v-flex mb-4>
        <h1 class="display-2 font-weight-bold mb-3">
          Welcome to Stemify
        </h1>
        <p class="subheading font-weight-regular">
          Stemify allow you to seperate into stems any song !
        </p>
      </v-flex>
    </v-layout>
    <v-layout>
        <v-file-input
          v-model="selectedFile"
          id="upload"
          accept="audio/mp3"
          placeholder="mp3 files only"
          prepend-icon="mdi-file-music-outline"
          label="Upload your song"
          @change="onFileChange">
        </v-file-input>
    </v-layout>
    <v-layout>
     <v-row align="center">
      <v-col class="d-flex" cols="12" sm="6">
        <v-select
          :items="stemList"
          label="# of stems"
          v-model="stem"
        ></v-select>
      </v-col>
     </v-row>
    </v-layout>
    <v-container>
      <div v-if="selectedFile">
        <v-btn @click="play">Play the original song</v-btn>
      </div>
    </v-container>
    <v-container id="waveform">
    </v-container>
  </v-container>
</template>

<script>
import WaveSurfer from 'wavesurfer.js';
import api from '@/service/api';

export default {
  name: 'Home',
  data() {
    return {
      selectedFile: null,
      stemList: ['2', '4', '5'],
      stem: '2',
    };
  },
  mounted() {
    this.$nextTick(() => {
      this.wavesurfer = WaveSurfer.create({
        container: '#waveform',
        waveColor: 'orange',
        progressColor: 'navy',
      });
    });
  },
  methods: {
    onFileChange(selectedFile) {
      if (selectedFile) {
        const fileFD = new FormData();
        fileFD.append('file', selectedFile);
        fileFD.append('stem', this.stem);
        console.log(...fileFD);
        api().post('/upload', fileFD).then((ret) => {
          console.log(ret);
        });
        const reader = new FileReader();
        reader.addEventListener('loadend', () => {
          this.wavesurfer.load(reader.result);
        });
        reader.readAsDataURL(this.selectedFile);
      } else {
        this.selectedFile = null;
        this.objectUrl = null;
      }
    },
    play() {
      this.wavesurfer.playPause();
    },
  },
};
</script>
