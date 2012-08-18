#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


 int sort(const void *x, const void *y) {
  return (*(int*)x - *(int*)y);
}
int main()
 {
  int n,k,s,i;
  int m[1000];
    scanf("%d %d %d",&n,&k,&s);
    for(i=0;i<n;i++)
    {
        cin>>m[i];

    }
    qsort(m,n,sizeof(int),sort);
    int pins=0;
    for(i=n-1;i>0;i--)
    {
        pins+=m[i];
        if(pins>=k*s){
             cout<<n-i;
             return 0;
        }

    }
    cout<<n;

  return 0;
}
