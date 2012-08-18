#include <stdio.h>

int main()
{
  int n, k, count = 0, next;
  scanf("%d %d", &n, &k);
  do{
    scanf("%d", &next);
    count += !(next % k);
  }while(--n);
  printf("%d", count);
  return 0;
}

