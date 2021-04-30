#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex36

#ifdef ex36
 /*
Faca um programa que leia uma palavra (maximo de 20 letras) em uma funcao
e some 1 no valor ASCII de cada caractere da palavra em outra funcao.
Na sua funcao main() imprima a string resultante. (variavel global).
*/

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char frase[20];
    int i;
    char C;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("Entre com o texto: ");
        fgets(frase,19,stdin);

        for(i = 0; frase[i] != '\0'; i++)
        {
            frase[i] += 1;
        }
        printf("\nNovo texto: %s\n", frase);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }

}

#endif ex36