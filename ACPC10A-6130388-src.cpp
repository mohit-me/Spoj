#include <iostream>
using namespace std;
int main() {
int a,b,c;
long d;
while(1)
{
    cin>>a>>b>>c;
    if(a==0&&b==0&&c==0)
     return 0;
    else
     {
        if(b-a==c-b)
            {
             d=c+(c-b);
             cout<<"AP "<<d<<endl;

            }
        else
         {
             d=c*c/b;
                cout<<"GP "<<d<<endl;

         }
        }
}
return 0;
}


