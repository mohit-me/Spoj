#include <math.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t,y,len,i;
    long ans;
    cin>>t;
    string str;
    while(t--)
    {
        ans=0;
        cin>>y;
        cin>>str;
        len=str.length();
        for(i=0;i<len;i++)
        {
            if(str[i]=='A')
            {
                if(y>2005) ans+=pow(y-2005,2);
                else ans+=pow(y-2001,2);
            }
            else if(str[i]=='B')
            {
                if(y>2006) ans+=pow(y-2006,2);
                else ans+=pow(y-2002,2);
            }
            else if(str[i]=='C')
            {
                if(y>2007) ans+=pow(y-2007,2);
                else ans+=pow(y-2003,2);
            }
            else if(str[i]=='D')
            {
                if(y>2008) ans+=pow(y-2008,2);
                else ans+=pow(y-2004,2);
            }
            else if(str[i]=='E')
            {
                if(y>2009) ans+=pow(y-2009,2);
                else ans+=pow(y-2005,2);
            }
            else if(str[i]=='F')
            {
                if(y>2010) ans+=pow(y-2010,2);
                else ans+=pow(y-2006,2);
            }
            else if(str[i]=='G')
            {
                if(y>2011) ans+=pow(y-2011,2);
                else ans+=pow(y-2007,2);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}

