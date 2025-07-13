/**
5.Task: Find and Modify
Write a function that searches an array of objects for a specific person by name. If found, modify their age property. Print the updated array.

 */
const people = [
    { name: "John", age: 25 },
    { name: "Sarah", age: 30 },
    { name: "Mike", age: 22 },
    { name: "Lucy", age: 28 }
];

function changeAge(name, newAge) {
    const person = people.find(p=>p.name===name);
    if(person)
    {
        person.age=newAge;
    }
}

changeAge("Sarah", 310);
console.log(people)
