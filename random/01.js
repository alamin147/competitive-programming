/* 1.Task: Array Filtering and Mapping
Create an array of objects, each representing a person with properties like name, age, and gender. Write a function to filter out all females and then map the remaining people to an array of names. Print the final result.
*/

const persons=[
    {
        name:"a",
        age:55,
        gender:"male"
    },
    {
        name:"ab",
        age:5,
        gender:"female"
    },
]
let names;
function filters() {
    names=persons.filter(p=>p.gender!="female")
    return persons.filter(p=>p.gender=="female")
}
const females=filters();
console.log(females,"namesss",names)

