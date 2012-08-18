#include <stdio.h>
#include<math.h>
main()
{
    int t;
    long a,b,c;
    float d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        c=(a*a+b*b);
        d=float(sqrt(c));
        if(d==long(d))
            printf("YES %d\n",int(d));
        else printf("NO\n");
    }
    return 0;
}

