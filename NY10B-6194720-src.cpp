#include <iostream>

using namespace std;

int main()
{
    int p,n,b,x,y;
    cin>>p;
    while(p--)
    {
         cin>>n>>b>>x>>y;
         int m,t=1,sum=0;
         while(x||y)
         {
             m=(x%b+y%b)%b;
             sum+=m*t;
             t*=b;
             x/=b;
             y/=b;
         }
         cout<<n<<" "<<sum<<endl;  
        
    }
    return 0;
}