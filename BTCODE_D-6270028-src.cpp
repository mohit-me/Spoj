#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t,m,n,i,j,a[101][101],b[101][101],d[101][101];
    long long c[101][101],max=0,res=0;
    scanf("%d",&t);
    while(t--)
    {
        res=0;
        scanf("%d%d",&m,&n);
         for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
         for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
	     for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%lld",&c[i][j]);
          for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                {
                    b[i][j]=(a[i][j]<b[i][j]?a[i][j]:b[i][j]);
                    c[i][j]*=b[i][j];
                }
           for(i=0;i<m;i++)
            {
                 max=0;
            for(j=0;j<n;j++)
                   max=(c[i][j]<max?max:c[i][j]);
                res+=max;
            }
            printf("%lld\n",res);

    }
    return 0;
}

