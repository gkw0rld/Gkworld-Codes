//Dates

let myDate = new Date();

// console.log(myDate.toDateString());
// console.log(myDate.toString());
// console.log(myDate.toISOString());
// console.log(myDate.toLocaleDateString());
// console.log(myDate.toLocaleString());
// console.log(myDate.toJSON());

// let myCreatedDate = new Date(2023, 0, 23);     //in javascript months start from 0
// let myCreatedDate = new Date(2023, 0, 23, 5, 3);     
// let myCreatedDate = new Date("2023-01-14");     
let myCreatedDate = new Date("01-14-2023");     
// console.log(myCreatedDate.toLocaleString());

let myTimeStamp = Date.now();
// console.log(myTimeStamp);       // this will give you the total time passed in milliseconds till now 
// console.log(myCreatedDate.getTime());   // this will give you the time passed from the date created in millisecond
                                        // so that you can compare the two times

//to get the time in seconds
// console.log(Math.floor(Date.now() / 1000));

let newDate = new Date();
console.log(newDate.getMonth());
console.log(newDate.getFullYear());
console.log(newDate.getDay());     // day monday se start hote h

// to further modify the results we want according to the need we change things in the object
newDate.toLocaleString('default', {
    weekday: "long"
})