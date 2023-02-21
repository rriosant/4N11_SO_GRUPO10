#include <stdio.h>

int matriz[3][3] = { {1, 2, 3}, {3, 2, 1},{3, 2, 1} }, N, aux = 0,C,L,aux1=0;

char input;
int
main ()
{
  char input;
  printf ("C para coluna e L para linha ?\n");
  scanf ("%c", &input);
  
  if (input == 'C')
    {
        printf("qual coluna(indice)\n");
        scanf("%i",&C);
        printf ("por qual numero quer multiplicar\n");
        scanf ("%i", &N);
        while (aux < 3){
            matriz[aux][C]=(matriz[aux][C])*N;
            aux++;

        }
    }
  if (input == 'L')
    {
        printf("qual linha(indice)\n");
        scanf("%i",&L);
        printf ("por qual numero quer multiplicar\n");
        scanf ("%i", &N);
        while (aux < 3){
            matriz[L][aux]=(matriz[L][aux])*N;
            aux++;
    }   }
    
    aux=0;
    for(aux=0;aux<3;aux++){
        for(aux1=0;aux1<3;aux1++){
            printf("%i",matriz[aux][aux1]);
            printf(" ");
            
            
        }
        printf("\n");
    }
        
  return 0;

}
