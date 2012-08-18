#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,c,i=0,y;
    long long l,p;
    double p1;
    scanf("%d",&t);
    while(i<t)
    {
        scanf("%lld %lld %d",&l,&p,&c);
            int ret = 0;
			double parts = 1.0*p/l;
			while(parts > c){
				ret++;
				//int tmp = (int)sqrt(parts);
				 parts=ceil((sqrt(parts)));
				//if(tmp*tmp == parts) parts = tmp;
				//else parts = tmp+1;
			}
        printf("Case #%d: %d\n",++i,ret);
    }
    return 0;
}
