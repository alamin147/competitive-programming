/*
4.Task: Sorting Objects
Create an array of objects representing cars with properties like make, model, and year. Write a function to sort the array of cars by the year of manufacture in ascending order. Print the sorted array.
*/

const cars = [
    {
        make: "Toyota",
        model: "Camry",
        year: 2018
    },
    {
        make: "Honda",
        model: "Civic",
        year: 2020
    },
    {
        make: "Ford",
        model: "Mustang",
        year: 2015
    },
    {
        make: "BMW",
        model: "X5",
        year: 2019
    },
    {
        make: "Tesla",
        model: "Model 3",
        year: 2021
    }
];

function sorting() {
    return cars.sort((a,b)=>a.year-b.year);
}
console.log(sorting())
