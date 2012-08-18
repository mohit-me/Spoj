#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,flag[50]={0},i,j;
    char a[50][50];
    cin>>t;
    j=0;
    while(j<t)
    {
        cin>>a[j];
        for(i=0;i<strlen(a[j]);i++)
        {
            if(a[j][i]!='.') {flag[j]=1;}
        }
        j++;
    }
    j=0;
    while(j<t)
    {
       if(flag[j]==0) cout<<"Possible\n";
       else cout<<"You shall not pass!\n";
       j++;
    }

    return 0;
}
