#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10],b[10],res[10];
    int i,j,k;
    int sum;
    int suma,sumb;
    int lena,lenb;
    int n;
    int left[4];
    char mark[4]={'m','c','x','i'};
    cin>>n;
    while(n--)
    {
        cin>>a;
        cin>>b;
        lena=strlen(a);
        lenb=strlen(b);
        suma=0;
        sumb=0;
        for(i=lena;i>=0;i--)
        {
            if(a[i]=='i')
            {
                if(a[i-1]>='0'&&a[i-1]<='9')
                    suma+=(a[i-1]-'0')*1;
                else
                    suma+=1;
            }
            if(a[i]=='x')
            {
                if(a[i-1]>='0'&&a[i-1]<='9')
                    suma+=(a[i-1]-'0')*10;
                else
                    suma+=10;
            }
            if(a[i]=='c')
            {
                if(a[i-1]>='0'&&a[i-1]<='9')
                    suma+=(a[i-1]-'0')*100;
                else
                    suma+=100;
            }
            if(a[i]=='m')
            {
                if(a[i-1]>='0'&&a[i-1]<='9')
                    suma+=(a[i-1]-'0')*1000;
                else
                    suma+=1000;
            }
        }
        for(i=lenb;i>=0;i--)
        {
            if(b[i]=='i')
            {
                if(b[i-1]>='0'&&b[i-1]<='9')
                    sumb+=(b[i-1]-'0')*1;
                else
                    sumb+=1;
            }
            if(b[i]=='x')
            {
                if(b[i-1]>='0'&&b[i-1]<='9')
                    sumb+=(b[i-1]-'0')*10;
                else
                    sumb+=10;
            }
            if(b[i]=='c')
            {
                if(b[i-1]>='0'&&b[i-1]<='9')
                    sumb+=(b[i-1]-'0')*100;
                else
                    sumb+=100;
            }
            if(b[i]=='m')
            {
                if(b[i-1]>='0'&&b[i-1]<='9')
                    sumb+=(b[i-1]-'0')*1000;
                else
                    sumb+=1000;
            }
        }
        sum=suma+sumb;
        j=3;
        for(i=0;i<4;i++)
            left[i]=0;
        while(sum>0)
        {
            left[j]=sum%10;
            j--;
            sum=sum/10;
        }
        for(j=0;j<4;j++)
        {
            if(left[j]==1)
                cout<<mark[j];
            if(left[j]>1&&left[j]<=9)
                cout<<left[j]<<mark[j];
        }
        cout<<endl;
    }
    return 0;
}


