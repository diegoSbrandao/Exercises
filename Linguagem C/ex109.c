#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ex01

#ifdef ex01

/*

Calcule o enésimo termo - HackerRank

Tarefa

Tarefa

Existe uma série, S , onde o próximo termo é a soma dos três termos anteriores. Dados os três primeiros termos da série,A,B , e respectivamente, você tem que emitir o n º termo da série usando recursão.

O método recursivo para calcular o n- ésimo termo é fornecido abaixo.


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

