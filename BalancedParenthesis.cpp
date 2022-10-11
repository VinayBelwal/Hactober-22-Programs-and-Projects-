
// C++ program for the above approach.
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to check
// if parentheses are balanced
bool isBalanced(string exp)
{
 
    // Initialising Variables
    bool flag = true;
    int count = 0;
 
    // Traversing the Expression
    for (int i = 0; i < exp.length(); i++) {
 
        if (exp[i] == '(') {
            count++;
        }
        else {
 
            // It is a closing parenthesis
            count--;
        }
        if (count < 0) {
 
            // This means there are
            // more Closing parenthesis
            // than opening ones
            flag = false;
            break;
        }
    }
 
    // If count is not zero,
    // It means there are
    // more opening parenthesis
    if (count != 0) {
        flag = false;
    }
 
    return flag;
}
 
// Driver code
int main()
{
    string exp1 = "((()))()()";
 
    if (isBalanced(exp1))
        cout << "Balanced \n";
    else
        cout << "Not Balanced \n";
 
    string exp2 = "())((())";
 
    if (isBalanced(exp2))
        cout << "Balanced \n";
    else
        cout << "Not Balanced \n";
 
    return 0;
}
