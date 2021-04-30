#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex47

#ifdef ex47
/* 
Ler um número inteiro e imprimir seu sucessor e seu antecessor. */
main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,ant,suce;


    printf("Digite um número: \n");
    scanf("%d", &x);


    ant = x-1;
    suce = x+1;

    printf("O antecessor do número %d é: %d\n",x,ant);
    printf("O sucessor do número %d é: %d\n",x,suce);

    system("pause"); // pausa o programa
}

#endif ex47