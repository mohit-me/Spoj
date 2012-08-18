#include<stdio.h>
int main()
{
    int t,row,isle;
    long n;
    scanf("%d",&t);
    while(t--){
       scanf("%ld",&n);
       if(n==1) printf("poor conductor\n");
       else
       {
           row=(n+3)/5;
           switch(n%10)
           {
               case 1:
               case 2:
               printf("%d W L\n",row);
               break;
               case 3:
               case 0:
               printf("%d A L\n",row);
               break;
               case 4:
               case 9:
               printf("%d A R\n",row);
               break;
               case 5:
               case 8:
               printf("%d M R\n",row);
               break;
               case 6:
               case 7:
               printf("%d W R\n",row);
               break;

           }

       }


    }
     return 0;

    }


