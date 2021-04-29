#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex14

#ifdef ex14

/*

Problema "diagonal_negativos"

Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.

Exemplo:
Qual a ordem da matriz? 3
Elemento [0,0]: 5
Elemento [0,1]: -3
Elemento [0,2]: 10
Elemento [1,0]: 15
Elemento [1,1]: 8
Elemento [1,2]: 2
Elemento [2,0]: 7
Elemento [2,1]: 9
Elemento [2,2]: -4
DIAGONAL PRINCIPAL:
5 8 -4
QUANTIDADE DE NEGATIVOS = 2

*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    int n, qtdnegativos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
			printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");

    for (int i=0; i<n; i++) {
        printf("%d ", matriz[i][i]);
    }

    qtdnegativos = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matriz[i][j] < 0) {
                qtdnegativos+=1;
            }
        }
    }

	printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qtdnegativos);

    return 0;
}

#endif ex14