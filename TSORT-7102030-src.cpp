#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long i=0,t,a[1000000];
    scanf("%ld",&t);
    while(i<t)
    {
        scanf("%ld",&a[i]);
        i++;
    }
    sort(a,a+i);
    for(i=0;i<t;i++)
        printf("%ld\n",a[i]);
    return 0;
}

