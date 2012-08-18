#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,k,w;
        cin>>c>>k>>w;
        if(c*w>k) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}
