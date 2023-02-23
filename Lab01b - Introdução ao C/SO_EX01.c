
#include <stdio.h>

int
main ()
{
  int A[2][2], I = 0, i = 0, aux = 0, test;
  A[1][0] = -12;
  A[0][0] = 3;
  A[0][1] = 3;
  A[1][1] = 4;
  I = sizeof (A) / sizeof (int);
  while (i <= I / 2)
    {
      
      while (aux <= I / 2)
	{
	  if (aux == 0 && i == 0 || test > A[i][aux])
	    {
	      test = A[i][aux];
	    }
	  aux++;
	}
      i++;
    }


  printf ("%i", test);
}
