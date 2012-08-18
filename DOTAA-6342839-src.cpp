#include <stdio.h>
int main()
{
    int T,n,i,m,ans,d,ch,h[500],cnt=0,flag;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&n,&m,&d);
        for(i=0;i<n;i++)
            scanf("%d",&h[i]);
        cnt=0;
        flag=0;ch=0;
        for(i=0;i<n;i++)
        {
            while(h[i]-d>0) {
                h[i]-=d;
                cnt++;
            }
        }
          if(cnt>=m) printf("YES\n\n");
          else printf("NO\n\n");
    }
    return 0;
}
