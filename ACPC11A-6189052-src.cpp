#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      char a[100][100];
      int flag=0,n,i=0,pos;
      cin>>n;
      while(i<n)
      {
          cin>>a[i];
          if(a[i][0]!='#') { pos=i; flag++;}
            i++;
      }
      i=0;
      if(flag==1)
      {
          i=pos+1;
      while(i<n)
      {
          cout<<a[i]<<" ";
          i++;
      }
      i=0;
      cout<<a[pos]<<" ";
      while(i<pos)
      {
          if(i!=pos-1) cout<<a[i]<<" ";
          else cout<<a[i];
          i++;
      }
      }
      else if(flag!=1)
      while(i<n)
      {
          if(i!=n-1) cout<<a[i++]<<" ";
          else cout<<a[i++];
      }
      cout<<endl;


  }
   return 0;
}
