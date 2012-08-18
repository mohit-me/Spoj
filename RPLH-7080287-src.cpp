#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int t,ta,sp,i=0;
    float g=9.806,pi,si,result;
    pi=2*acos(0.0);
    cin>>t;
    while(t--)
    {
        cin>>ta>>sp;
        si=ta*g/(sp*sp);
        if(si<=1)
        {result = asin(si)*180.0 / pi;
        printf("Scenario #%d: %.2f\n",++i,result/2);}
        else
        { printf("Scenario #%d: -1\n",++i);}
    }
    return 0;
}
