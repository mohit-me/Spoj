#include<iostream>
#define MAXN 1000
#define MAXK 100
using namespace std;
long long poly[MAXN],n;
long long x[MAXK],k;
long long f(int a){
long long ans=0;
for (int i=n;i>0;--i)
   ans=(ans+poly[i])*a;
ans+=poly[0];
return ans;
}
int main (void){
cin>>n;
int index=1;
while (n!=-1){
   for (int i=n;i>=0;--i) cin>>poly[i];
   cin>>k;
   for (int i=0;i<k;++i) cin>>x[i];
   cout<<"Case "<<index++<<":"<<endl;
   for (int i=0;i<k;++i) cout<<f(x[i])<<endl;
   cin>>n;
}
return 0;
}