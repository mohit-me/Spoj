#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,n,j,A,B,C;
    char ch,s[60],a[3][20];
    scanf("%d",&n);
    getchar();
    for (i=0;i<n;i++)
    {
        getchar();
        scanf("%s + %s = %s",&a[0],&a[1],&a[2]);
        for (j=0;j<3;j++)
        {
            if (strchr(a[j],'m')!=NULL) break;
        }
        if (j==0)
        {
            B=atoi(a[1]);
            C=atoi(a[2]);
            printf("%d + %d = %d\n",C-B,B,C);
        }
        else if (j == 1)
        {
            A=atoi(a[0]);
            C=atoi(a[2]);
            printf("%d + %d = %d\n",A,C-A,C);
        }
        else
        {
            A=atoi(a[0]);
            B=atoi(a[1]);
            printf("%d + %d = %d\n",A,B,A+B);
        }
    }
    return 0;
}

