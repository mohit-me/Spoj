#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void switcher(char c,char ch[])
{
    int n,i,j,len;
    char str[6];
    if(c==' ')n=0;
    else n=c-'A'+1;
    for(i=4;n;i--,n/=2){
        ch[i]=n%2+'0';
    }
    for(i;i>=0;i--)
        ch[i]='0';
}
int main()
{
    int T,t,r,c,i,j,k,co,l,flag;
    char str[100],str1[500],ch[6],map[25][25];
    scanf("%d",&t);T=t;
    while(scanf("%d%d",&r,&c),t--){
        getchar();gets(str);
        for(i=0,k=0;str[i]!='\0';i++){
            switcher(str[i],ch);
            for(j=0;j<5;j++)
                str1[k++]=ch[j];
        }
        for(k;k<r*c;k++)
            str1[k]='0';
        for(co=1,k=0;;co++){
            for(l=co;l<=c-co+1;l++)
                map[co][l]=str1[k++];
            if(k>=r*c)break;
            for(l=co+1;l<=r-co+1;l++)
                map[l][c-co+1]=str1[k++];
            if(k>r*c)break;
            for(l=c-co;l>=co;l--)
                map[r-co+1][l]=str1[k++];
            if(k>=r*c)break;
            for(l=r-co;l>co;l--)
                map[l][co]=str1[k++];
            if(k>=r*c)break;
        }
        printf("%d ",T-t);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++)
                printf("%c",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
