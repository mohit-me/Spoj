#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,sum;
    while(1)
    {
        cin>>i;
        if(i==0) return 0;
        else
        {
        sum=(2*i*i*i+3*i*i+i)/6;
        cout<<sum<<endl;
        }
    }
    return 0;
}
