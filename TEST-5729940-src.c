#include<stdio.h>
int main()
{
   int i;
   do
   {
      scanf("%d", &i);
      if(i<0 || i==42)
      break;
      else
      printf("\n%d\n",i);
     }
     while(i>=0 && i!=42);
     return 0;
}
