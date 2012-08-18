#include<iostream>
using namespace std;
long rev(long a)
{
    long sum=0;
    while(a>0)
    {
        sum=sum*10+a%10;
        a=a/10;
    }
    return sum;
}
int main()
  {
  	int n;
  	int i;

  	long x,y,z,res;
  	cin>>n;
  	while(n--)
  	{
  	    cin>>x>>y;
  	    z=rev(x)+rev(y);
  	    res=rev(z);
  	    cout<<res;
  	    cout<<endl;
  	}
  	return 0;
  }
