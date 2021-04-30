#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex37

#ifdef ex37
 /*
Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:
            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/
int main(){

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {

	char texto1[7],texto2[7],texto3[7],texto4[7],texto5[7];
    puts("\nTexto 1: ");
    gets(texto1);
    puts("\nTexto 2: ");
    gets(texto2);
    puts("\nTexto 3: ");
    gets(texto3);
    puts("\nTexto 4: ");
    gets(texto4);
    puts("\nTexto 5: ");
    gets(texto5);
    printf("\n        10        20        30        40        50");
    printf("\n12345678901234567890123456789012345678901234567890\n");
    printf("  %s                                   %s",texto1,texto5);
    printf("\n            %s               %s                   %s",texto2,texto4);
    printf("\n                      %s                   ",texto3);

    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();
    }

}
#endif ex37