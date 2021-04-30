#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex27


#ifdef ex27

/*
Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/

_Bool pesquisa(char letra, char *vetor, int tamanho);


main(){

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        static char vetor[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
        char letra;
        puts("Digite uma letra: ");
        letra = getchar();
        puts("Resultado: ");

        if(pesquisa(letra,&vetor[0],sizeof(vetor)))
        {
            puts("valor encontrado");
        }
        else
        {
            puts("valor nao encontrado");
        }


        printf("\nTecle 's' se deseja continuar\n\n");

        opcao = getch();

    }
}


_Bool pesquisa(char letra,char *vetor,int tamanho)
{
    int i;
    for(i=0; i<tamanho; i++)
    {
        if(letra==vetor[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }
}


#endif ex27