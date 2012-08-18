#include<iostream>
#include <stdlib.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main (){
    int t,n,a[1000]={0},b[1000]={0},i;
    long sum;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
         for(i=0;i<n;i++)
            cin>>b[i];
        qsort (a,n,sizeof(int),compare);
        qsort (b,n,sizeof(int),compare);
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i]*b[i];
        }
        cout<<sum<<endl;
    }


    return 0;
}
