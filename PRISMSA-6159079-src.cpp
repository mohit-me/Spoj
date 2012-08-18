#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
    long double a,h,sa;
    long t,v;
    cin>>t;
    while(t--)
    {
        cin>>v;
        a=cbrt(4*v);
        h=4*v/(sqrt(3)*a*a);
        sa=(a*a*sqrt(3)/2)+(3*a*h);
        cout<<setprecision(14)<<sa<<endl;
    }
    return 0;
}
