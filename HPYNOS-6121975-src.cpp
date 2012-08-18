#include<iostream>
#include<math.h>
using namespace std;
int cnt=0,arr[1000]={0};
long happy(long a)
{
    long b=0;
    arr[cnt]=a;
    while(a>0)
    {

        b+=pow(a%10,2);
        a=a/10;
   }
    cnt++;
    if(b==1) return cnt;
    for(int i=0;i<cnt;i++)
        {
            if(arr[i]==b)
                return -1;
        }
    happy(b);

}
int main()
  {
  	long n,c;
  	cin>>n;
  	c=happy(n);
  	cout<<c;
  	return 0;
  }
