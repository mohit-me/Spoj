#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
int n,i=0,ans=0;
int a1=0,a2=0,a3=0;
int n1,n2;
char op;
cin>>n;
for(i=0;i<n;i++)
{
    cin >> n1 >> op >> n2;
    if(n1==3) a3++;
    else if(n2==2) a2++;
    else if(n2==4) a1++;
}
ans=a3;
a1=a1-a3;
ans+=(a2-a2%2)/2;
if(a2%2)
{
    ans++;
    a1-=2;
}
if(a1 > 0) {
ans+=(a1-(a1%4))/4;
if(a1%4>0) {
ans++;
}
}
cout<<ans+1<<endl;

return 0;
}

