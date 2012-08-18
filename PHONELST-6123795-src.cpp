
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main()
{
// freopen("3630.txt","r",stdin);
int _case=0,n=0;
scanf("%d",&_case);
char chr[10];
while(_case--)
{
int  i=0,j=0,len=0,flag=0;
string str1="",str2="",str="";
string wk[10000];
scanf("%d",&n);
while(n--)
{
scanf("%s",&chr);
for(j=0;j<strlen(chr);j++)
wk[i]+=chr[j];
i++;
}
sort(wk,&wk[i]);
for(j=0;j<i-1;j++)
{
str1=wk[j];
len=strlen(wk[j].c_str());
str2=wk[j+1].substr(0,len);
if(str1==str2)
{
flag=1;
break;
}
}
if(flag==0)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
