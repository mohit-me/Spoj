#include<stdio.h>
#include<math.h>

double pie[10000];

int n,f;

const double pi = acos(-1.0);

int Calc(double x)
{
int cnt = 0;
int i;
for(i=0;i<n;i++)
{
   double V = pie[i]*pie[i]*pi;
   cnt += (int)(V/x);
}
return cnt;
}

int main(void)
{
int t;
scanf("%d",&t);
while(t--)
{
   scanf("%d%d",&n,&f);
   int i;
   double low = 0,high = 0;
   for(i=0;i<n;i++)
   {
    scanf("%lf",pie+i);
    if(pi*pie[i]*pie[i] > high)
     high = pi*pie[i]*pie[i];
   }
   for(i=0;i<100;i++)
   {
    double mid = (low+high)/2;
    if(Calc(mid) >= f+1)
     low = mid;
    else
     high = mid;
   }
   printf("%.4lf\n",low);
}
return 0;
}
