/**
3.Task: Function Composition
Write three functions: one to square a number, one to double a number, and one to add 5 to a number. Compose these functions to create a new function that squares a number, doubles the result, and then adds 5.
 */


function square(num){
    return Math.sqrt(num);
}
function doubleNum(num){
    return num*2;
}
function addFive(num){
    return num+5
}

function calculate(num){
    return addFive(doubleNum(square(num)));
}
console.log(calculate(25))
