<template>
  
  <h1>{{ title }}</h1>

  <p>Welcome</p>

  <div v-if="showModal">
    <Modal theme="" @close="toggleModal">
      <template v-slot:links>
        <a href="#">sing up now</a>
        <a href="#">more info</a>
      </template>
      <h1>Giveway!</h1> 
      <p>nosiemactuwas?</p>
    </Modal>
  </div>

  <br />

  <div v-if="showModal">
    <Modal theme="" @close="toggleModalTwo">
      <h1>Sign up to the newsletter</h1> 
      <p>nosiemactuwas?</p>
    </Modal>
  </div>

  <br />

<button @click.alt="toggleModalTwo">Open Modal (alt)</button>
<button @click="toggleModal">Open Modal</button>

</template>

<script>
import Modal from './components/Modal.vue'

export default {
  name: 'App',
  components: { Modal },
  data() {
    return {
      title: 'My first Vue.js App :*',
      header: 'Sing up for new giveway!',
      text: 'nosiemact?',
      showModal: false
    }
  },
  methods: {
    toggleModal() {
      this.showModal = !this.showModal
    },
    toggleModalTwo() {
      this.showModal = !this.showModal
    }
  }
}
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}

h1{
  border-bottom: 1px solid #ddd;
  display: inline-block;
  padding-bottom: 10px;
}
</style>
