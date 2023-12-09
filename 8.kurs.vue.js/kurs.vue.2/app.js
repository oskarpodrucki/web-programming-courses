const app = Vue.createApp({
    //data, functions
    //template: '<h2>I am the template</h2>'

    data() {
        return {
            showBooks: true,
            title: 'Metro 2033',
            author: 'Dimitry Gluchovsky',
            age: 33
        }
    },
    methods: {
        // changeTitle(metro) {
        //     // this.title = 'Metro 2034'
        //     this.title = metro
        // }
        toggleShowBooks() {
            this.showBooks = !this.showBooks
        }
    }
})

app.mount('#app')