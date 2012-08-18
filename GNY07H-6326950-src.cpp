#include<cmath>
#include<cstdio>
#define sr(x) ((x)*(x))
double pi=acos(-1.0);
int main(){
    int cas,r=1;
    scanf("%d",&cas);
    while(cas--){
        double ans=1;
        int n=4;
        int m;
        scanf("%d",&m);
        for (int i=1;i<=n/2;i++){
            for (int j=1;j<=m/2;j++){
                ans*=sr( cos(pi*i/(n+1)) )+ sr( cos(pi*j/(m+1)) );
                ans*=4;
            }
        }
        printf("%d %.0f\n",r++,ans);
    }
}
