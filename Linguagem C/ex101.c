#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex06

#ifdef ex6

6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro.

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
void procurar(struct dados *pessoas);
void alterar(struct dados *pessoas);
void excluir(struct dados *pessoas);
int checarNome(char *nome, struct dados *pessoas);

main()
{
    int i, op; //             nome, end, cidade, estado, cep
    struct dados pessoas[3] = {"Diego Brandao","Rua Irineu","Santos","sp","11029000",
                               "Lucas braga","Rua Joaquim","Santos","sp","11029000",
                               "Lucas caldas","Avenida Brasil","Santos","sp","11087000"};
    do
    {
        printf("\nEscolha uma opcao:\n1 - Inserir dados\n2 - Exibir dados \n3 - Procurar\n4 - Alterar\n5 - Excluir\n6 - Sair.\n-->");
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
            procurar(pessoas);
            break;
        case 4:
            alterar(pessoas);
            break;
        case 5:
            excluir(pessoas);
            break;
        case 6:
            printf("\nEncerrando...\n");
            break;
        }
    }
    while(op != 6);
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

void exibicao(struct dados *pessoas)
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

void procurar(struct dados *pessoas)
{
    int i;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, pessoas);
    if(i >= 0)
    {
        printf("\nNome: %s\nEndereco: %s\nCidade: %s\nEstado: %s\nCep: %s\n", pessoas[i].nome,pessoas[i].end,pessoas[i].cidade,pessoas[i].estado,pessoas[i].cep);
    }
}

void alterar(struct dados *pessoas)
{
    int i;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, pessoas);
    if(i >= 0)
    {
        puts("Digite seu novo nome: ");
        gets(pessoas[i].nome);
        puts("Digite seu novo endereco: ");
        gets(pessoas[i].end);
        puts("Digite sua nova cidade: ");
        gets(pessoas[i].cidade);
        puts("Digite seu novo estado: ");
        gets(pessoas[i].estado);
        puts("Digite seu novo cep: ");
        gets(pessoas[i].cep);
        printf("\n");
    }
}

void excluir(struct dados *pessoas)
{
    int i, j;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, pessoas);
    if(i >= 0)
    {
        strcpy(pessoas[i].nome,"");
        strcpy(pessoas[i].end,"");
        strcpy(pessoas[i].cidade,"");
        strcpy(pessoas[i].estado,"");
        strcpy(pessoas[i].cep,"");
        printf("\n\"Excluido\"\n");
    }
}

int checarNome(char *nome, struct dados *pessoas)
{
    int i,j,c = 0;
    for(i=0; i<3; i++)
    {
        if(strlen(nome)==strlen(pessoas[i].nome))
        {
            for(j=0; j<strlen(nome); j++)
            {
                if(nome[j]==pessoas[i].nome[j])
                {
                    c++;
                }
            }
            if(c == strlen(pessoas[i].nome))
            {
                puts("Nome encontrado!");
                return i;
            }
            else
            {
                c = 0;
            }
        }
    }
    puts("Nome nao encontrado!");
    return -1;

}

#endif



