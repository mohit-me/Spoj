#include<cstdio>
using namespace std;
int main()
{
    long long a,b,c,max,min,mid;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a==0&&b==0) mid=c;
    else if(c==0&&b==0) mid=a;
    else if(a==0&&c==0) mid=b;
    if(a<b&&a<c) {min=a; mid=a+b*c;}
    else if(b<a&&b<c) {min=b; mid=b+a*c;}
    else mid=c+b*a;
    printf("%lld",mid);

   return 0;
}

