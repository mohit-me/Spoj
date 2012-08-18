#include <iostream>
using namespace std;

int main()
{
 double sum,total=0.0;
 int i;
 while(cin>>sum)
 {
     if(sum==0.00) break;
  total=0.0;
  for(i=1;;++i)
  {
   total += 1.0/(i+1.0);
   if(total>=sum) break;
  }
  cout<<i<<" card(s)"<<endl;
 }
 return 0;
}
