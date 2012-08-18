#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAXN=1000010;

int n,top,st[MAXN],tem;
long long ans;

int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    top=ans=0;
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&tem);
        while(top)
        {
            if(tem>=st[top])
            {
                if(top==1)
                    ans+=tem;
                else
                {
                    if(tem>st[top-1])ans+=st[top-1];
                    else ans+=tem;
                }
                top--;
            }
            else break;
        }
        st[++top]=tem;
    }
    for(int i=1;i<top;++i)
    ans+=st[i];
    printf("%lld\n",ans);
    return 0;
}
