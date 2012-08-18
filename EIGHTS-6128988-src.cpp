#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long k,n;
    cin>>n;
    while(n--)
    {
        scanf("%lld",&k);
        cout<<192+(k-1)*250<<endl;

    }
    return 0;
}

