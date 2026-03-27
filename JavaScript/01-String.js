// String handbook

const { replace } = require("react-router-dom");

// String : length , indexOf(), lastiIndexOf(), slice(), subString(), replace(), 
// split(), trim(), toUpperCase(), ToLowerCase() , etc 

// Run each Function to see the output, play and learn by doing 

// length
function getLength(str){
    console.log("Original Strings: ",str);
    console.log("Length:", str.length);
}
getLength("Hello Aman");

// indexOf
function findIndexOf(str, target){
    console.log("Original String : ",str);
    console.log("index: ",str.indexOf(target));
}
findIndexOf("Hello World", "World");

// lastIndexOf
function findIndexOf(str, target){
    console.log("Original String : ",str);
    console.log("index: ",str.lastIndexOf(target));
}
findIndexOf("Hello World ak", "ak");

// slice 
function getSlice(str,start , end){
    console.log("Original String : "+str);
    console.log("After Slice : ",str.slice(start, end));

}
getSlice("Harkeerat Kumar",1,6)

//  substr and   
const a = "addsddas";
let ans = a.slice(1,6)
console.log("SubString :",a.substr(1,6))
console.log("slice: ",ans)

// cutIt

function cutIt(str, startIndex, endIndex){
    let newStr = "";
    for(let i=0; i<str.length; i++){
      if(i>=startIndex && i<endIndex){
        newStr = newStr + str[i];
      }
    }
    return newStr;
}

const Value = "HarkeetRat singh";
let ans2 = Value.slice(2,5);
console.log(ans2);
console.log(cutIt(Value,2,5));


// ReplaceString 
// replace

const str  = "Hello World";
console.log(str.replace("World","JavaScript"))

// split 
const value = "Hii my Name is Harkeerat";
const words  = value.split(" ");
console.log(words)

//trim 
// toUpperCase 
//toLowerCase

//parseInt  => parseInt is Convert into a Number , Whatever data shown

console.log(parseInt("45"))
console.log(parseInt(23.4))
console.log(parseInt("45werewr"))

//parseFloat