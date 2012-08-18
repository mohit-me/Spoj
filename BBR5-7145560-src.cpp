#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) return 0;
        int a[6]={0},i;
        for(i=0;n!=0;i++)
        {
            a[i]=n%10;
            n=n/10;
        }
        sort(a,a+i);
        for(i=i-1;i>=0;i--)
        {
            //if(a[i]!=0)
            cout<<a[i];
        }
        cout<<" ";
        for(i=0;i<=5;i++)
        {
            if(a[i]!=0)
            cout<<a[i];
        }
        cout<<endl;
    }



}

