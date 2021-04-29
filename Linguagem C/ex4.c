#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex4

#ifdef ex4

/* Problema "notas"

Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos.

Exemplo 1:
Digite a primeira nota: 45.5
Digite a segunda nota: 31.3
NOTA FINAL = 76.8

Exemplo 2:
Digite a primeira nota: 34.0
Digite a segunda nota: 23.5
NOTA FINAL = 57.5
REPROVADO


*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    float nota1,nota2,media;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    media=nota1+nota2;

    if(media>60)
    {
        printf("NOTA FINAL = %.1f",media);
    }

    else
    {
        printf("NOTA FINAL = %.1f",media);
        printf("\nREPROVADO");
    }

}

#endif ex4