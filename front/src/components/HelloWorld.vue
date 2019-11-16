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
export default {
  name: 'HelloWorld',
  data() {
    return {
      selectedFile: null,
      objectUrl: null,
    };
  },
  methods: {
    onFileChange(selectedFile) {
      if (selectedFile) {
        this.objectUrl = window.URL.createObjectURL(selectedFile);
        const reader = new FileReader();
        const vm = this;
        reader.onload = () => {
          if (reader.result) {
            vm.file = reader.result.toString();
          } else vm.selectedFile = null;
        };
      } else {
        this.selectedFile = null;
      }
    },
    playSound() {
      if (this.objectUrl) {
        console.log(this.objectUrl);
        const audio = new Audio(this.objectUrl);
        audio.play();
      }
    },
  },
};
</script>
