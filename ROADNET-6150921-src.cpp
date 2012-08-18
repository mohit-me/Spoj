#include<iostream>
#define MAXN 200
using namespace std;
int dist[MAXN][MAXN],n;
int main (void){
int t;
cin>>t;
for (int i=0;i<t;++i){
   cin>>n;
   for (int j=0;j<n;++j)
    for (int k=0;k<n;++k)
       cin>>dist[j][k];
   for (int j=0;j<n-1;++j)
    for (int k=j+1;k<n;++k){
       bool neighbour=true;
       for (int l=0;l<n;++l)
           if (k!=l&&j!=l&&dist[k][l]+dist[l][j]==dist[k][j]){
              neighbour=false;
        break;
           }
     if (neighbour) cout<<j+1<<' '<<k+1<<endl;
         }
}
return 0;
}