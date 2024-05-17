function sayMyName()
{
    console.log("G");
    console.log("A");
    console.log("U");
    console.log("R");
    console.log("A");
    console.log("V");
}

// sayMyName      // this is reference (will print nothing)
// sayMyName()   //this is execution




// function addTwoNumbers(number1, number2)
// {
//     console.log(number1 + number2);
// }

// addTwoNumbers(3, 4);
// addTwoNumbers(3, "4")

function addTwoNumbers(number1, number2)
{
    // let result = number1 + number2;
    return number1+number2;
}

const result = addTwoNumbers(3,4)
// console.log("The result is: ", result);           // this wont print result (we haven't returned any value)





function userLogInMessage(username = "sam")    // we put a default username if none is given
{
    if(!username)
        {
            console.log("Please enter a username");
            return
        }
    return `${username} just logged in`
}

// console.log(userLogInMessage("Gaurav"));
// console.log(userLogInMessage());



function calculateCartValue(val1, val2, ...num1)      // not a spread operator (it is a rest operator)
{
    return num1;
}

// console.log(calculateCartValue(200, 400, 500, 2000, 3000));


const user = {
    username: "Gaurav",
    price: 199
}

function handleObject(anyObject)
{
    console.log(`Username is ${anyObject.username} and price is ${anyObject.price}`);
}

// handleObject(user);
handleObject({
    username: "Gaurav",
    price: 1200
})



const mynewArray = [100, 200, 300, 400]

function returnSecondValue(getArray)
{
    return getArray[1]
}

// console.log(returnSecondValue(mynewArray));
console.log(returnSecondValue([400, 600, 700, 800]));