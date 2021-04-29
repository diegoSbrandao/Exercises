#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex13

#ifdef ex13

/*

Problema "alturas"

Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.

Exemplo:
Quantas pessoas serao digitadas? 5
Dados da 1a pessoa:
Nome: Joao
Idade: 15
Altura: 1.82
Dados da 2a pessoa:
Nome: Maria
Idade: 16
Altura: 1.60
Dados da 3a pessoa:
Nome: Teresa
Idade: 14
Altura: 1.58
Dados da 4a pessoa:
Nome: Carlos
Idade: 21
Altura: 1.65
Dados da 5a pessoa:
Nome: Paulo
Idade: 17
Altura: 1.78

Altura média: 1.69
Pessoas com menos de 16 anos: 40.0%
Joao
Teresa

*/

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, nmenores;
    double alturatotal, alturamedia, percentualMenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (int i=0; i<n; i++)
    {
        printf("\nDados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    nmenores = 0;
    alturatotal = 0;
    for (int i=0; i<n; i++)
    {
        if (idades[i] < 16)
        {
            nmenores++;
        }
        alturatotal = alturatotal + alturas[i];
    }

    alturamedia = alturatotal / n;
    percentualMenores = ((double)nmenores / n) * 100.0;

    printf("\nAltura media = %.2lf\n", alturamedia);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

    for(int i=0; i<n; i++)
    {
        if (idades[i] < 16)
        {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
#endif ex13