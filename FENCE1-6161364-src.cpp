#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int l;
    double r,a;
    while(1)
    {
        cin>>l;
        if(l==0) return 0;
        else{
        r=l/(2*2*acos(0));
        a=2*2*acos(0)*r*r;
        }
        printf("%.2f\n",a);
    }

}
