#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex30

#ifdef ex30

/*
Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.
*/

int fat, n;

int main(){

      setlocale(LC_ALL, "Portuguese");

    char opcao = 's';
    while(opcao == 's' || opcao == 'S'){

      printf("Digite um número: ");
      scanf("%d", &n) ;

      printf(fatorial(n));

    printf("\nTecle 's' se deseja continuar\n\n");

    opcao = getch();

   }
}

  int fatorial(){
  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

  printf("\n%d", fat);
  return 0;
  }


#endif ex30