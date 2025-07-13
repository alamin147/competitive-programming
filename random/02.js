/**
2.Task: Object Manipulation
Create an array of objects representing books with properties like title, author, and year. Write a function that takes the array and returns a new array with only the book titles. Print the result.
 */

const allBooks=[
    {
        author:"user1",
        title:"book of user1",
        year:2000
    },
    {
        author:"user2",
        title:"book of user2",
        year:2000
    }
]

function titles() {
    return allBooks.map(b=>b.title);
}
const books=titles();
console.log(books)
