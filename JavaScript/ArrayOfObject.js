const user = [1, 2,3 ]
const user2 = ["Harkeerat", "Raman"]

const allUsers = [{
    firstName : "Harkeerat",
    gender : "Male"
    },
    {
    firstName : "Harkeerat",
    gender : "Male"
    },
    {
    firstName : "Harkeerat",
    gender : "Male"
    }
]
const user1 = {
    name : "Harkeerat",
    age : 22,
    Gender : "female"
}

console.log("Name Of User 1 is "+user1["age"]);
console.log("Name of User1 is "+user1.Gender)

for(let i=0 ; i<allUsers.length; i++){
    if(allUsers[i]["gender"] == "Male"){
        console.log("Name of"+allUsers[i]["firstName"])
    }
}