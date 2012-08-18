#include <iostream>
using namespace std;
int main() {
int a,b,c;
long d;
int t;
cin>>t;
while(t--)
{
    cin>>a>>b>>c;
    {
        if(b-a==c-b)
            {
             d=c+(c-b);
             cout<<d<<endl;

            }
        else
         {
             d=c*c/b;
                cout<<d<<endl;

         }
        }
}
return 0;
}



