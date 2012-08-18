#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int n,pos,k=0,i;
    char a[100];
    cin>>n;
    while(n--)
    {
        scanf("%d %s",&pos,a);
        k++;
        cout<<k<<" " ;
        for(i=0;i<strlen(a);i++)
        {
            if(i!=pos-1)
            cout<<a[i];
        }
        cout<<endl;

    }
    return 0;
}
