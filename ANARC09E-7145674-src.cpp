#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main()
{

    long long i=0,n0,n1,n2,n3,n4;
    string str;
    while(1)
    {
    cin>>n0;
    if(n0==0) return 0;
    if(n0%2==0) str="even";
    else str="odd";
    cout<<++i<<". "<<str<<" "<<n0/2<<endl;
    }
  return 0;
}
