/*
A question based on mapping

*/
/*Given N string Print unique strings in lexicographical order with their frquency.
N=10^5;
|S|<100;
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        m[s]++;

    }
   for(auto pr: m){
    cout<<pr.first<<" "<<pr.second<<endl;
   }
    
}
/*
Author : Sonali Rao
*/