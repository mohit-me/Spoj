#include<iostream>
#include<cstdlib>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
 int s[1423],t,f=0,i;
while(1)
{
 cin>>t;
 f=0;
 if(t==0) return 0;
      for(i=0;i<t;i++)
         cin>>s[i];
     qsort (s,t,sizeof(int),compare);
     for(i=0;i<t;i++)
         {
           if((s[i+1]-s[i])>200) f=1;
         }
    if((1422-s[t-1])>100) f=1;
if(f==1) cout<<"IMPOSSIBLE"<<endl;
     else cout<<"POSSIBLE"<<endl;
}
 return 0;
}


