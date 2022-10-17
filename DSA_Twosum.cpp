#include<iostream>
#include <vector>

using namespace std;
    
 void twosums(vector<int>v)
    {
    for (int i = 0 ;i <v.size();i++)
    { 
    for ( int j =i+1;j<v.size();j++)
    {
    if(v[i]+v[j]==9)
    {
  cout<<i<<"\n"<<j ;
    }
  
    } }
    }
    int main()
    {
     vector<int>v = {0,1,2,4,3,5};
     
    twosums(v);
    
    }
