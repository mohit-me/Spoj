#include <iostream>
#include <algorithm>
 
using namespace std;
 
bool cmp(int i, int j)
{
    return i>j;
}
 
int main()
{
    int cas;
    int need, fri;
    int lend[1000];
    int sum;
 
    cin>>cas;
    for(int cas_no=1; cas_no<=cas; cas_no++)
    {
        cout<<"Scenario #"<<cas_no<<":"<<endl;
        cin>>need>>fri;
        sum=0;
        for(int i=0; i<fri; i++)
        {
            cin>>lend[i];
            sum+=lend[i];
        }
        if(sum<need)
           cout<<"impossible"<<endl;
        else
        {
           sort(lend,lend+fri,cmp);
           sum=0;
           for(int i=0; i<fri; i++)
           {
               sum+=lend[i];
               if(sum>=need)
                {
                    cout<<i+1<<endl;
                    break;
                }
           }
        }
        cout<<endl;
    }
    return 0;
}

