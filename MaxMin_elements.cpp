#include<iostream>
using namespace std;
int findmax(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(b>c)
            return b;
        else
            return c;
    }
}
int findmin(int a, int b, int c)
{
    if(a<b)
    {
        if(a<c)
            return a;
        else
            return c;
    }
    else
    {
        if(b<c)
            return b;
        else
            return c;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter the three elments :";
    cin>>a>>b>>c;
    cout<<"Max: "<<findmax(a,b,c)<<"\n";
    cout<<"Min: "<<findmin(a,b,c);        
    return 0;
}
