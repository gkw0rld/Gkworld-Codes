// primitive datatypes

// 7 types -> String, Number, Boolean, null, undefined, Symbol, BigInt

const score = 100
const scoreValue = 100.2
const isLoggedIn = false
const outsideTemp = null    // doesnt mean 0 temp

let userEmail;    // undefined value

const id = Symbol("123")
const anotherId = Symbol("123")   // uniquely defined for each Symbol created

console.log(id === anotherId);   // hence we checked that both are different
const bigNumber = 1234123412412n  // last me "n" lagane se ye automatically bigInt ban gaya hai


// reference type (Non primitive)
// Array, Objects, Function

const heros = ["shaktiman", "naagraj", "doga"];

let myObj = {              // way of creating an object
    name: "Gaurav",
    age: 22
}

const myFunction = function(){
    console.log("Hello World");
}

console.log(typeof bigNumber);


// **************************  MEMORY  ************************************

// two types of memory 
//Stack (primitive)(copy is altered) and Heap (Non-Primitive)(main address value is altered)

let myYoutubeName = "hiteshChaudharydotcom"     // all this data will go to the stack and a copy will be create if accessed by another variable
let anotherName = myYoutubeName

anotherName = "chaiaurcode"

console.log(myYoutubeName);
console.log(anotherName);

// the below object will go to heap memory and any changes will reflect to the original value
// userOne variable will be stored in stack but the inside data will be accessed by reference

let userOne = {
    email: "gaurav@gmail.com",
    upi: "gaurav@oksbi"
}

let userTwo = userOne

userTwo.email = "khatri@gmail.com"

console.log(userOne.email)  // email of userOne and UserTwo both changed
console.log(userTwo.email)