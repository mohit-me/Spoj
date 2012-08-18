#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i=0,j;
    scanf("%d",&t);
    while(i<t)
    {
            j=0;
            int flag=0;
            long n;
            int a[1001]={0},b[1000]={0},m,pos=0;
            scanf("%ld",&n);
            if(n==0) flag=1;
            while(j<n)
            {
                scanf("%d",&m);
                if(m<0) b[-m]++;
                a[m]++;
                j++;
                if(a[m]>(n/2)) {flag=1;pos=m;}
                else if(b[-m]>n/2){flag=1;pos=-m;}
            }
            if(flag==1) printf("YES %d\n",pos);
            else printf("NO\n");
            i++;
    }
    return 0;
}



