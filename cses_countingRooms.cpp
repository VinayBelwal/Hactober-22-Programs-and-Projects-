#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
const int mod=1000000007;
int dx[]={-1,1,0,0,};
int dy[]={0,0,-1,1};
int dist[10001][10001];
int visited[10001][10001];
char arr[10001][10001];
int n,m;

bool isvalid(int x,int y)
{
    if(x<1 || x>n || y<1 || y>m)
    {
        return false;
    }
    if(visited[x][y]==1 || arr[x][y]=='#')
    {
        return false;
    }
    return true;
}

void dfs(int srcx,int srcy)
{
    visited[srcx][srcy]=1;
    for(int i=0;i<4;i++)
    {
        if(isvalid(srcx+dx[i],srcy+dy[i]))
        {
            dfs(srcx+dx[i],srcy+dy[i]);
        }
    }
}

void solve()
{

  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
        cin>>arr[i][j];
    }
  }
  int cnt=0;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
        if(arr[i][j]=='.' && !visited[i][j])
        {
            cnt++;
            dfs(i,j);
        }
    }
  }
  cout<<cnt<<endl;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
        visited[i][j]=0;
    }
  }
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int t=1;
    // cin>>t;
    while (t--)
    { 
       solve();
    }
    return 0;
}
