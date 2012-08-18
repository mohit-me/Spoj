#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.1415926535897932384626433832795
int main (int argc, char **argv);
int main (int argc, char **argv) {

  int cs, N, i, f1, f2, found;
  double f[1000];

 for (cs=1;scanf ("%d",&N),N!=0;cs++) {
  for (i=0;i<N;i++) scanf ("%lf",&f[i]);
  found = 0; /* Go through all frequency possibilities */
  for (f1=400;f1 < 600 && !found;) {
   f2 = f1+1;
   for (f2=f1+1;f2<=600 && !found;) {
    found = 1;
    for (i=1;i<=N && found;i++)
     found = fabs (sin(Pi/180*i/N*f1)+sin(Pi/180*i/N*f2)-f[i-1])<1e-5;
    if (!found) f2++;
   }
   if (!found) f1++;
  }
  printf ("Case %d, f1 = %d, f2 = %d\n",cs,f1,f2);
 }
 return 0;
}

