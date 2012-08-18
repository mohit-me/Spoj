#include<iostream>
using namespace std;
int main()
{
    int t,i,a;
    long long n[16]={1,1,1,4,6,19,43,120,307,866,2336,6588,18373,52119,147700,422016};
    cin>>t;
    i=0;
    while(i<t)
    {
        cin>>a;
        cout<<"Case #"<<++i<<": "<<n[a-1]<<endl;
    }
    return 0;
}
