// const marvel_heros = ["spiderman", "thor", "ironman"]
// const dc_heros = ["flash", "superman", "batman"]

// // marvel_heros.push(dc_heros);    //dc_heros taken as a single dataElement
// // console.log(marvel_heros);
// console.log(marvel_heros);
// const allHeros = marvel_heros.concat(dc_heros);    // concat function returns a new array
// console.log(allHeros);

// const all_new_heros = [...marvel_heros, ...dc_heros]; // sab alag alag hoke add up ho gaye (Spread operator)
// console.log(all_new_heros);

// const another_array = [1, 2, 3, [4, 5], [6, 7, [8, 9, 0]]]
// const real_another_array = another_array.flat(Infinity)   // in the brackets we have to give in how much depth we have to flatten the array

// console.log(real_another_array);

// console.log(Array.isArray("Gaurav"));
// console.log(Array.from("Gaurav"));
// console.log(Array.from({name: "Gaurav"}));  // this will be interesting

let score1 = 100;
let score2 = 200;
let score3 = 300;

console.log(Array.of(score1, score2, score3));