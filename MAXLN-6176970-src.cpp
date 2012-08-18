#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(i<t)
    {
            long long r;
            float ac=.5;
            double s;
            cin>>r;
            s=double(4*r*r)+.25;
            printf("Case %d: %.2lf\n",++i,s);
    }
    return 0;
}
