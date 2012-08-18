#include<iostream>
using namespace std;
long n,son,mum;
void input(){
     cin>>n;
}
void fractions(){
    son=mum=1;
     long k=1,sum=2,module=1;
     int sonadd=-1,mumadd=1;
     while (k<n){
           if (module==sum-1){
             sonadd=-sonadd;
             mumadd=-mumadd;
              sum++;k++;module=1;
              if (sonadd==1){
                son=1;
                mum=sum-1;
              }
              else{
                son=sum-1;
                mum=1;
              }
           }
           else{
              k++;module++;
             son+=sonadd;
             mum+=mumadd;
           }
     }
}
void output(){
     cout<<"TERM "<<n<<" IS "<<son<<'/'<<mum<<endl;
}
int main (){
int t;
cin>>t;
for (int i=0;i<t;++i){
   input();
   fractions();
     output();
}
    return 0;
}

