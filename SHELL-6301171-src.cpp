#include <stdio.h>
    int main() {
    int n,i=0,bp=1,a[10][2];
    char c[10],b[10];
         scanf("%s",&b);
         if(b[0]=='l') bp=1;
        else if(b[0]=='c') bp=2;
        else if(b[0]=='r') bp=3;
    scanf("%d",&n);
    while(i<n){
        scanf("%s %s",&b,&c);
        if(b[0]=='l') a[i][0]=1;
        else if(b[0]=='c') a[i][0]=2;
        else if(b[0]=='r') a[i][0]=3;
        if(c[0]=='l') a[i][1]=1;
        else if(c[0]=='c') a[i][1]=2;
        else if(c[0]=='r') a[i][1]=3;
        if(bp==a[i][0]) bp=a[i][1];
        else if(bp==a[i][1]) bp=a[i][0];
        i++;
        }
        if(n==10) return 0;
        if(bp==1) printf("left\n");
        else if(bp==3) printf("right\n");
        else if(bp==2) printf("center\n");
       return 0;
    }


