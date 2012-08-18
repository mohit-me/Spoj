#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char c[10000];
    cin>>c;
    int len=strlen(c);
    int ii,cnt=0;
    for(ii=0;ii<len;ii++)
    {
        if(c[ii]=='a'||c[ii]=='e'||c[ii]=='i'||c[ii]=='o'||c[ii]=='u'||c[ii]=='A'||c[ii]=='E'||c[ii]=='I'||c[ii]=='O'||c[ii]=='U') cnt++;
    }
    cout<<cnt;
    return 0;
}
