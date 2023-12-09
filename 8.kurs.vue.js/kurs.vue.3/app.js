const app = Vue.createApp({
    data() {
        return {
            url: ' http://www.zs1mm.home.pl/strona/',
            showBooks: false,
            books: [
                { title: 'Metro 2033', author: 'Dimitry Gluchovsky', age: 33, img: 'assets/1.jpg', isFav: true },
                { title: 'Metro 2034', author: 'Dimitry Gluchovsky', age: 33, img: 'assets/2.jpg', isFav: false },
                { title: 'Metro 2035', author: 'Dimitry Gluchovsky', age: 33, img: 'assets/3.jpg', isFav: true },
            ],
            x: 0,
            y: 0
        }
    },
    methods: {
        toggleShowBooks() {
            this.showBooks = !this.showBooks
        },
        handleEvent(e, data) {
            console.log(e, e.type)
            if (data) {
                console.log(data)
            }
        },
        handleMouseMove(e) {
            this.x = e.offsetX
            this.y = e.offsetY
        },
        toogleFav(book) {
            book.isFav = !book.isFav
        }
    },
    computed: {
        filteredBooks() {
            return this.books.filter((book) => book.isFav)
        }
    }
})

app.mount('#app')