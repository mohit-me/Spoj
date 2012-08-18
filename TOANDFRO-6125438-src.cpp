#include<iostream>
#include<string>
using namespace std;
int main()
{
int col;
cin>>col;
while(col)
{
char ch[30][30];
string str;
cin>>str;
int l=str.length();
int row=l/col;
for(int r=0;r<row;r++)
for(int c=0;c<col;c++)
ch[r][c]=str[r*col+c];
for(int r=0;r<row;r++)
{
if((r+1)%2==0)
for(int c=0;c<col/2;c++)
{
int t;
t=ch[r][c];
ch[r][c]=ch[r][col-1-c];
ch[r][col-1-c]=t;
}
}
for(int c=0;c<col;c++)
for(int r=0;r<row;r++)
cout<<ch[r][c];
cout<<endl;
int cool;
cin>>cool;
col=cool;
}
return 0;
}
