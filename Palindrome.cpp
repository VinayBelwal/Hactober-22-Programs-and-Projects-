#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int sum = 0;

    while(n != 0)
    {
        int r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    if(temp == sum)
    {
        cout << "Palindrome Number" << endl;
    }else{
        cout << "NOt Plaindrome Number" << endl;
    }
}
