const personArray =  [ "Harkerat", "raman", "Priya"]
const genderArray = [ "male", 'male', "female"]
const numberOfUsers = personArray.length;
console.log("Number of Parson = "+ numberOfUsers)
for (let i=0 ; i<numberOfUsers; i++){
    if(genderArray[i] == "male"){
        console.log("Name  Of Male is "+personArray[i])
    }
}