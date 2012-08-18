#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    while(1)
    {
    float a,b;
    double k;
    cin>>k;
    if(k==-1) return 0;
    else
    a=(sqrt(1+4*((k-1)/3))-1);
    b=a/2-int(a/2);
    if(b==0)
    cout<<"Y"<<endl;
    else cout<<"N"<<endl;

    }
   return 0;
}
