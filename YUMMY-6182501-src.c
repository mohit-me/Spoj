#include<stdio.h>
int main()
{
    int t,i=0,a;
    long long n[16]={1,1,1,4,6,19,43,120,307,866,2336,6588,18373,52119,147700,422016};
    scanf("%d",&t);
    while(i<t)
    {
        scanf("%d",&a);
        printf("Case #%d: %lld\n",++i,n[a-1]);
    }
    return 0;
}
