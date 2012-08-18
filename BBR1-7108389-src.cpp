#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
   int t;
   c:
   cin>>t;
   if(t==0){return 0;}
   t--;
   while(t--)
   {
       cout<<"Hello ";
   }
   cout<<"Hello\n";
   goto c;
}

