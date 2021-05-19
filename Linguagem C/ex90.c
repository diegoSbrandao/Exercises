#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex01

#ifdef ex01

/*
    1 - Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se são IGUAIS ou DIFERENTES.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char C;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        _Bool stringsIguais(char s1[], char s2[]);

        char s1[10];
        char s2[10];
        char *ps1;
        char *ps2;


        printf("Digite alguma palavra(max de 10 caracteres): ");
        scanf("%s", &s1);
        printf("Digite outra palavra (max de 10 caracteres): ");
        scanf("%s", &s2);

        ps1=&s1;
        ps2=&s2;

        if(stringsIguais(ps1,ps2))
        {
            printf(" São iguais\n");
        }
        else
        {
            printf(" Não são iguais\n");
        }

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

_Bool stringsIguais(char str1[], char str2[])
{

    int contador = 0;
    int igual = 0;
    while (str1[contador] != '\0' || str2[contador] != '\0')
    {
        if (str1[contador] == str2[contador])
        {
            ++igual;
        }
        ++contador;
    }
    if (igual == contador)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#endif