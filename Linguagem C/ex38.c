#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex38

#ifdef ex38
/*
Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.
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
            if(frase[i] >= 97 && frase[i] <= 122)
                frase[i] -= 32;

        printf("\nNovo texto: %s\n", frase);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex38