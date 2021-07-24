#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define ex02

#ifdef ex02

/*

        2 - Faça um programa para gerenciar uma agenda de contatos. Para cada contato
        armazene o nome, o telefone e o aniversário (dia e mês) em uma estrutura de
        dados.

        O programa deve ter as opções:
        1 - inserir contato
        2 - altera contato
        3 - exclui contato
        4 - pesquisar um contato pelo nome
        5 - listar todos os contatos
        6 - listar os contatos cujo nome inicia com uma letra digitada
        7 - imprimir os aniversariantes do mês.

        Sempre que o programa for encerrado, os contatos devem ser escritos no arquivo.
        Quando o programa iniciar os contatos devem ser lidos do arquivo.
        O vetor de estrutura será de 4 elementos como variavel local na funcao main().
        Utilize ponteiros

*/

struct dados
{
    char nome[40];
    char telefone[40];
    char niver[10];
};

void inserir(struct dados *ppessoas);
void exibir(struct dados *ppessoas);
void pesquisar(struct dados *ppessoas);
void alterar(struct dados *ppessoas);
void excluir(struct dados *ppessoas);
void gravarArquivo(struct dados *ppessoas);
void lerArquivo();
int checarNome(char *nome, struct dados *ppessoas);
void pesquisarLetra(struct dados *ppessoas);
void pesquisarNiver(struct dados *ppessoas);




main()
{

    setlocale(LC_ALL,"Portuguese");
    int i, op;
    struct dados pessoas[4];
    do
    {
        printf("\nEscolha uma opcao:\n1 - Inserir contato\n2 - Alterar contato \n3 - Excluir contato\n4 - Pesquisar contato\n5 - Exibir contatos\n6 - Listar contatos por letra inicial \n7 - Imprimir Aniversariantes\n8 - Gravar arquivo\n9 - Ler arquivo.\n10 - Sair\n-->");
        scanf("%d",&op);
        getchar();
        switch(op)
        {
        case 1:
            inserir(&pessoas[0]);
            break;
        case 2:
            alterar(&pessoas[0]);
            break;
        case 3:
            excluir(&pessoas[0]);
            break;
        case 4:
            pesquisar(&pessoas[0]);
            break;
        case 5:
            exibir(&pessoas[0]);
            break;
        case 6:
            pesquisarLetra(&pessoas[0]);
            break;
        case 7:
            pesquisarNiver(&pessoas[0]);
            break;
        case 8:
            gravarArquivo(&pessoas[0]);
            break;
        case 9:
            lerArquivo();
            break;
        case 10:
            printf("\nEncerrando...\n");
            break;
        }
    }
    while(op != 10);
}

void inserir(struct dados *ppessoas)
{
    int i;
    for(i=0; i<4; i++)
    {
        puts("Digite seu nome: ");
        gets((ppessoas+i)->nome);
        puts("Digite seu telefone: ");
        gets((ppessoas+i)->telefone);
        puts("Digite sua data de Aniversário [MM/AAAA]: ");
        gets((ppessoas+i)->niver);
        printf("\n");
    }
}

void exibir(struct dados *ppessoas)
{
    int i;
    for(i=0; i<4; i++)
    {
        printf("\n");
        printf("Nome: %s\n",(ppessoas+i)->nome);
        printf("telefone: %s\n",(ppessoas+i)->telefone);
        printf("Aniversário: %s\n",(ppessoas+i)->niver);
    }
}

void pesquisar(struct dados *ppessoas)
{
    int i;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, ppessoas);
    if(i >= 0)
    {
        printf("\nNome: %s\nTelefone: %s\nAniversário: %s\n", (ppessoas+i)->nome,(ppessoas+i)->telefone,(ppessoas+i)->niver);
    }
}

void alterar(struct dados *ppessoas)
{
    int i;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, ppessoas);
    if(i >= 0)
    {
        puts("Digite seu novo nome: ");
        gets((ppessoas+i)->nome);
        puts("Digite seu novo telefone: ");
        gets((ppessoas+i)->telefone);
        puts("Digite sua nova data de Aniversário: ");
        gets((ppessoas+i)->niver);
        printf("\n");
    }
}

void excluir(struct dados *ppessoas)
{
    int i, j;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, ppessoas);
    if(i >= 0)
    {
        strcpy((ppessoas+i)->nome,"");
        strcpy((ppessoas+i)->telefone,"");
        strcpy((ppessoas+i)->niver,"");
        printf("\n\"Excluido\"\n");
    }
}


void pesquisarNiver(struct dados *ppessoas)
{
    int i;
    char Z[4];
    puts("Digite o mês de aviversário [MM]: ");
    gets(Z);

    if(ppessoas->niver[0] == Z[0] && ppessoas->niver[1] == Z[1] )
    {
        printf("\nNome: %s\nTelefone: %s\nAniversário: %s\n", (ppessoas+i)->nome,(ppessoas+i)->telefone,(ppessoas+i)->niver);
    }

}


void pesquisarLetra(struct dados *ppessoas)
{
    int i;
    char X[2];
    puts("Digite a primeira letra: ");
    gets(X);

    if(ppessoas->nome[0] == X[0])
    {
        printf("\nNome: %s\nTelefone: %s\nAniversário: %s\n", (ppessoas+i)->nome,(ppessoas+i)->telefone,(ppessoas+i)->niver);
    }

}

void gravarArquivo(struct dados *ppessoas)
{
    FILE *p;
    int i;

    if((p = fopen("agenda_contatos","w"))==NULL)
    {
        puts("Erro ao abrir o arquivo.");
        exit(0);
    }
    else
    {
        for(i=0; i<4; i++)
        {
            fwrite((ppessoas+i)->nome,sizeof((ppessoas+i)->nome),1,p);
            fwrite((ppessoas+i)->telefone,sizeof((ppessoas+i)->telefone),1,p);
            fwrite((ppessoas+i)->niver,sizeof((ppessoas+i)->niver),1,p);
        }
        printf("\nArquivo gravado com sucesso!\n");
    }
    fclose(p);
}

void lerArquivo()
{
    FILE *p;
    struct dados cpessoas[4];
    int i;
    if((p = fopen("agenda_contatos","r"))==NULL)
    {
        puts("Erro ao abrir o arquivo.");
        exit(0);
    }
    else
    {
        for(i=0; i<4; i++)
        {
            fread(cpessoas[i].nome,sizeof(cpessoas[i].nome),1,p);
            fread(cpessoas[i].telefone,sizeof(cpessoas[i].telefone),1,p);
            fread(cpessoas[i].niver,sizeof(cpessoas[i].niver),1,p);
        }
        for(i=0; i<4; i++)
        {
            printf("\nNome: %s\n",cpessoas[i].nome);
            printf("telefone: %s\n",cpessoas[i].telefone);
            printf("Aniversário: %s\n",cpessoas[i].niver);
        }
    }
    fclose(p);
}

int checarNome(char *nome, struct dados *ppessoas)
{
    int i,j,c = 0;
    for(i=0; i<4; i++)
    {
        if(strlen(nome)==strlen((ppessoas+i)->nome))
        {
            for(j=0; j<strlen(nome); j++)
            {
                if(nome[j]==(ppessoas+i)->nome[j])
                {
                    c++;
                }
            }
            if(c == strlen((ppessoas+i)->nome))
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

