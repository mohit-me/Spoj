#include <stdio.h>
#include <stdlib.h>
int main()
{
        int    n, t;
        int     num, i;
        int     counter;
        scanf( "%d", &t );
        while( t-- ) {
                scanf( "%d", &n );
                counter = 0;
                for( i = 0; i < n; i++ ) {
                        scanf( "%d", &num );
                        counter += num / ( i + 1 );
                }
                if( counter & 1 )
                        printf( "ALICE\n" );
                else
                        printf( "BOB\n" );
        }
        return 0;
}