#include <cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    long long n,ans;
    while(t--)
    {
        scanf("%lld",&n);
        ans=n*(3*n+1)/2;
        ans%=1000007;
        printf("%lld\n",ans);

    }


    return 0;
}
