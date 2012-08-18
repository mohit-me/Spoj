#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

bool Miller(long long p,int iteration);
long long mulmod(long long a,long long b,long long c);
unsigned long long modulo(unsigned long long  a,unsigned long long b,unsigned long long c);

int main()
{
        int t=0;
        cin>>t;
        while(t--){
                long long x=0;
                scanf("%lld", &x);
                if(Miller(x,15)){
                        printf("YES\n");
                }else{
                        printf("NO\n");
                }
        }

        return 0;
}

/* Miller-Rabin primality test, iteration signifies the accuracy of the test */
bool Miller(long long p,int iteration){
    if(p<2){
        return false;
    }
    if(p!=2 && p%2==0){
        return false;
    }
    long long s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<iteration;i++){
        long long a=rand()%(p-1)+1,temp=s;
        long long mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}

/* this function calculates (a*b)%c taking into account that a*b might overflow */
long long mulmod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

/* This function calculates (ab)%c */
unsigned long long modulo(unsigned long long  a,unsigned long long b,unsigned long long c){
    unsigned long long x=1,y=a; // long long is taken to avoid overflow of intermediate results
    while(b > 0){
        if(b%2 == 1){
            x=mulmod(x, y, c);
        }
        y = mulmod(y, y, c); // squaring the base
        b /= 2;
    }
    return x%c;
}

