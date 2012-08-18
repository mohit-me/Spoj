#include<iostream>
using namespace std;
int main()
{
    long long n,sum,i;
    while(1)
    {
        d:cin>>n;
        i=1;sum=1;
        if(n==-1) return 0;
        else if (n==1) goto c;
        else
        {while(sum<n)
        {
            sum+=i*6;
            i++;
            if(sum==n) {goto c;}
        }
        cout<<"N"<<endl;
        goto d;
        c: cout<<"Y"<<endl;
        }
    }


}
