#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex19


#ifdef ex19
/*Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
  variável auxiliar.
*/
main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b;
    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);
    printf("a: %d\tb: %d\n", a, b);
    // uma operação de soma e duas subtrações resolvem o problema.
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a: %d\tb: %d\n", a, b);
    
}

#endif ex19