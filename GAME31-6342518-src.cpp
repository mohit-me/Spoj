#include<stdio.h>
#include<string.h>
int n,s,card[8];
char str[30];
int dfs(int sum)
{
    if(sum==31)
    return 1;
   for(int i=1;i<=6;i++)
        if(card[i]&&sum+i<=31)
        {
            card[i]--;
        if(dfs(sum+i))
        {
            card[i]++;

            return 0;
        }
        card[i]++;
        }
        return 1;
}
int main()
{
    int i;
    int sum=0;
    while(scanf("%s",str)!=EOF)
    {
        sum=0;
        printf("%s ",str);
       for(i=0;i<7;i++)
       card[i]=4;
       n=strlen(str);
       for(i=0;i<n;i++)
       {
       sum+=str[i]-'0';
       card[str[i]-'0']--;
       }
       if(sum>=31)
       {
           if(n%2==0)
           printf("B\n");
           else
           printf("A\n");
           continue;
       }
        if(dfs(sum))
        {
            if(n%2==1)
            printf("A\n");
            else
            printf("B\n");
        }
        else
        {

            if(n%2==0)
            printf("A\n");
            else
            printf("B\n");
        }
    }
   return 0;
}
