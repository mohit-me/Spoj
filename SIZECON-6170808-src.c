#include <stdio.h>
main(){long long sum=0;int d,t;scanf("%d",&t);while(t--){scanf("%d",&d);sum+=d>0?d:0;}printf("%lld",sum);return 0;}
