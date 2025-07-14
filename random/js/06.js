/*
6.Task: Array Reduction
Create an array of numbers. Write a function that uses the reduce method to calculate the sum of all even numbers in the array.
*/

const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

function sumOfEvenNums(arr) {
   return arr.reduce((acc,cur)=>{
    if(cur%2==0)
      return cur+acc;
    return acc;
   },0)
}

console.log( sumOfEvenNums(numbers));
