#include<stdio.h>
#include<string.h>
int main()
    {
    int t,i,l,j,small,flag;
    char s[1000002];
    scanf("%d",&t);
    while(t--)
        {
        small=0;
        scanf("%s",s);
        l=strlen(s);
        i=l/2+(l%2);
        for(j=(l/2)-1;i<=l-1;i++,j--)
            {
            if(s[j]==s[i])
                {
                flag=1;
                }
            else if(s[j]<s[i])
                {
                flag=0;
                small=1;
                break;
                }
            else if(s[j]>s[i])
                {
                flag=0;
                break;
                }
            }
        for(i=0;i<=l/2-1;i++)
            {
            s[l-i-1]=s[i];
            }
        if(small==1 || flag==1)
            {
            if(l%2==0)
            i=l/2;
            else
                {
                if(s[l/2]=='9')
                    {
                    s[l/2]=48;
                    i=(l/2)+1;
                    }
                else
                    {
                    s[l/2]+=1;
                    puts(s);
                    continue;
                    }
                }
            for(;i<=l-1;i++)
                {
                if(s[i]=='9' && i!=l-1)
                    {
                    s[i]=48;
                    s[l-i-1]=48;
                    }
                else if(s[i]=='9' && i==l-1)
                    {
                    s[i]=49;
                    for(j=l-1;j>=0;j--)
                    s[j+1]=s[j];
                    s[0]=49;
                    s[1]=48;
                    s[l+1]='\0';
                    }
                else
                    {
                    s[i]+=1;
                    s[l-i-1]+=1;
                    break;
                    }
                }
            }
        puts(s);
        }
    return 0;
    }

