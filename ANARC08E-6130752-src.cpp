#include<iostream>
using namespace std;
 int main()
 {
  long a,b;
        while(1)
        {
        cin>>a>>b;
        if(a==-1&&b==-1) return 0;
        else if(a==1||b==1) cout<<a<<"+"<<b<<"="<<a+b<<endl;
        else cout<<a<<"+"<<b<<"!="<<a+b<<endl;
        }
  return 0;
 }
