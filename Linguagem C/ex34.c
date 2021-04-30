#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex34

#ifdef ex34
 /*
Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
        que recebe os dados via teclado para esses 2 vetores. Usando o operador
        subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
        e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
        o resultado dos 6 elementos dos vetores.
    */
    main()
    {
        setlocale(LC_ALL, "Portuguese");

        char opcao = 's';
        while(opcao == 's' || opcao == 'S')
        {

            int M, N, i, j;

            printf("Quantas linhas vai ter a matriz? ");
            scanf("%d", &M);

            printf("Quantas colunas vai ter a matriz? ");
            scanf("%d", &N);

            int mat[M][N],mat1[M][N],mat2[M][N];

            printf("\nDigite os valores do primeiro vetor\n");
            for (i = 0; i < M; i++)
            {
                for (j = 0; j < N; j++)
                {
                    printf("Elemento [%d,%d]: ", i, j);
                    scanf("%d", &mat[i][j]);
                }
            }

            printf("\nDigite os valores do segundo vetor\n");

            for (i = 0; i < M; i++)
            {
                for (j = 0; j < N; j++)
                {
                    printf("Elemento [%d,%d]: ", i, j);
                    scanf("%d", &mat1[i][j]);
                }
            }

            printf("\nMATRIZ DIGITADA:\n");
            for (i = 0; i < M; i++)
            {
                for (j = 0; j < N; j++)
                {
                    mat2[i][j] = mat[i][j] - mat1[i][j];
                    printf("%d ", mat2[i][j]);
                }
                printf("\n");
            }
            printf("\nTecle 's' se deseja continuar\n\n");
            opcao = getch();
        }

    }

#endif ex34