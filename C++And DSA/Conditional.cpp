#include<iostream>
using namespace std ;
//

// ask to user to enter marks and Print the Corresponding Grade of the student 
/* int main(){
    int marks ;
     cin >> marks;
     if(marks>= 90){
        cout<<"Grade A++";
     }
     if(marks>80 && marks<90){
        cout<<"Grade A";
     }
     if(marks>70 && marks<80){
        cout<<"Grade B";
     }
     if(marks>60 && marks<70){
        cout<<"Grade C ";
     }
     return 0 ;
}
 */

int main(){
    int age ;
    cin>>age;
    if(age<18){
        cout<<"You are not eligible for Job ";
    }
    else if(age<=25){
        cout<<"You are Eligible for the Job ";
    }
    else if(age>25 && age<=30){
        cout<<"You are Eligible For The Marriege";
    }
    else if(age>30 && age<=40){
        cout<<" you are Eligible for the Boby time ";
    }
    else{
        cout<<"you are Eligible For the Retirement ";
    }
    return 0 ;
}