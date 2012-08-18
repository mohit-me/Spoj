#include<stdio.h>
int main()
{
 int i,j,k,t;
 for(i=50;i<180;i++)
  {i=i-50;
      for(j=i;j<1000;j++)
   for(k=((2000-i-j)/2)+1;k>=j;k--)
   {
     if(i*j*k<=1000000) break;
    if(((i+j+k)*1000000)%(i*j*k-1000000)==0)
                {
                    t=((i+j+k)*1000000)/(i*j*k-1000000);
                    if((t+i+j+k>2000)||t<k) continue;
                       printf("%.2lf %.2lf %.2lf %.2lf\n",i/100.0,j/100.0,k/100.0,t/100.0);
                }
   }i=i+50;
   }
   return 0;
}


