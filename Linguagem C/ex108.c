#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ex01

#ifdef ex01

/*

Impressão de padrão usando loops - HackerRank

Tarefa

Imprima um padrão de números de 1 para N como mostrado abaixo. Cada um dos números é separado por um único espaço.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
Formato de entrada

A entrada conterá um único inteiro N.

Restrições

 N >= 1 e N <= 1000

Amostra de entrada 0

2
Saída de amostra 0

2 2 2 
2 1 2 
2 2 2
*/

int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

#endif

