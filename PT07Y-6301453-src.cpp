#include<iostream>
#define MAXN 10000
using namespace std;
int father[MAXN+1];
int getfather(int v){
if (father[v]==v) return v;
return father[v]=getfather(father[v]);
}
int main (void){
int n,m,a,b;
cin>>n>>m;
if (n!=m+1){
   cout<<"NO"<<endl;
   return 0;
}
for (int i=1;i<=n;++i) father[i]=i;
bool flag=true;
for (int i=0;i<m;++i){
   cin>>a>>b;
   int fa=getfather(a);
   int fb=getfather(b);
   if (fa==fb) flag=false;
   father[fa]=fb;
}
if (flag){
   cout<<"YES"<<endl;
   return 0;
}
else{
   cout<<"NO"<<endl;
   return 0;
}
return 0;
}
