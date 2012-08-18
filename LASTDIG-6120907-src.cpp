#include<iostream>
using namespace std;
int main()
{int t,a,dig,da;long long b;cin>>t;while(t--){cin>>a>>b;if(b==0){dig=1;goto c;}da = a % 10;
            if(da==0){dig=0; goto c;}
            if(da==5){dig=5; goto c;}
            switch(b%4){
            case 0:
              dig=da%2!=0?1:6;
              break;
            case 1:
              dig=da;
              break;
            case 2:
              dig=da*da%10;
              break;
            default:
              dig=da*da*da%10;
              break;
             }
            c:cout<<dig<<endl;
        }
    return 0;
    }

