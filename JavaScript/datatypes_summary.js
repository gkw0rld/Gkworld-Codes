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