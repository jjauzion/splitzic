import axios from 'axios';

export default () => axios.create({
  baseURL: 'http://back:5050',
  withCredentials: false,
  headers: {
    'Content-Type': 'multipart/form-data',
    'Access-Control-Allow-Origin': '*',
  },
});
