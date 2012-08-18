#include <cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    long long n,ans;
    while(t--)
    {
        scanf("%lld",&n);
        ans=n*(n+1)/2;
        ans=ans*3-n;
        ans%=1000007;
        printf("%lld\n",ans);

    }


    return 0;
}
