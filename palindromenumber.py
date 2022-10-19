 include <iostream>
 using namespace std;
 bool isPalindrome(int x) {
        bool y=true;
        if(x<0||x%10==0){
            y=false;
        }
        else{
            int rev=0,n=x;
            while(x!=0){
                rev=rev*10+x%10;
                x/=10;
            }
            if(rev==n){
                    y=true;

                }
        }
        return y;
 }
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<isPalindrome(x);
    return 0;
}
