// array store multiple values in single variable and object store multiple values in single variable but in key value pair
// array
let names = ["Aman","Sharkeerat","Rohit","Satyarth"];
console.log(names[0]);
console.log(names[1]);
console.log(names[2]);
console.log(names[3]);



// object 
const user1 = {
    name :"aman", 
    age: "22", 
    gender:"male"};

console.log(user1["name"])
console.log(user1.name);

// array of object 
const allUsers = [
    {firstname:"Aman",
        age:33
    },
    {firstname:"ak",
        age:33
    },
    {firstname:"dj",
        age:22
    }];

for(i=0;i<allUsers.length;i++){
    if(allUsers[i]["age"] !== 33){
        console.log(allUsers[i].firstname);
        console.log(allUsers[i]["firstname"])
    }
}