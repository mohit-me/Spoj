#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        float n,t;
        cin>>n;
        t=n;
        float num=1;
        while(n-->1)
        {
            num+=float((t*1/n));
        }
        printf("%.2f",num);
        cout<<endl;


    }
    return 0;
}
