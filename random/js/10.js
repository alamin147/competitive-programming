/*
10.Task: Advanced Sorting
Create an array of objects representing students with 'name' and 'grades' properties. Write a function to sort the students by average grade in descending order.
*/

const students = [
    { name: "Alice", grades: [85, 90, 92] },
    { name: "Bob", grades: [78, 85, 80] },
    { name: "Charlie", grades: [90, 92, 88] },
    { name: "David", grades: [75, 70, 85] },
    { name: "Emma", grades: [95, 88, 92] },
    { name: "Frank", grades: [82, 85, 87] },
    { name: "Grace", grades: [88, 84, 90] },
    { name: "Hannah", grades: [79, 81, 84] }
];

function sortStudentsByAverageGrade(students) {
    return students.sort((a,b)=>{
        const avgA=a.reduce((sum,acc)=>sum+acc,0)/a.grades.length;
        const avgB=b.reduce((sum,acc)=>sum+acc,0)/b.grades.length;
        return avgB-avgA;
    });
}

console.log(sortStudentsByAverageGrade(students));
