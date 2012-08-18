#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int a[100000];

int n,m;

bool find(int v){
    int pre=a[0],c=0;
    for(int i=1;i<n;i++){
         if(a[i]-pre>=v){
             c++;
             pre=a[i];
         }
    }
    if(c>=m) return true;
    return false;
}

int cmp(const void *x,const void *y){
    return *(int *)x-*(int *)y;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&n,&m); m--;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(a[0]),cmp);
    int left=0,right=a[n-1],mid;
    while(left<=right){
         mid=(left+right)/2;
         if(find(mid)) left=mid+1;
         else right=mid-1;
    }
    printf("%d\n",left-1);
    }
    return 0;
}
