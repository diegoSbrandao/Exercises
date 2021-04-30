#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex33

#ifdef ex33
/*
Receba via teclado dez valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {

    int i, x, aux, v[10];

    for(i = 0; i < 10 ; i++)
    {
        printf("Digite o valor da Posição %i: ",i+1);
        scanf("%i",&v[i]);
    }

    for(i = 0; i < 10 ; i++)
    {
        for(x = i + 1; x < 10 ; x++)
        {
            if(v[i]>v[x]) {

                aux=v[i];
                v[i]=v[x];
                v[x]=aux;
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        printf("\nO Valor da posição %i agora é %i", i+1,v[i]);
    }

       printf("\nTecle 's' se deseja continuar\n\n");
            opcao = getch();
        }

}

#endif ex33