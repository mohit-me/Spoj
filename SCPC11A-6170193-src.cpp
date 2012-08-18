#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int q[25];
int n,w;

int main(){
    while(scanf("%d%d",&n,&w)){
        if(n==0 && w==0) break;
        fill(q,q+25,0);
        int most=0,m=0;
        for(int i=0; i<n; i++){
            int a; scanf("%d",&a);
            int b=a/w; q[b]++;
            m=max(m,b);
        }
        for(int i=0; i<=m; i++){
            most=max(most,q[i]);
        }
        double res=0.01;
        for(int i=m; i>=0; i--){
            res+=(double)(i)/(double)(m)*(double)(q[m-i])/(double)(most);
        }
        printf("%.6f\n",res);
    }
}
