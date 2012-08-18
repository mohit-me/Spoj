#include<stdio.h>
int main()
{
        int n;
        int i;
        int a,b,c;
        int count;
        int x,y=0;
        int temp;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                int flag=0;
                count=0;
                y=0,x=0;
                scanf("%d%d%d",&a,&b,&c);
                if(c>a && c>b)
                {
                        printf("-1\n");
                        continue;
                }
                if(a==c||b==c)
                {
                        printf("1\n");
                        continue;
                }
                else
                {
                if(a<b)
                {
                        temp=a;
                        a=b;
                        b=temp;
                }
                while(1)
                {
                        x=b;
                        count++;
                        y=y+x;
                        count++;
                        if(a-y==c||y==c)
                        break;
                        if(y>a)
                        {
                                x=y-a;
                                y=a;
                                if(x==c)
                                break;
                                y=0;
                                count++;
                                y=x;
                                count++;
                                if(a-y==c)
                                break;
                        }
                        else if(y==a&&x==b)
                        {
                        printf("-1\n");
                        flag=1;
                        break;
                        }
                        x=0;
                }
                if(flag!=1)
                printf("%d\n",count);
                }
        }return 0;
}

