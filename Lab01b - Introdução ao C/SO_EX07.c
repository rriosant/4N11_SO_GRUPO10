#include <stdio.h>
#include <stdlib.h>

struct pessoa {   
  char nome[100];
  int idade;          
  float peso;
  float altura; 
 
};
int print(struct pessoa pessoa){
 printf("nome:\n");
 puts(pessoa.nome); 
 printf("idade:\n");
 printf("%i",pessoa.idade); 
 printf("\n");
 printf("peso:\n");
 printf("%.2f",pessoa.peso);
 printf("\n");
 printf("altura:\n");
 printf("%.2f",pessoa.altura);
 printf("\n");
 printf("\n");
 printf("\n");
}
int main()
{
 struct pessoa pessoa1,pessoa2,pessoa3,pessoa4; 
 //pessoa 1
 printf("nome da pessoa1:\n");
 gets(pessoa1.nome);
 
 printf("peso da pessoa1:\n");
 scanf("%f",&pessoa1.peso);
 
 printf("altura da pessoa1:\n");
 scanf("%f",&pessoa1.altura);
 
 printf("idade da pessoa1:\n");
 scanf("%i",&pessoa1.idade);
 
 //pessoa 2
 printf("nome da pessoa2:\n");
 gets(pessoa4.nome);
 gets(pessoa2.nome);
 
 
 printf("peso da pessoa2:\n");
 scanf("%f",&pessoa2.peso);
 
 printf("altura da pessoa2:\n");
 scanf("%f",&pessoa2.altura);
 
 printf("idade da pessoa2:\n");
 scanf("%i",&pessoa2.idade);
 
 //pessoa 3
 printf("nome da pessoa3:\n");
 gets(pessoa4.nome);   
 gets(pessoa3.nome);
 
 printf("peso da pessoa3:\n");
 scanf("%f",&pessoa3.peso);
 
 printf("altura da pessoa3:\n");
 scanf("%f",&pessoa3.altura);
 
 printf("idade da pessoa3:\n");
 scanf("%i",&pessoa3.idade);
 
 //print
 print(pessoa1);
 print(pessoa2);
 print(pessoa3);
 
    
}
  
