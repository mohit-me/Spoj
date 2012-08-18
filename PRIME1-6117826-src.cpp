#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main ()
{

bool arr[32000];
long long int m , n ,z;
int t,k=0, primes[4000] , a=0 ,b;
for(unsigned int i=2 ; i<32000 ; ++i)
{
if(!arr[i])
{
for(unsigned int j = i*i ; j<32000 ; j=j+i)
{

arr[j]=true;
}
}

}

int x=0;
while(x<32000)
{
if(!arr[x])
{
primes[k++]=x;
}
++x;
}
scanf("%d" , &t);
while(t>0)
{
a=0;
scanf("%lld" , &m);
scanf("%lld" , &n);
if(m<2)
{
m=2;
}
for(int i=0;i<k;++i)
{
if(primes[i]>=sqrt(n))
{
b=i;
break;
}
}
for(z=m;z<=n;++z)
{
a=0;
if(z<32000)
{
if(arr[z]==false)
{
printf("%lld\n",z);
a=1;
}
}
else if(z>=32000)
{

for(int i = 2; i<b ; i++)
{
if(z%primes[i]==0)
{
a=1;
break;//Here add a break statement
}
}
if(a==0)
{
printf("%lld\n",z);
//cout<<z<<"\n";
}

}
}
--t;
}


return 0;
}
