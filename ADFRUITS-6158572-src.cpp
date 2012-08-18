#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char a[103];
char b[103];
typedef struct
{
    int len;
    char c;
    int fx;
    int fy;
}SS;
SS f[103][103];
void back(int x, int y)
{
    if(f[x][y].fx!=-1&&f[x][y].fy!=-1)
    {
        back(f[x][y].fx, f[x][y].fy);
        printf("%c", f[x][y].c);
    }
}
int main()
{
    while(scanf("%s%s", a, b)==2)
    {
        memset(f, 0, sizeof(f));
        int na=strlen(a);
        int nb=strlen(b);
        for(int i=1; i<=na; i++)
            for(int j=1; j<=nb; j++)
                f[i][j].len=2<<29;
        for(int i=1; i<=na; i++)
        {
            f[i][0].len=i;
            f[i][0].c=a[i-1];
            f[i][0].fx=i-1;
            f[i][0].fy=0;
        }
        for(int i=1; i<=nb; i++)
        {
            f[0][i].len=i;
            f[0][i].c=b[i-1];
            f[0][i].fx=0;
            f[0][i].fy=i-1;
        }
        f[0][0].len=0;
        f[0][0].fx=f[0][0].fy=-1;
        for(int i=1; i<=na; i++)
        {
            for(int j=1; j<=nb; j++)
            {
                if(a[i-1]==b[j-1]&&f[i][j].len>f[i-1][j-1].len+1)
                {
                    f[i][j].len=f[i-1][j-1].len+1;
                    f[i][j].c=a[i-1];
                    f[i][j].fx=i-1;
                    f[i][j].fy=j-1;
                }
                if(f[i][j-1].len+1<f[i][j].len)
                {
                    f[i][j].len=f[i][j-1].len+1;
                    f[i][j].c=b[j-1];
                    f[i][j].fx=i;
                    f[i][j].fy=j-1;
                }
                if(f[i-1][j].len+1<f[i][j].len)
                {
                    f[i][j].len=f[i-1][j].len+1;
                    f[i][j].c=a[i-1];
                    f[i][j].fx=i-1;
                    f[i][j].fy=j;
                }
            }
        }
        back(na, nb);
        printf("\n");
    }
    return 0;
}
