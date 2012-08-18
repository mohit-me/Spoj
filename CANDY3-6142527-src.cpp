#include<iostream>
#include<cstring>
using namespace std;
int main (){
int t,n,i;
long long  a,sum;
cin>>t;
while(t--)
{
    cout<<endl;
    cin>>n;
    sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum=(sum+a)%n;
    }
    if(sum%n==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
}
