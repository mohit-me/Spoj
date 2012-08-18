#include<iostream>
#include<cstdio>
int main()
{
    long n,i,m,xor1;
    scanf("%ld",&n);
    scanf("%ld",&m);
    xor1=m;
    for(i=1;i<n;i++)
    {
        scanf("%ld",&m);
        xor1=m^xor1;
    }
    printf("%ld",xor1);
    return 0;
}
