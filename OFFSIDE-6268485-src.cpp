#include<iostream>
#include<cstdlib>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    int a,d,aa[11],bb[11],i,j;
    while(1)
    {
        scanf("%d %d",&a,&d);
        if(a==0&&d==0) return 0;
        for(i=0;i<a;i++)
            cin>>aa[i];
        for(i=0;i<d;i++)
            cin>>bb[i];
        qsort (aa,a,sizeof(int),compare);
        qsort (bb,d,sizeof(int),compare);

          if(aa[0]<bb[1])
          {
           cout<<"Y\n";
           continue;
          }
          else
          {
           cout<<"N\n";
          }
    }

}

