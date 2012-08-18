#include <stdio.h>

#define N 24

static int x, y;
static char initial[N][N];
static char final[N+2][N+2];

static char buf[N+1];

static void
flip (int ax, int ay)
{
  final[ax][ay] = 1- final[ax][ay];
  final[ax-1][ay] = 1 - final[ax-1][ay];
  final[ax+1][ay] = 1 - final[ax+1][ay];
  final[ax][ay-1] = 1 - final[ax][ay-1];
  final[ax][ay+1] = 1 - final[ax][ay+1];
}

static int
solve_with_fst (int first, int max)
{
  int n = 0, ax, ay;

  for (ay = 0; ay < y; ay++)
    for (ax = 0; ax < x; ax++)
      final[ax+1][ay+1] = initial[ax][ay];

  for (ax = 0; ax < x; ax++)
    if ((first >> ax) & 1)
      {
	n++;
	if (n >= max)
	  return max;

	flip (ax+1, 1);
      }

  for (ay = 2; ay <= y; ay++)
    for (ax = 1; ax <= x; ax++)
      if (final[ax][ay-1])
	{
	  n++;
	  if (n >= max)
	    return max;

	  flip (ax, ay);
	}
  for (ax = 1; ax <= x; ax++)
    if (final[ax][y])
      return max;

  return n;
}

static int
solve (void)
{
  int ax, ay, t, first, n = N*N+1;

  if (x > y)
    {
      for (ay = 0; ay < y; ay++)
	for (ax = ay + 1; ax < x; ax++)
	  {
	    t = initial[ax][ay];
	    initial[ax][ay] = initial[ay][ax];
	    initial[ay][ax] = t;
	  }
      t = x; x = y; y = t;
    }

  for (first = 0; first < (1 << x); first++)
    n = solve_with_fst (first, n);

  return n;
}

int
main (void)
{
  int i, j;

  while (1)
    {
      scanf ("%d%d", &y,&x);
      if (!x)
	return 0;

      for (i = 0; i < y; i++)
	{
	  scanf ("%s", buf);
	  for (j = 0; j < x; j++)
	    initial[j][i] = buf[j] == 'X';
	}

      i = solve ();
      if (i <= N * N)
	printf ("You have to tap %d tiles.\n", i);
      else
	printf ("Damaged billboard.\n");
    }
}

