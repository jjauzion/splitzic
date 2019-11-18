import axios from 'axios';

export default () => axios.create({
  baseURL: 'http://localhost:5000',
  withCredentials: false,
  headers: {
    'Content-Type': 'multipart/form-data',
  },
});
