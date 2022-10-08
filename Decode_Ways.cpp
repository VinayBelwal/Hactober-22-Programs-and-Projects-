//This is the code for Decoding the no of ways the string can be decoded from ascii numbers
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numDecodings(string s)
{
    int n = s.length();
    vector<int> dp(n + 1, -1);
    return helper(s, n, dp);//calculates each subproblem while storing it in a dp array
}
int helper(string &s, int k, vector<int> &dp)
{
    if (k == 0)
        return 1;
    int i = s.length() - k;
    if (s[i] == '0')
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int ans = helper(s, k - 1, dp);
    if (k >= 2 && stoi(s.substr(i, 2)) <= 26)
        ans += helper(s, k - 2, dp);
    dp[i] = ans;
    return ans;
}

int main()
{
    cout<<numDecodings("226");
    return 0;
}
