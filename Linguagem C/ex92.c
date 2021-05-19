#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*
3 - Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. Mostre como resultado se EXISTE ou NAO EXISTE.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y
*/


main()
{

    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        static char vetor[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
        char letra;
        char *pc;
        int i,cont=0;

        printf("Digite uma letra: ");
        letra = getchar();
        printf("Resultado: ");

        pc=&letra;

        for(i=0; i<14; i++)
        {
            if(*pc==vetor[i])
            {
                printf("Valor Encontrado");
                cont++;
            }

        }

        if(cont==0)
        {
            printf("Valor NÃO encontrado");
        }

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
        getchar();

    }
}

#endif
