#include<cstdio>
#include<cstdlib>

int const MAX = 100010;

int comparePosition( void const *a , void const *b )
{
  int *arg1 = ( int * ) a;
  int *arg2 = ( int * ) b;
  if ( *arg1 > *arg2 )
    return 1;
  else if ( *arg1 < *arg2 )
    return -1;
  else
    return 0;
}

int main()
{
  int exPosition[ MAX ] , stack[ MAX ];
  int nOfCase , nOfTeam , positionTop , i , j , k , top;
  long long badness;
  scanf( "%d" , &nOfCase );
  for ( i = 0; i < nOfCase; i++ )
    {
      scanf( "%d" , &nOfTeam );
      for ( j = 0 ; j < nOfTeam; j++ )
	{
	  scanf( "%*s%d" , &exPosition[ j ] );
	}
      qsort( exPosition , nOfTeam , sizeof( int ) , comparePosition );

      for ( badness = 0 , positionTop = 1 ,  top = -1 , j = 0; j < nOfTeam; j++ )
	{
	  if ( exPosition[ j ] == positionTop )
	    {
	      positionTop++;
	    }
	  else if ( exPosition[ j ] < positionTop )
	    {
	      top++;
	      stack[ top ] = exPosition[ j ];
	    }
	  else if ( exPosition[ j ] > positionTop )
	    {
	      while ( top >= 0 )
		{
		  badness += abs( positionTop - stack[ top ] );
		  positionTop++;
		  top--;
		}
	      badness += abs( exPosition[ j ] - positionTop );
	      positionTop++;
	    }
	}
      while ( top >= 0 )
	{
	  badness += abs( positionTop - stack[ top ] );
	  positionTop++;
	  top--;
	}
      printf( "%lld\n" , badness );
    }
  return 0;
}
