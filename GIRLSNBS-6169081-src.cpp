#include<iostream>
using namespace std;
int main()
{
  int g,b,n;
  while(1)
  {
      cin>>g>>b;
      if(g==-1&&b==-1) return 0;
      else if(g==0&&b==0) n=0;
    else if(g==b) n=1;
      else if(g>b)  n=((g+b)/(b+1));
      else  if(b>g) n=((g+b)/(g+1));
      cout<<n<<endl;
  }


 return 0;
}


