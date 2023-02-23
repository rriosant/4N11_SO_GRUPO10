#include <stdio.h>
#include <stdlib.h>


int main ()
{

  int i, j, linhas, colunas, **intMatrix, **intMatrix2;

  printf ("quantas linhas?:\n");
  scanf ("%d", &linhas);
  printf ("quantas colunas?:\n");
  scanf ("%d", &colunas);

  intMatrix = (int **) malloc (linhas * sizeof (int *));
  intMatrix2 = (int **) malloc (colunas * sizeof (int *));
  //pointer to an array of [lines] pointers

  for (i = 0; i <= linhas; ++i)
    {
      intMatrix[i] = (int *) malloc (colunas * sizeof (int));
    }
  for (i = 0; i <= colunas; ++i)
    {
      intMatrix2[i] = (int *) malloc (linhas * sizeof (int));

    }

  for (i = 0; i < linhas; ++i)
    {
      for (j = 0; j < colunas; ++j)
	{
	  printf ("numero da linha: (linha: %d, coluna: %d)\n", i + 1, j + 1);
	  scanf ("%d", &intMatrix[i][j]);
	  intMatrix2[j][i] = intMatrix[i][j];
	  
	}
    }
  printf ("matriz digitada:\n");
  for (i = 0; i < colunas; ++i)
    {
      for (j = 0; j < linhas; j++)
	{
	  printf ("|%d| ", intMatrix[j][i]);


	}
      printf ("\n");
    }
  printf ("\n\n matrix tranposta:\n");
  for (i = 0; i < linhas; ++i)
    {
      for (j = 0; j < colunas; j++)
	{
	  printf ("|%d| ", intMatrix2[j][i]);


	}
      printf ("\n");
    }
}
