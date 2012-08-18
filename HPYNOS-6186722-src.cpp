#include<iostream>
using namespace std;
int main()
{
    long long n,a,j=0,i;
    cin>>n;
    c:
    if(n==1) { cout<<j; return 0;}
    else
    {
    a=0;
    for(i=0;n>0;i++)
    {
        a+=(n%10)*(n%10);
        n=n/10;
    }
    j++;
    n=a;
    }
    if(j<33) goto c;
    else {cout<<-1; return 0;}
}
