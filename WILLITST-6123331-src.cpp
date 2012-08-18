#include<iostream>

using namespace std;
int main()
{
unsigned long long n;
cin>>n;
if(n==0||n==1) goto d;
while(n>1)
{
    if(n%2==0) n=n/2;
    else{
        if(n==3) {cout<<"NIE"; goto c;}
        n=3*n+3;
    }
}
d:
cout<<"TAK";
c:
return 0;
}
