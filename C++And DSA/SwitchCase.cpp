#include<iostream>
using namespace std;

int main(){
    char str;
    cout << "Enter a week day: ";
    cin >> str;
    switch(str) {
        case 'M':
        case 'm':
            cout << "Monday";
            break;
         case 'T':
        case 't':
            cout << "Tuesday";
            break;

        default:
            cout << "Invalid Input";
    }

    return 0;
}

/* 
Nice try 👍—but this line has a common mistake:

case 'M' || 'm':   // ❌ wrong
❌ Why this is WRONG

👉 'M' || 'm' is evaluated before the switch runs.

What happens internally:
'M' = 77
'm' = 109

77 || 109  →  true → 1

So your code becomes:

case 1:

👉 That means it will never match 'M' or 'm' correctly

✅ Correct Way

You must write separate case labels:

#include<iostream>
using namespace std;

int main(){
    char str;
    cout << "Enter a week day: ";
    cin >> str;

    switch(str) {
        case 'M':
        case 'm':
            cout << "Monday";
            break;

        default:
            cout << "Invalid Input";
    }

    return 0;
}
🔥 How This Works

👉 Multiple cases can share same block:

case 'M':
case 'm':

✔ If input is 'M' OR 'm' → both go to same output

🎯 Example Outputs
Input	Output
M	Monday
m	Monday
T	Invalid Input
🔥 Important Rule

👉 In switch:

❌ You cannot use conditions like ||
✅ You must use separate case labels */