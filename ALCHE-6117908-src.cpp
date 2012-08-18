#include<iostream>
using namespace std;
int main()
{
    double x,y;
    while(1)
    {
        cin>>x>>y;
        if(x!=-1&&y!=-1)
        {
            if(x/1000==y/37)
            {
                cout<<"Y";
            }
            else cout<<"N";
            cout<<endl;
        }
        else goto c;
    }
    c:return 0;
}
