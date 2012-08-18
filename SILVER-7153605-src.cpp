//1->1//0
//2->1+1//1
//3->1+2//1
//4->1+2+1//2
//5->1+2+2//2
//6->1+2+3//2
//7->1+2+4//2
//8->1+2+3+1//3
//9->1+2+3+3//3
//10->1+2+3+4//3
//11->1+2+4+4//3
//12->1+2+4+5//3
//13->1+2+4+6//3
//14->1+2+4+7//3
//15->1+2+4+8//3
//15->1+2+4+8+1//4
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int t,n,i;
    while(1)
   {
       cin>>n;
       if(n==0) return 0;
       for(i=0;n>pow(2,i);i++)
       {
           n-=pow(2,i);
       }
       cout<<i<<endl;
   }
    return 0;
}
