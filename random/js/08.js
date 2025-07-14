/*
8. Task: Unique Values
Create an array of numbers with some duplicate values. Write a function to filter out the duplicate values and return a new array with only unique numbers. Print the result.

*/
const nums=[1,1,2,5,6,6,7,8,9,9]

function uniques(nums) {
     return [...new Set(nums)];
}
console.log(uniques(nums))
