
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
 int i,j,k,cases;
 int temp,rem,count;
 int n[1000];
 scanf("%d",&cases);
 //calculating good number
 j=0;
 for(i=1;i<501;i++)
  {
    temp=i;
    count=1;
    while(temp>0)
    {
      rem=temp%2;
      if(rem==1) count++;
      temp=temp/2;
     }
     if(count%2==0) {
      //printf("%d  ",i);
      n[j++]=i;
      }
   }

 while(cases--)
 {
   scanf("%d",&j);
   printf("%d\n",n[j-1]);
 }

return 0;
}




