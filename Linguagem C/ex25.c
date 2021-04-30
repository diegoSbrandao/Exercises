#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex25


#ifdef ex25

/*
Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.

*/
main() {

    setlocale(LC_ALL, "Portuguese");
    int A,C,Soma;
    char opcao = 's';
    Soma = 0;
    C = 0;

    while(opcao == 's' || opcao == 'S') {

    do{

	 printf("DIGITE UM NUMERO: ");
     scanf("%d",&A);

        if(A>0){
            Soma=Soma+A;
            C++;
        }

    }while(A>=0);

    Soma = Soma/C;
    printf("A quantidade de números digitados foi %d e a média da soma é %d",C,Soma);

    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();
   }
}


#endif ex25