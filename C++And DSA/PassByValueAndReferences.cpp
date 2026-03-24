/* The core difference is that pass by value passes a copy of the data, so changes inside
a function do not affect the original, while pass by reference passes the memory address,
 allowing the function to modify the original data
 */
#include<iostream>
using namespace std;

void passbyReference(int &a){
    a += 3;
    cout<<"values : "<<a<<endl;
    a+= 9;
    cout<<a<<endl;
}
int main(){
    // pass by References 
int  x = 10;
    cout<<"values of x is :"<<x<<endl;
    passbyReference(x);
    cout<<x;
    return 0;
}


/* #include<iostream>
using namespace std;

void passbyReference(string &a){
    a[0] = 'H';
    cout<<"values : "<<a<<endl;
}
int main(){
    // pass by References 
string x = "Aman";
    cout<<"values of x is :"<<x<<endl;
    passbyReference(x);
    cout<<x;
    return 0;
} */



/* #include<iostream>
using namespace std;

void passbyValue(int a){
    a = 10;
    cout<<"Value of a in passbyValue function : "<<a<<endl;
}
int main(){
    //pass by Value 
    int x = 5;
    cout<<"Value of x before function call : "<<x<<endl;
    passbyValue(x);
    cout<<"Value of x after function call : "<<x<<endl;
   return 0;
} */