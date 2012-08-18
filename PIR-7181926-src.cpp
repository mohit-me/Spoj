#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<sstream>
using namespace std;
#define INF 2000000000
#define INFLL (1LL<<62)
#define SS ({int x;scanf("%d", &x);x;})
#define SSL ({LL x;scanf("%lld", &x);x;})
#define rep(i,n) for(int i=0;i<(n);i++)
#define rept(i,m,n) for(int i=(m);i<(n);i++)
#define ull unsigned long long
#define lint long long
#define MX 10000001
//lint a[1000000];
int main()
{
        int i,j,k,l,n,m,t;
        t=SS;
        double u,v,w,U,V,W,Volume,a,b=12;
        while(t--)
        {
            cin>>u>>v>>w>>W>>V>>U;
        a=4*(pow(u,2)*pow(v,2)*pow(w,2)) - pow(u,2)*pow((pow(v,2)+pow(w,2)-pow(U,2)),2) - pow(v,2)*pow((pow(w,2)+pow(u,2)-pow(V,2)),2) - pow(w,2)*pow((pow(u,2)+pow(v,2)-pow(W,2)),2) + (pow(v,2)+pow(w,2)-pow(U,2))*(pow(w,2)+pow(u,2)-pow(V,2))*(pow(u,2)+pow(v,2)-pow(W,2));
        Volume=sqrt(a);
        Volume/=b;
        printf("%.4lf\n",Volume);
 
    }
        return 0;
}
