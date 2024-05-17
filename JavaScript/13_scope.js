
if(true)
    {
        const a = 10
        let b = 20
        var c = 30                // even if c is declared in the scope it will still get outside the box (thats why we dont use var)
    }
// console.log(a);
// console.log(b);
// console.log(c);




// function one()
// {
//     const username = "gaurav"

//     function two()
//     {
//         const website = "Youtube"
//         console.log(username);
//     }

//     // console.log(website);            //this will not execute because of the scope
//     two()
// }

// one()



// **************************  INTERESTING  ******************************

addOne(5)       // this will not throw an error because the way of accessing the function in both the case is different
function addOne(num)
{
    return num+1
}

// console.log(addOne(5));

// addTwo(10)      // this will throw an error because it is called before initialization
const addTwo = function (num)          // this is also a method to make a function (holded in a variable)
{
    return num+2
}

