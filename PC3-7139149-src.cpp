#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;
long long findgcd(long long x,long long y){
     while(x!=y){
          if(x>y)
              return findgcd(x-y,y);
          else
             return findgcd(x,y-x);
     }
     return x;
}

int main()
{
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<findgcd(a,b)<<endl;
    }
return 0;

}
