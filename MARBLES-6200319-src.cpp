#include <stdio.h>
long long findoptions(int,int);

int main(void){
  int noi,n,m,i;

  scanf("%d",&noi);
  for(i=0;i<noi;i++){
    scanf("%d%d",&n,&m);
    printf("%lld\n",findoptions(n,m));
  }
  return 0;
}

long long findoptions(int a,int b){
  int n = a-1;
  int r = b-1,i=0;
  long long result=1;
  if (r > n/2) {
    r = n - r;
  }
  for (i = 0; i < r; i++) {
    result *= (n-i);
    result /= (i+1);
  }
  return result;
}
