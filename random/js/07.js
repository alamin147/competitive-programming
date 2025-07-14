/*
7. Task: Leap Year Checker
Write a function that determines whether a given year is a leap year.
Example: Happy New Year

*/
function leapYearChecker(year) {
    if(year%400==0) {
       return true;
    }
    if(year%100==0) {
       return false
    }
    if(year%4==0) {
        return true;
    }
    return false;
}

if(leapYearChecker(7)) {
    console.log("leap year")
}
else
    console.log("not leap year")
