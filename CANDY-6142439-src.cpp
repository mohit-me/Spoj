#include<iostream>
#define MAXN 10000
using namespace std;
int main (void){
int n,candies[MAXN];
cin>>n;
while (n!=-1){
   int sum=0;
   for (int i=0;i<n;++i){
    cin>>candies[i];
    sum+=candies[i];
   }
   if (sum%n!=0) cout<<"-1"<<endl;
   else{
    int ans=0;
    int aver=sum/n;
    for (int i=0;i<n;++i) candies[i]-=aver;
    for (int i=0;i<n;++i)
     if (candies[i]>0) ans+=candies[i];
    cout<<ans<<endl;
   }
   cin>>n;
}
return 0;
}
