#include <stdio.h>
#include <math.h>
int main()
{

      long long int number,n1;
      c:
      scanf("%lld", &number);
      n1=number;
      if(number == 0)
         return 0;
      if(number == 1)
      {
           printf("1/1\n");
           goto c;
      }
      int level = log(number)/ log(2);   //calculating the level in tree
      long long int path[50];
      int count = 0;
      while(count<=pow(2,level))            //storing the path toward root
      {
         if(count)
         {
            path[count] = path[count -1] /2;
            if(path[count] == 1)
               break;
         }
         else
            path[count] = number;
         count++;
        // printf("%d\t",count);
      }

      int i, n = 1, d = 1;
      for(i = count-1; i >= 0; i--)      //traversing the path and caluclating accordingly
      {
         if((path[i]/2)*2 == path[i]) //even
         {
            d = n+d;
         }
         else   //odd
         {
            n = n+d;
         }
      }
      printf("%d/%d\n", n, d);
    goto c;
    return 0;
}

