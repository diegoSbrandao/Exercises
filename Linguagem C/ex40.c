#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex40

#ifdef ex40
/*
Receba 2 string de ate 10 caracteres via teclado na funcao main() e noutra
    funcao compare-as mostrando como resultado se são IGUAIS ou DIFERENTES na funcao
    main().
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
        printf("Digite alguma palavra(max de 10 caracteres): ");
        scanf("%s", &s1);
        printf("Digite outra palavra (max de 10 caracteres): ");
        scanf("%s", &s2);

        if(stringsIguais(s1,s2))
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


#endif ex40