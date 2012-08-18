#include <iostream>
#include<cstring>
using namespace std;

int yes[1000000];
unsigned long long f(unsigned long long n)
{
if(n<1000000 && yes[n]!=-1)
   return yes[n];
if(n/2+n/3+n/4>n)
{
   return n<1000000?yes[n]=f(n/2)+f(n/3)+f(n/4):f(n/2)+f(n/3)+f(n/4);
}
return n<1000000?yes[n]=n:n;
}
int main()
{
unsigned long long n;
while(cin >> n)
{
   memset(yes,-1,sizeof(yes));
   cout << f(n) << endl;
}
return 0;
}
