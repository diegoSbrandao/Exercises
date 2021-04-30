#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex31

#ifdef ex31

/*
Escreva um programa que receba um vetor e o decomponha em dois outros vetores.
    Um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");
    int N, i,cont;
    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {

        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &N);

        int vet0[N],vet1[N],vet2[N];

        for (i = 0; i < N; i++)
        {
            printf("Digite um numero: ");
            scanf("%d", &vet0[i]);
        }

        printf("\nVETOR U:\n");
        for (i = 0; i < N; i++)
        {

            if(cont%2==0)
            {
                vet1[i] = vet0[i];
                printf("%d ", vet1[i]);
            }
            cont=cont+1;
        }

        printf("\n\nVETOR W:\n");
        for (i = 0; i < N; i++)
        {
            cont=cont+1;
            vet2[i] = vet0[i];
            if(cont%2!=0)
            {
                printf("%d ", vet2[i]);
            }

        }

        printf("\nTecle 's' se deseja continuar\n\n");

        opcao = getch();

    }
    
}

#endif ex31