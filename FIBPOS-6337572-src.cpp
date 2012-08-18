#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#define FOR(a,b,c) for( int a=b;a<c;a++)
#define all(v) v.begin(),v.end()
using namespace std;
long long arr[50];
int pos;
bool find( long long n){

   int i=2;
   while(arr[i]<=n){

     if(arr[i]==n){

         pos=i;
         return true;
      }
      i++;
    }
    pos=i-1;
    return false;

   }

int main(){

int t;
scanf("%d",&t);

arr[1]=1;arr[2]=1;
FOR(i,3,51)arr[i]=arr[i-1]+arr[i-2];
long long n;
float num,den;

while(t--){

 cin>>n;
 if( find(n)== true)printf("%f\n",(float)pos);
  else {
      num=(float)(n- arr[pos]);
      den=(float)(arr[pos+1]-arr[pos]);
      //pos= pos;
    printf("%f\n",(pos+  (num/den)));
    }
}

return 0;}
