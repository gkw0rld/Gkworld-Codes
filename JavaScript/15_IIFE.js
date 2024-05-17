// immediately invoked function expression (jo function immediately execute ho jaye)

// function chai()
// {
//     console.log(`DB CONNECTED`);
// }
// chai()                       //immediately invoked but IIFE is used for different purposes

(function chai()
{
    //this is a named IIFE
    console.log(`DB CONNECTED`);
})  ();                              // () used for expression & () again is usedfor execution


//   global scope ke pollution se problem hoti h kai baar
//   to global scope ke jo declarations hote h unko hatane ke liye humne IIFE ka use kara 


( (name) =>                                           // invoked using arrow function 
{
    console.log(`DB CONNECTED Two ${name}`);
})  ("Gaurav"); 