 #include<cstdio>
 #define MOD 10000007
 typedef unsigned long long u64;
 using namespace std;
 u64 modExp(u64 x, u64 y){
    if(x==0)
        return 0;
     if(y==0)
        return 1;

     u64 z = modExp(x,y/2);

     if(y%2==0)
         return (z*z)%MOD;
     else
         return (x*((z*z)%MOD))%MOD;
 }

 int main(){
     u64 n, k; scanf("%llu%llu",&n,&k);
     while(n&&k){
         u64 ans = 0;
        if(n>0)
             ans = (2*modExp(n-1,k) + modExp(n,k) + 2*modExp(n-1,n-1) +
 modExp(n,n))%MOD;

         printf("%llu\n",ans);
         scanf("%llu%llu",&n,&k);
     }

    return 0;
 }
