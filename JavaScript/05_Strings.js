const name = "Gaurav"
const repoCount = 50

//console.log(name + repoCount + "Value");   // this method is now obsolete

console.log(`Hello my name is ${name} and my repo count is ${repoCount}`)  // we will use this method 

const gameName = new String('gkworld-gaurav-khatri')  // stored as a key value pair

console.log(gameName[0]);
console.log(gameName.__proto__);   // we got the object.. but the object is not empty... check in web browser console

console.log(gameName.length);
console.log(gameName.toUpperCase());   // we used () because toUpperCase is a function
console.log(gameName.charAt(2));
console.log(gameName.indexOf('o'));

const newString = gameName.substring(0,4)
console.log(newString);

const anotherString = gameName.slice(-5,4)
console.log(anotherString);

const newStringOne = "     Gaurav     "
console.log(newStringOne);
console.log(newStringOne.trim());

const url = "https://gaurav.com/gaurav%20khatri"
console.log(url.replace('%20', '-'));

console.log(url.includes('gaurav'));

console.log(gameName.split('-'));