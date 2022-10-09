                              //CODE OF BUUBLE SORT OF BEST CASE COMPLEXITY


#include <iostream>
using namespace std;

int main() {
	int arr[6]={94,56,2,10,13,69};
	bool swapped=false;    //USED FOR MAKING COMPLEXITY O(n)
	for(int i=0;i<6-1;i++)
	{
	    for(int j=0;j<6-i-1;j++)
	    {
	        if(arr[j]>arr[j+1])
	        {
	            swap(arr[j],arr[j+1]);
	            swapped=true;
	            
	        }
	    }
	    if(swapped=false)    //MEANS ARRAY GETS SORTED NOW 
	    {
	        break;
	    }
	}
	for(int i=0;i<6;i++)
	{
	    cout<<arr[i]<<" ";
	    
	}
	return 0;
}
