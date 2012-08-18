 #include<iostream>
 #include<cstdlib>
 #include<cstdio>
 #include<cstring>
 #include<algorithm>
 #include<cmath>
 using namespace std;
 int a[100000] , mod[100000] ;
 int main()
{
     int c , n ;
     while ( scanf("%d%d",&c,&n) , c || n )
     {
         int i , j ;
         for ( i = 0 ; i < n ; i ++ )
             scanf("%d",&a[i]) , mod[i] = -2 ;
         mod[0]=-1 ;
         long long sum = 0 ;
         for ( i = 0 ; i < n ; i ++ )
         {
             sum += a[i] ;
             if ( mod [ sum % c ] != -2 )
             {
                 for ( j = mod [ sum % c ] + 1 ; j <= i ; j ++ )
                 {
                     cout<<j+1;
                     if ( i != j )
                         cout<<' ';
                 }
                 cout<<endl;
                 break;
             }
             mod [sum%c] = i ;
         }
     }
     return 0;
 }

