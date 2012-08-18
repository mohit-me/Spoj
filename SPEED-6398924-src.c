#include <stdio.h>
#include <math.h>
int gcd(int a,int b)
{
    int c;
    while(1)
    {
    c = a%b;
    if(c==0)
    return b;
    a = b;
    b = c;
    }
}
int main()
{
    int n,a,b,ans,gcc;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        gcc=gcd(abs(a),abs(b));
        //printf("%d\n",gcc);
        a=a/gcc;
        b=b/gcc;
        if(a-b<0) ans=b-a;
        else ans=a-b;
        printf("%d\n",ans);
    }
    return 0;
}
