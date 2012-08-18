#include <stdio.h>

int main()
{
 int n,m;
 while(1)
 {
  scanf("%d",&n);
  m=0;
  int last=0;
  if(n==0)
   break;
  do{
   m++;
   int retval = 0;
   int i;
   for(i = 2;i<= n-1;i++)
      retval = (retval + m) % i;
   last=retval+2;
  }while(last!=13);
  printf("%d\n",m);
 }
 return 0;
}
