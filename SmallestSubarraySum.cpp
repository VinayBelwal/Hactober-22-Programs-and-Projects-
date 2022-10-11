#include<bits/stdc++.h>
using namespace std;
int smallestSumSubarray(vector<int>& a){
      //inverse of Kadanes algo 
      int n=a.size();
      int sum=0,ans=INT_MAX;
      for(int i=0;i<n;i++){
          if(a[i]+sum<=a[i]){
              sum=sum+a[i];
          }
          else{
              sum=a[i];
          }
          if(ans>sum)
          ans=sum;
      }
      return ans;
  }
    
  
    int main(){
    	int n;
    	cout<<"Enter the size of array: ";
    	cin>>n;
    	cout<<"Enter the elements of the array ";
    	int x;
    	vector<int> v;
    	for(int i=0;i<n;i++){
    		cin>>x;
    		v.push_back(x);
		}
		int ans=smallestSumSubarray(v);
		cout<<"Smallest Sum of Subarray is "<<ans;
	}