#include<stdio.h>
#include<cmath>
#include<string.h>
#include<iostream>
using namespace std;
int dp[105][201];
int dist[105][2];
int main()
{ int i,j,k,dis,tem,a,o,u,tep,t;
cin>>dis;
int f=1;
 while(scanf("%d%d", &dist[f][0], &dist[f][1]) == 2)
 {

f++;
}
f--;
memset(dp,-1,sizeof(dp));
dp[0][100]=0;
dist[0][0]=dist[0][1]=0;
if(dist[f][0]!=dis)
{
f++;
dist[f][0]=dis;
dist[f][1]=0;
}
if(dist[1][0]>100)
 {
 cout<<"Impossible\n";
 return 0;
 }
dp[1][100-dist[1][0]]=0;
 for(i=2;i<=f;i++)
 {
 a=dist[i][0]-dist[i-1][0];
 if(a>200)
 {
 cout<<"Impossible\n";
 return 0;
 }
 for(j=0;j<=200;j++)
 {
 if(dp[i-1][j]!=-1)
 {

 o=j-a;
 if(o>=0)
 {
 tem=200-j;
 for(t=0;t<=tem;t++)
 {
 u=t*dist[i-1][1]+dp[i-1][j];
 if(dp[i][j+t-a]==-1||dp[i][j+t-a]>u)
 dp[i][j+t-a]=u;
 }
 }
 else
 {
 tem=a-j;
 tep=200-j;
 for(t=tem;t<=tep;t++)
 {
 u=t*dist[i-1][1]+dp[i-1][j];
 if(dp[i][j+t-a]==-1||dp[i][j+t-a]>u)
 dp[i][j+t-a]=u;
 }
 }
 }
 }
 }
 int ans=500000000;
 for(i=200;i>=100;i--)
 {
 if(dp[f][i]!=-1)
 {
 if(ans>dp[f][i])
 ans=dp[f][i];
 }
 }
 if(ans==500000000)
 cout<<"Impossible\n";
 else
 cout<<ans<<endl;
 return 0;
 }
