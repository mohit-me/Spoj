#include<stdio.h>
int main()
{
    long n,k,j,m;
    while(scanf("%ld",&n)!=EOF)
    {
          k=1;j=1;m=n;
          while (k<n){
           n=n-k;
           k++;
           j++;
              }
              printf("TERM %d IS %c\n",m,char((j-1)% 26+65));
    }
return 0;
}

