#include<stdio.h>
int main()
{
    long long n,m,ans,i,ans1;
    int a[100000];
    while(1)
    {
        scanf("%lld%lld",&n,&m);
        if(n==-1&&m==-1) return 0;
        else
        {
            ans=0;ans1=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                ans+=a[i];
                ans1=ans1+ans;
            }
            printf("%lld\n",ans1*m);
        }
    }

return 0;
}

