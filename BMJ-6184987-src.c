#include<stdio.h>
int main()
{
 int Numbers, i, Input, m;
 while(scanf("%d", &Input)!=EOF)
 {
  int number=1,x=0,y=0;
  while(Input != number)
  {
   if(x>=0 && x<-y)
   {
    ++x;
    ++number;
    continue;
   }
   if(x<=0 && y>-x)
   {
    --x;
    ++number;
    continue;
   }
   if(x>=0 && x>=-y && y<1)
   {
    ++y;
    ++number;
    continue;
   }
   if(x<0 && y<=-x && y>0)
   {
    --y;
    ++number;
    continue;
   }
   if(x<0 && y<=0)
   {
    ++x;
    --y;
    ++number;
    continue;
   }
   if(x>0 && y>=1)
   {
    --x;
    ++y;
    ++number;
    continue;
   }
  }
    printf("%d %d\n",x,y);}
    return 0;
}
