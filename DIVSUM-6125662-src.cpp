#include<stdio.h>
int main()
    {
    long result[500000]={0};
    long i, j, p, t, n;
    for (i=0;i<500000;i++)
        {
        p=i+1;
        for (j=2*p; j<=500000; j+=p)
            {
            result[j-1]+=p;
            }
        }
    scanf("%d", &t);
    while (t--)
        {
        scanf("%d", &n);
        printf("%d\n", result[n-1]);
        }
    return 0;
    }
