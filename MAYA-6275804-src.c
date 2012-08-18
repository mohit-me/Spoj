#include<stdio.h>
int main()
{
char arr[8][40];
long int base[]={0,1,20,360,7200,144000,2880000,57600000};
long int sum=0;
int n,count=0,i,j;
scanf("%d",&n);
while(n!=0)
{
for(i=n;i>0;i--)         //scannig in reversed order as we have to process in reversd order
scanf(" %[^\n]",arr+i);
for(i=1;i<=n;i++)                           //2  loops  to add . and - values and multiply by base value
{
count=0;
for(j=0;arr[i][j]!='\0';j++)
{
if(arr[i][j]=='.')
count+=1;
else if(arr[i][j]=='-')
count+=5;
}
sum+=count*base[i];
}
printf("%ld\n",sum);
sum=0;
printf("\n");
scanf("%d",&n);
}
return 0;
}
