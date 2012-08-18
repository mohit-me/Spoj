#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    char a[101][101];
    int t,m,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(i=0;i<m;i++)
            cin>>a[i];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cout<<a[j][i];
    cout<<endl;
    }
return 0;
}
