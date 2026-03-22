#include<iostream>
using namespace std ;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
        // 20/4 = 5
    // reverse The Array 
    for(int i = n-1; i>=0;i--){
        cout<<arr[i]<<" ";
       
    }
     return 0;
}

/* 
🔥 Types of Array Reversal Methods
✅ 1. Reverse by Printing (Your Method)

👉 You already used this:

for(int i = n-1; i >= 0; i--){
    cout << arr[i] << " ";
}

✔ Only prints in reverse
❌ Does NOT change the original array

✅ 2. Reverse Using Swapping (Most Important ⭐)

👉 Swap first and last elements

for(int i = 0; i < n/2; i++){
    swap(arr[i], arr[n-i-1]);
}
How it works:
1st ↔ last
2nd ↔ second last

✔ Changes the array permanently
✔ Most commonly used in interviews

✅ 3. Reverse Using Two Pointers

👉 Same as swapping, but more clear

int start = 0, end = n-1;

while(start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
}

✔ Easy to understand
✔ Very popular method

✅ 4. Reverse Using Recursion

👉 Function calls itself

void reverse(int arr[], int start, int end){
    if(start >= end) return;
    
    swap(arr[start], arr[end]);
    reverse(arr, start+1, end-1);
}

✔ Good for learning recursion
❌ Not always efficient

✅ 5. Reverse Using STL (Shortcut 🚀)

👉 Built-in function

#include <algorithm>

reverse(arr, arr + n);

✔ Easiest and fastest to write
✔ Used in real projects

🎯 Final Summary
Method	Changes Array?	Difficulty
Printing Reverse	❌ No	Easy
Swapping	✅ Yes	Easy
Two Pointers	✅ Yes	Easy
Recursion	✅ Yes	Medium
STL reverse()	✅ Yes	Very Easy
🔥 Best Method? */