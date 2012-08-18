#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int i,j,k;
  int n,res_pi,res_si,pi,si;
  float av=0;
  scanf("%d",&n);
  res_pi=0;res_si=0;
  while(n--)
  {
   scanf("%d%d",&pi,&si);
   res_pi+=pi;
   res_si+=si;
  }
  av=0;
  av=(float)((res_si*100)/res_pi);
  if(av>=90&&av<=100)
   printf("A\n");
  else if(av>=80&&av<=89)
   printf("B\n");
  else if(av>=70&&av<=79)
   printf("C\n");
  else if(av>=60&&av<=69)
   printf("D\n");
  else
   printf("F\n");



return 0;

}
