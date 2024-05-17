const user = {
    username: "Gaurav",
    price: 999,

    welcomeMessage: function (){
        console.log(`${this.username} , welcome to the website`);
        console.log(this);
    }
}

// user.welcomeMessage();
// user.username = "Khatri"
// user.welcomeMessage();

// console.log(this);              // this will print empty object because nothing globally declared

// function chai()
// {
//     let username = "Gaurav"
//     // console.log(this);
//     console.log(this.username);
// }
// chai()

// const chai = function()
// {
//     let username = "Gaurav"
//     // console.log(this);
//     console.log(this.username);
// }

// const chai = () =>{
//     let username = "Gaurav"
//     console.log(this.username);
// }

// chai();


// const addTwo = (num1, num2) => {
//     return num1+num2;
// }

// const addTwo = (num1, num2) => num1+num2        // this is called implicit return (another method of making a function using arrow function)
// const addTwo = (num1, num2) => (num1+num2)         // use () to avoid return, if we use {} then we must use return otherwise it will not work
// const addTwo = (num1, num2) => ({username: "Gaurav"})

// console.log(addTwo(3, 4));

// const myArray = [1,2,3,4]

// myArray.forEach()

