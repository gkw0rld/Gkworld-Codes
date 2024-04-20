// console.log( 2 > 1 );
// console.log( 2 >= 1 );
// console.log( 2 < 1 );
// console.log( 2 == 1 );
// console.log( 2 != 1 );

// console.log("2" > 1);// typescript wont allow you to compare two different datatypes
// console.log("02" > 1); //because it may give unpredictable results

console.log(null > 0);
console.log(null == 0);
console.log(null >= 0);

// the reason is that an equality check == and a comparision check ><=  >= work differently .
//comparisions convert null to a number i.e, 0
//that's why (3) null >= 0 is true and (1) null > 0 is false

console.log(undefined > 0);
console.log(undefined == 0);
console.log(undefined >= 0);

// === strict check (also check for the datatype to be same)

console.log("2" == 2);
console.log("2" === 2);