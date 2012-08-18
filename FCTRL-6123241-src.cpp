#include<stdio.h>

int main()
{
long lCount = 0, lNumber = 0,i = 1;
long lSum=0;
scanf("%ld",&lCount);
while(lCount > 0)
{
scanf("%ld",&lNumber);
lSum = 0;
while(lNumber >= 5)
{
lNumber = lNumber/(5);
lSum += lNumber;
}
printf("%ld\n",lSum);
lCount--;
}
return 0;
}
