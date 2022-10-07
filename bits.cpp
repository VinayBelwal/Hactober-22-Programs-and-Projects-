#include"bits/stdc++.h"
using namespace std;
int getbit(int n,int pos)
{
    return((n&(1<<pos))!=0);
}
int setbit(int n,int pos)
{
    return((n|(1<<pos)));
}
int clearbit(int n,int pos)
{
    int mask=~(1<<pos);
    return(n & mask);
}
int updatebit(int n, int pos)
{
    int mask=~(1<<pos);
    n=n&mask;
    return((n|(0<<pos)));
}
int countone(int n)
{
    int count=0;
    while(n!=0)
   {
    n=n & n-1;
    count++;
    }
    return count;
}
bool ispowerof2(int n)
{
    return(n && !(n & n-1));
}
int main()
{
    int n,pos;
    cin>>n;
    cin>>pos;
    cout<<getbit(n,pos)<<endl;
    cout<<setbit(n,pos)<<endl;
    cout<<clearbit(n,pos)<<endl;
    cout<<updatebit(n,pos);
    cout<<ispowerof2(32)<<endl;
    cout<<countone(16);
    return 0;
}

