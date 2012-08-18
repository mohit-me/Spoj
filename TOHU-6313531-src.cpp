#include<stdio.h>
int main()
{
int t=1;
long n,i;
double a,sum=0;
scanf("%d",&t);
while(t--)
{
    a=double(2)/double(3);
    scanf("%ld",&n);
        sum=.5*(1.000000000000/2-1.000000000000/3-1.000000000000/(n+1)+1.000000000000/(n+2));
     printf("%.11lf\n",a+sum);
}
return 0;
}
