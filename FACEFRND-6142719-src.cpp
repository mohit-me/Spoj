#include<iostream>
#include<cstdlib>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main (){
int temp,n,id[100]={0},flag=0,m,x,a[10000]={0},sum,i,j,k,size;
long cnt;
cin>>n;
temp=n;
j=0;
k=0;
sum=0;
while(temp--)
{
    cin>>id[j++];
    cin>>m;
    sum+=m;
    flag=0;
    for(k;k<sum;k++)
    {
        cin>>a[k];
    }
}
 qsort(a,sum,sizeof(int),compare);
size=sum;
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
         if(i==j){
             continue;
         }
         else if(*(a+i)==*(a+j)){
             k=j;
             size--;
             while(k < size){
                 *(a+k)=*(a+k+1);
                 k++;
              }
              j=0;
          }
      }
  }

for(i=0;i<size;i++)
{
    for(j=0;j<n;j++)
    if(a[i]==id[j]) size--;
}
cout<<size;

return 0;
}

