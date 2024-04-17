const accountId = 14453
let accountEmail = "gauravkhatri474@google.com"
var accountPassword = "12345"
accountCity = "Jaipur"
let accountState;

// accountId = 5 // not allowed
accountEmail = "hello@gmail.com"
accountPassword = "123123"
accountCity = "Noida"

/*
 prefer not to use var 
 because of the issue in block scope and functional scope
*/

console.log(accountId);
console.table([accountId, accountEmail, accountPassword, accountCity, accountState])