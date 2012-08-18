#include <stdio.h>
int main()
{
    int T,n,i,m,d,h[500],cnt=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&n,&m,&d);
        cnt=0;

        for(i=0;i<n;i++)
            {
                scanf("%d",&h[i]);
                while((h[i]-=d)>0) {
                cnt++;
            }
            }

          if(cnt>=m) printf("YES\n");
          else printf("NO\n");
    }
    return 0;
}
