#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

#define Max 10000
int dp[Max+1];
bool temp[Max+1];
int w[500],v[500];

int main()
{
    int T,E,F,N;
    int i,j;

    scanf("%d",&T);
    while(T--)
    {


        scanf("%d%d%d",&E,&F,&N);

        for(i=0;i<N;i++)
        scanf("%d%d",&v[i],&w[i]);

        memset(dp,0,sizeof(dp));
        memset(temp,0,sizeof(temp));
        temp[0]=true;
        for(i=0;i<N;i++)
        {
            for(j=w[i];j<=Max;j++)
            {
                if(temp[j-w[i]]&&dp[j]!=0)    
                {
                     dp[j]=dp[j]<dp[j-w[i]]+v[i]? dp[j]:dp[j-w[i]]+v[i];
                     temp[j]=true;
                }
                else if(temp[j-w[i]]&&dp[j]==0)
               {
                    dp[j]=dp[j-w[i]]+v[i];
                    temp[j]=true;
                }
            }
     }

    if(temp[F-E]==false)
    {
       printf("This is impossible.\n");
    }
     else
     {
        printf("The minimum amount of money in the piggy-bank is %d.\n",dp[F-E]);
     }

   }
   return 0;
}