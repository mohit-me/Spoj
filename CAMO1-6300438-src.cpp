#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
 while(t--)
 {
     float n;
     float a,flag=0,k;
     float d,d1;
     scanf("%f %f",&n,&k);
     if(float(2*n/k)!=int(2*n/k)) {flag=0; goto c;}
     else if(k==1) flag=1;
     else
     for(a=1;a<n;a++)
     {d=float((2*n-2*a*k)/(k*k-k));
     if(d>0&&d==int(d)) {flag=1; goto c;}
     }
     c:
     if(flag==1) printf("Padam tharumaru machi!\n");
     else printf("Padam sotha machi!\n");
}

 return 0;
}
