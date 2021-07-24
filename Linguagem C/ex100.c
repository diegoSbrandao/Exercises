#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex05

#ifdef ex05

/*


5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel local na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa função e imprima todos os registros no
    video em outra funcao. Faça um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a opção de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
                nome, end, cidade, estado, cep

*/

struct dados
{
    char nome[40];
    char end[40];
    char cidade[40];
    char estado[3];
    char cep[9];
};

void recepcao(struct dados *pessoas);
void exibicao(struct dados *pessoas);

main()
{
    int i, op;
    struct dados pessoas[3];
    do
    {
        printf("\nEscolha uma opcao:\n1 - Inserir dados\n2 - Exibir dados\n3 - Sair.\n-->");
        scanf("%d",&op);
        getchar();
        switch(op)
        {
        case 1:
            recepcao(pessoas);
            break;
        case 2:
            exibicao(pessoas);
            break;
        case 3:
            printf("\nEncerrando...\n");
            break;
        }
    }
    while(op != 3);
}

void recepcao(struct dados *pessoas)
{
    int i;
    for(i=0; i<3; i++)
    {
        puts("Digite seu nome: ");
        gets(pessoas[i].nome);
        puts("Digite seu endereco: ");
        gets(pessoas[i].end);
        puts("Digite sua cidade: ");
        gets(pessoas[i].cidade);
        puts("Digite seu estado: ");
        gets(pessoas[i].estado);
        puts("Digite seu cep: ");
        gets(pessoas[i].cep);
        printf("\n");
    }
}

void exibicao( struct dados *pessoas)
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("\n");
        printf("Nome: %s\n",pessoas[i].nome);
        printf("Endereco: %s\n",pessoas[i].end);
        printf("Cidade: %s\n",pessoas[i].cidade);
        printf("Estado: %s\n",pessoas[i].estado);
        printf("Cep: %s\n",pessoas[i].cep);
    }
}



#endif

