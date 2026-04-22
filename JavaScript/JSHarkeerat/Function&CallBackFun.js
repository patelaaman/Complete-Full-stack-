// Function 
/*  A Function in java Script is a set of Statement that performs a task or calculates a value
    it should take some Input and return an output where there is some obvious raletionship between the input and the output 
*/
// Synchronous FUnction

// all the statementd all code running line by line (it means dusri line tabhi execute hogi jab pahli line completely execute hojaye)

// Asynchonous Function 

//  Asynchronous  function is programming are those that
//  allow a program  to start a potentially long-running operation  and continue executing other tass without waiting for that opeation to complete 
//this is a particularly important in envirinement like web browsers or node.js where waiting for an operation to finish ( like fetching data from a server or reading a large file)could make the application unresponsible 


/* 
function findSum(a, b){
    const sumvalue = a+b ;
    return sumvalue;
}

const value = findSum(3,5);
const value1 = findSum(10,23);
console.log(value);
 */

// Call Back Function
/* function findSum(a, b,fnToCall){
    let result = a+b ;
    fnToCall(result);
}

function displayResult(data){
    console.log("The sum is : "+data);
}
function displayResultPassive(data){
    console.log("the sum is :"+data);
}


// you are only allowed to call one function after This 
// how will you displayResult and displayResultPassive  of sum
const ans = findSum(3,4, displayResult);
displayResult(data); */

// call back function is a Function whcih is passed as an argument to another function and is executed after some operation is completed in the main Function
function calArithmetic(a, b , arithmeticCallAdd,arithmeticCallMultiply ){
         const  value = arithmeticCallAdd(a,b);
         return value;
}
function add(c, d){  // also we can also take same(a,b) value and Different name of parameter ( c, d)
    let sum = c+d;
    return sum;
}

function multiply(a,b){
    let mul = a*b;
    return mul ; 
}

const ans = calArithmetic(3, 4, add);
const ans1 = calArithmetic(9,4,multiply)
console.log(ans);
console.log(ans1);

// One more Example of Call Back 

function greet(){
    console.log("Hello World");
}

setTimeout(greet, 1*4000);


// normal exmple of call back Function 
// find the square of a number using call back function
function square(n){
    return n*n;
}
// find the sum of the square of  the input 
function sumOfSquare(a,b){
    let val1 = square(a);
    let val2 = square(b);
    let sum = val1 + val2 ; 

    return sum;
}

console.log(sumOfSquare(3,4));
// find the sum of the square of 
