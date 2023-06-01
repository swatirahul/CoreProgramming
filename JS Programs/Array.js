/*How to Find Duplicate Numbers*/
const array = [6,1,2,1,2,4,7,7,3,7,6,6,6,7];
var count = 0;
const duplicates = [];
for (let i = 0; i < array.length; i++) 
{
  for (let j = i + 1 ; j < array.length; j++) 
  {
    if (array[i] === array[j])
    {
      count++
      if(!duplicates.includes(array[i]) && count > 2 ) 
      {
      duplicates.push(array[i]);
      count = 0;
      }
    }
  }
}
console.log(duplicates)
