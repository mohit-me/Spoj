#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int cases;cin>>cases;
    for(int i = 1; i <= cases; i++)
    {
        double num;cin>>num;
        string s;cin>>s;
        cout<<i << " "<<fixed<<setprecision(4);
        if(s == "kg")
        {
            cout<<2.2046 * num<<" lb"<<endl;
        }
        else if( s == "lb")
        {
            cout<<0.4536 * num<<" kg"<<endl;
        }
        else if(s == "l")
        {
            cout<<0.2642 * num<<" g"<<endl;
        }
        else if(s == "g")
        {
            cout<<3.7854 * num<<" l"<<endl;
        }
    }
    return 0;
}
