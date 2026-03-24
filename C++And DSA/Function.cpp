#include<iostream>
using namespace std;
void printHello(string name){
    cout<<"Hello "<<name<<endl;
}

int sum(int num1, int num2){
    int num3 = num1+num2;
    return(num3);
}

int main(){
    // Function in c++  are set of code which perform something for 
    // function are used to modularise code 
    // function are used to use same Multiple time 
    // function are used to increase readability of the code
    // function are used to reduce the complexity of the code
    // void function  --> which does not returns anything 
    // return 
    // Parameterised --> 
    // Non Parameterised --> 
    // we have a lots of inbuild function in c++ like  - min(), max(),swap(), sort() etc
    string n;
    int num1, num2;
    cin>>num1>> num2;
    

    cin>>n;
    printHello(n);
   int res =  sum(num1,num2);
   cout<<res;
    return 0;
}