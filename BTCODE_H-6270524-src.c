#include <stdio.h>
#define ld long double
 
ld P(ld a, int n)
{
ld r=1;
for(;n; r=(n&1)?r*a:r,a*=a,n>>=1);
return r;
}
 
main()
{
int fall, i, n, l, h;
ld res;
for(scanf("%d",&fall); fall--; printf("%.2lf\n",(double)res))
if(!(res=0)&&scanf("%d %d",&n,&l)&&n==1)
res=l+1;
else
for(res=h=1; h<=l; h++)
for(i=0; i<n; res+=P((ld)1-P(0.5,h),i),i++);
return 0;
}