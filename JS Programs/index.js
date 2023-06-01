/*How to Find Duplicate Numbers*/
const array = [1,8,3,3,4,8,8,3,3,2,3,1,6,8,4];
const duplicates = [];
for (let i = 0; i < array.length; i++) {
  for (let j = i + 1; j < array.length; j++) {
    if (array[i] === array[j] && !duplicates.includes(array[i])) {
      duplicates.push(array[i]);
    }
  }
}
console.log(duplicates)


/*How to remove Duplicate Numbers from an array*/

const Numbers =[1, 2, 3,66,23,
     2, 4, 5, 5, 6];

/*const unique = Array.from(new Set(Numbers));
 
console.log (unique);*/


/* check if there were duplicate items*/
const numbers = [1, 2, 3, 4, 5, 6];

const unique = Array.from(new Set(numbers));

if(numbers.length === unique.length) {
    console.log(`Array doesn't contain duplicates.`);
} else {
    console.log(`Array contains duplicates.`);
}