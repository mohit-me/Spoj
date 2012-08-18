#include<cstdio>
#include<iostream>
using namespace std;
long long fact(int n)
{
long long k;
if(n==0)
return(1);
else
{
k=n*fact(n-1);
}
return(k);
}

int main()
{

    int n,i,k;
    unsigned int a[13];
    long long ans;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        i=0;
        ans=fact(n);
        while(i<k)
        {
            cin>>a[i];
            ans=ans/fact(a[i]);
            i++;

        }
    cout<<ans<<endl;
    }

}
