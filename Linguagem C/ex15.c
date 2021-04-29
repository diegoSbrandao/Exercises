#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex15

#ifdef ex15

/*

Problema "soma_linhas"

Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.

Exemplo:
Qual a quantidade de linhas da matriz? 2
Qual a quantidade de colunas da matriz? 3
Digite os elementos da 1a. linha:
7.0
8.0
10.0
Digite os elementos da 2a. linha:
2.0
3.0
5.0
VETOR GERADO:
25.0
10.0

*/

main()
{

    setlocale(LC_ALL, "Portuguese");
     int m, n;
    double somalinha;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double matriz[m][n], vetor[m];

    for (int i=0; i<m; i++) {
        printf("Digite os elementos da %d a. linha\n", i + 1);

        for (int j=0; j<n; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i=0; i<m; i++) {
        somalinha = 0;

        for (int j=0; j<n; j++) {
            somalinha = somalinha + matriz[i][j];
        }
        vetor[i] = somalinha;
    }

    printf("VETOR GERADO:\n");

    for (int i=0; i<m; i++) {
        printf("%.1lf\n", vetor[i]);
    }


}

#endif ex15