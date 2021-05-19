#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1

/*
2 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados pelo teclado usando ponteiros e imprima-os no video
    também usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
              nome, end, cidade, estado, cep
*/
struct cadastro
{
    char nome[20];
    char end[30];
    char cidade[20];
    char estado[20];
    char cep[9];
};

struct cadastro cliente[4];
struct cadastro *p[4];

void main()
{
    int op, i = 0, j;

    setlocale(LC_ALL, "Portuguese");

    while(op!=3)
    {


        printf("\n\t\t     ##### MENU #####\n\n\n");
        printf("\t\t1-Cadastrar cliente.\n\n");
        printf("\t\t2-Lista de clientes.\n\n");
        printf("\t\t3-Fechar programa.\n\n");

        printf("\n\t\tInforme a função desejada: ");
        scanf_s("%d", &op);

        switch(op)
        {
        case 1:
            system("cls");

            if (i <= 3)
            {
                printf("\n\t\t     ##### CADASTRO DO CLIENTE #####\n\n\n");
                getchar();
                printf("\t\tInforme o nome do cliente: ");
                gets(cliente[i].nome);
                printf("\n\t\tInforme o endereço do cliente: ");
                gets(cliente[i].end);
                printf("\n\t\tInforme a cidade: ");
                gets(cliente[i].cidade);
                printf("\n\t\tInforme estado: ");
                gets(cliente[i].estado);
                printf("\n\t\tInforme o CEP: ");
                gets(cliente[i].cep);
                printf("\n\t\t");

                p[0] = &cliente[0];
                p[1] = &cliente[1];
                p[2] = &cliente[2];
                p[3] = &cliente[3];
                i++;
            }
            else
            {
                system("cls");
                printf("\n\t\tLista lotada!\n\n\n\t\t");

            }

            system("pause");
            system("cls");
            break;

        case 2:
            system("cls");
            printf("\n\t\t     ##### DADOS DOS CLIENTES #####\n\n\n");

            if (i == 0)
            {
                system("cls");
                printf("\n\t\tLista vazia!\n\n\n\t\t");
            }
            else
            {
                for (j = 0; j < i; j++)
                {
                    printf("\n\t\tNOME: %s", p[j]->nome);
                    printf("\n\t\tENDEREÇO: %s", p[j]->end);
                    printf("\n\t\tCIDADE: %s", p[j]->cidade);
                    printf("\n\t\tESTADO: %s", p[j]->estado);
                    printf("\n\t\tCEP: %s\n", p[j]->cep);

                }
            }
            printf("\n\t\t");
            system("pause");
            system("cls");
            break;

        default:
            system("cls");
            if(op!=3)
            {
                printf("\n\t\tA opção informada não existe!\n\n\n\t\t");
                system("pause");
                system("cls");
                break;
            }
            else
            {
                printf("\n\t\t\PROGRAMA ENCERRADO !\n\n\t\t");
            }
        }

    }
}

#endif