#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<map>
#include<vector>
#include<cassert>
#include<cstring>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long t,k,n,i,j,len;
    string str;
    cin>>t;
    while(t--)
    {
        fflush(stdin);
        cin>>str;
        j=str[str.length()-1];
        if(j%2==0) cout<<"Mandark\n";
        else cout<<"Dexter\n";
    }
return 0;
}
