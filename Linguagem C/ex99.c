#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex04

#ifdef ex04

/*
    4 - Escreva um programa que receba em 1 funcao 2 strings de ate' 10 caracteres.
        Os vetores sao declaradas como variavel local na função main().

        Escreva uma funcao que recebe as 2 strings como parametros usando ponteiros
        e compare estas 2 strings.

        Retorne como resultado da comparacao
        0 se forem DIFERENTES,
        1 se forem IGUAIS,
        2 se a string 1 for maior que a string 2,
        3 se a string 2 for maior que a string 1 e
        4 se as string tem tamanhos iguais mas são diferentes.

*/


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char C;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        int stringsIguais(char s1[], char s2[]);

        char s1[10];
        char s2[10];
        char *p1;
        char *p2;

        printf("Digite alguma palavra(max de 10 caracteres): ");
        scanf("%s", &s1);
        printf("Digite outra palavra (max de 10 caracteres): ");
        scanf("%s", &s2);

        p1=&s1;
        p2=&s2;

        stringsIguais(p1,p2);  //ponteiros sendo usados como parametros.

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

int stringsIguais(char str1[], char str2[])
{

    int i = 0;
    int igual = 0;
    int x=0,y=0;

    while (str1[i] != '\0' || str2[i] != '\0')  //Verificar igual das strings
    {
        if (str1[i] == str2[i])
        {
            igual++;
        }
        i++;

    }

    for(int j =0; str1[j] != '\0';j++){   //Verificar tamanho das strings
        x++;
    }

    for(int k=0; str2[k] != '\0'; k++){
         y++;
    }


    if(x==y && igual==i)        //Selecionando conforme pedido no enunciado
    {
        printf("1");
    }

    else if(x > y)
    {
        printf("0 e 2");
    }

    else if(x < y)
    {
        printf("0 e 3");
    }
    else{
        printf("4");
    }



}

#endif




