#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        int space = n - i;
        for(int i = 1; i <= space; ++i){
            cout << "*";
        }
        cout << endl;
    }
}
