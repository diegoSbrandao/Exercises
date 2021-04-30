#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex39

#ifdef ex39
/*
Receba via teclado uma cadeia de caracteres (10) e
    converta todos os caracteres para letras minusculas.
*/
int main()
{

    setlocale(LC_ALL, "Portuguese");

    char frase[10];
    int i;
    char C;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("Entre com o texto: ");
        fgets(frase,9,stdin);

        for(i = 0; frase[i] != '\0'; i++)
            if(frase[i] >= 65 && frase[i] <= 90)
                frase[i] += 32;

        printf("\nNovo texto: %s\n", frase);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex39