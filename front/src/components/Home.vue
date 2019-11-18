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
      <div v-if="selectedFile">
        <v-btn @click="playSound">Play</v-btn>
      </div>
    </v-layout>
  </v-container>
</template>

<script>

import api from '@/service/api';

export default {
  name: 'Home',
  data() {
    return {
      selectedFile: null,
    };
  },
  methods: {
    onFileChange(selectedFile) {
      if (selectedFile) {
        const fileFD = new FormData();
        fileFD.append('file', selectedFile);
        api().post('/upload', fileFD).then((ret) => {
          console.log(ret);
        });
      } else {
        this.selectedFile = null;
        this.objectUrl = null;
      }
    },
    playSound() {
      if (this.selectedFile) {
        const reader = new FileReader();
        reader.addEventListener('loadend', () => {
          const audio = new Audio(reader.result);
          audio.play();
        });
        reader.readAsDataURL(this.selectedFile);
      }
    },
  },
};
</script>
