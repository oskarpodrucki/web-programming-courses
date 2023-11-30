<template>
  <img alt="Vue logo" src="./assets/logo.png"> <br />
  <!-- <HelloWorld msg="Welcome to Your Vue.js App"/> -->
  <!-- <h1>My first Vue.js App</h1> -->
  
  <h1>{{ title }}</h1>

  <Modal />
  <!-- <br /> <br />

  <input type="text" ref="name">
  <br />
  <button @click="handleClick">click me</button> -->
</template>

<script>
import Modal from './components/Modal.vue'
// import HelloWorld from './components/HelloWorld.vue'

export default {
  name: 'App',
  components: { Modal },
  // components: {
  //   HelloWorld
  // }
  data() {
    return {
      title: 'My first Vue.js App :*'
    }
  },
  methods: {
    // handleClick() {
    //   console.log(this.$refs.name)
    //   this.$refs.name.classList.add('active')
    //   this.$refs.name.focus()
    // }
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
