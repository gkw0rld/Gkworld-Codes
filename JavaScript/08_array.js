//arrays

const myArr = [0, 1, 2, 3, 4, 5]; // in JavaScript arrays can store more than one type of elements
const myHeros = ["Spiderman", "Hulk", "Thor"];
const myArr2 = new Array(1, 2, 3, 4);

// indexing start from 0 and elements are accessed by index only
// console.log(myHeros[0]);

// myArr.push(100);
// myArr.push(200);
// myArr.pop();    // removes the last element

// myArr.unshift(-1);   // adds the element at the last (this is very heavy operation so we avoid it)
// (unshift operation is heavy because all elements are getting shifted due to addtion of one element)

// myArr.shift();  // removes the element from the start
// console.log(myArr);

// console.log(myArr.includes(4));
// console.log(myArr.indexOf(10));
// console.log(myArr.indexOf(5));

const newArr = myArr.join();   // the data of myArr is stored in newArr but in the string format 
// Hence the newArr is of the datatype of String

// console.log(myArr);
// console.log(newArr);

console.log("A: ", myArr);
const myn1 = myArr.slice(1,3);   // slice operation doesnt change the actual array (1 to 3(not included))
console.log("Slice element: ", myn1);
console.log("B: ", myArr);

const myn2 = myArr.splice(1,3);  // splice operation changes the actual array (1 to 3(included))
console.log("Splice element: ",myn2);
console.log("C: ", myArr);