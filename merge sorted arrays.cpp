#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<n2;j++){
        cin>>arr2[j];
    }
    vector<int> v;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            v.push_back(arr1[i]);
            i++;
        }
        else{
            v.push_back(arr2[j]);
            j++;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
