#include <stdio.h>

const int N=100000000;
int t,a,i,c[N/10+1],n,l,r,m,v[4*(N/10)];

int f(int x)
{
 l=0;
 r=n;
 while ( l<r )
  {
   m=(l+r)/2;
   if ( x<v[m] ) r=m;
            else l=m+1;
  }
 return l;
}

main()
{
 for ( i=1;i<=N/10;i++ )
  {
   if ( i%2==1 ) c[i]=c[i/10]-(i%10);
            else c[i]=c[i/10]+(i%10);
   if ( c[i]>0 ) v[n++]=i;
  }
 
 for ( i=N/10+1;i<=N;i++ )
  {
   if ( i%2==1 ) c[0]=c[i/10]-(i%10);
            else c[0]=c[i/10]+(i%10);
   if ( c[0]>0 ) v[n++]=i;
  }

 scanf("%d",&t);
 while ( t-- )
  {
   scanf("%d%d",&a,&i);
   printf("%d\n",f(i)-f(a-1));
  }
}
