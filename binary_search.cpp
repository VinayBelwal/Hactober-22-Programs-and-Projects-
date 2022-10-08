#include<iostream>
using namespace std;


int b_s(int arr[],int l,int h,int key)   //function for binary serach
{
    if(l<=h) //search the key by breaking in half until low index is less then or equal to high index
    {
        int mid=(l+h)/2;    //find the mid index
        if(arr[mid]==key) return mid;    //search the key at mid index
        if(key>arr[mid]) return b_s(arr,mid+1,h,key); //if key is greater then mid element
        if(key<arr[mid]) return b_s(arr,0,mid-1,key);  //if key is lessthen mid element
    }
    return -1; //if element is not found return -1
}

int main()
{
    int n,key;
    cout<<"Enter the number of elements in array:";
    cin>>n;
    int arr[n];
    int i;
    cout<<"Enter the element of array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>key;
    int found=b_s(arr,0,n,key);
    if(found==-1) cout<<"Element "<<key<<" is not present in array\n";
    else cout<<"Element "<<key<<" is found at "<<found+1<<" positon";
}