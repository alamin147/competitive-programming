/*
09. Task: Find Maximum Value:
Write a function that takes an array of numbers and returns the maximum value.

*/
const nums=[1,1,2,5,6,6,7,8,9,9]

function maximum(nums) {
    let max = nums[0];
    for (let i=1;i<nums.length;i++) {
        if(nums[i]>max) {
            max = nums[i];
        }
    }
    return max;
}
console.log(maximum(nums))
