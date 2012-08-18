#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char a[1100],fl;
    int len,i,flag,j;
    while(1)
    {
        flag=1;
        gets(a);
        if(a[0]=='*') return 0;
        len=strlen(a);
        for(j=0;a[j]==' ';j++);
        for(i=len-1;a[i]==' ';i--);
        a[i+1]='\0';
        fl=toupper(a[j]);
        for(j;j<=i;j++)
        {
            if(a[j]==' '&&a[j+1]==' ') j++;
            else if(a[j]==' '&&toupper(a[j+1])!=fl) { flag=0; goto c;}
            else continue;
        }
        c:
        if(flag==0) cout<<"N"<<endl;
        else if(flag==1) cout<<"Y"<<endl;
    }


}

