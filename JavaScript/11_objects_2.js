// const tinderUser = new Object()    // this is a singleton object
const tinderUser = {}   //this is a non-singleton object

tinderUser.id = "234abc"
tinderUser.name = "sammy"
tinderUser.isLoggedIn = false;

// console.log(tinderUser);

const regularUser = {
    email: "gauravkhatri@gmail.com",
    fullName: {
        userFullName: {
            firstName: "Gaurav",
            lastName: "Khatri"
        }
    }
}

// console.log(regularUser.fullName.userFullName.firstName);

const obj1 = {1: "a", 2: "b"}
const obj2 = {3: "a", 4: "b"}

// const obj3 = {obj1, obj2}    //this will not combine the objects

// const obj3 = Object.assign({}, obj1, obj2);      //isko bhi kam he use karte hai

const obj3 = {...obj1, ...obj2}    // we will use spread operator just like to merge two arrays
// console.log(obj3);

const users = [ 
                {
                    id: 1,
                    email: "g@gmail.com"
                },

                {
                    id: 2,                                              // database se jab bhi data aata h to array of objects ki form me aata h
                    email: "k@gmail.com"
                },

                {
                    id: 3,
                    email: "h@gmail.com"
                }
            ]

console.log(users[1].email);               // we will access the data just like accessing the array elements



console.log(Object.keys(tinderUser));         //   IMPORTANT
console.log(Object.values(tinderUser));         //   IMPORTANT
console.log(Object.entries(tinderUser));         

console.log(tinderUser.hasOwnProperty('isLoggedIn'));        // to check if it has the given property
console.log(tinderUser.hasOwnProperty('isLogged'));