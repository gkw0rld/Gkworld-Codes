//singleton
Object.create // constructor method ke through object banana (isi ke andar singleton banta hai)

//object literals (object declare karne ka tareeka)

const mySym = Symbol("key1")

const JsUser = {
    name: "gaurav",
    "full name": "Gaurav Khatri",
    [mySym]: "mykey1",
    age: 21,
    location: "jaipur",
    email: "gauravkhatri@google.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Tuesday"]
}

// console.log(JsUser.email);
// console.log(JsUser["email"]);
// console.log(JsUser["full name"]);    // we cannot access full name using (.) so we will use only the second and third method to access key and data
// console.log(JsUser[mySym]);
// console.log(typeof JsUser[mySym]);

JsUser.email = "khatri@yahoo.com"     // value of email will be changed
// Object.freeze(JsUser);       // after freezing the value will not be changed
JsUser.email = "khatri@micro.com"
// console.log(JsUser);

JsUser.greetings = function(){
    console.log("Hello, Gaurav!");
}

JsUser.greetingsTwo = function(){
    console.log(`Hello, user!, ${this.name}`);
}

console.log(JsUser.greetings());
console.log(JsUser.greetingsTwo());

