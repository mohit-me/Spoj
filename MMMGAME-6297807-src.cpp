#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int T,N,a[48],i,flag,sum;
    scanf("%d",&T);
    while(T--)
    {
        sum=0;
        flag=0;
        memset(a,0,sizeof(a));
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(sum==N)
        {
            if(sum%2==0)
                cout<<"John"<<endl;
            else
                cout<<"Brother"<<endl;
        }
        else
        {
            for(i=1;i<=N;i++)
                flag=flag^a[i];
            if(flag==0)
                cout<<"Brother"<<endl;
            else
                cout<<"John"<<endl;
        }
    }
    return 0;
}

