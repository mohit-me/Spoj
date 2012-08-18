#include<iostream>
using namespace std;
int main()
{
    int n;
    long s;
    while(1)
    {
          cin>>n;

        if(n==0) return 0;
        n=n+1;
        s=(3*n*n-n)/2;
        cout<<s<<endl;
    }
}
