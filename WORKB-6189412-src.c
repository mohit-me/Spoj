#include<stdio.h>
int main()
{
    long long res;
    int n,a,b;
    int t1,t2;
    int i,T;
    int iCase=0;
    scanf("%d",&T);
    while(T--)
    {
        iCase++;
        scanf("%d%d%d",&n,&a,&b);
        res=a+b;
        scanf("%d",&t1);
        for(i=1;i<n;i++)
        {
            scanf("%d",&t2);
            if((t2-t1-1)*b>2*a)  res+=2*a+b;
            else  res+=b*(t2-t1);
            t1=t2;
        }
        res+=a;
        printf("Case #%d: %lld\n",iCase,res);
    }
    return 0;
}
