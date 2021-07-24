#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex04

#ifdef ex04

/*
4 - A partir do exercico 6 do capitulo de funcoes, retire o vetor de estrutura e
escreva e leia os registros direto no arquivo. (utilize a funcao fseek).

*/

struct dados
{
    char nome[40];
    char end[40];
    char cidade[40];
    char estado[3];
    char cep[9];
};

void recepcao(struct dados *p, FILE *KP);
void exibicao(struct dados *p, FILE *KP);
int procurar(struct dados *p, FILE *KP);
void alterar(struct dados *p, FILE *KP);
void excluir(struct dados *p, FILE *KP);

main()
{

    setlocale(LC_ALL, "Portuguese");

    int op; //             nome, end, cidade, estado, cep
    static struct dados p;
    struct dados *p;

    p = &p;

    FILE *KP;
    setlocale(LC_ALL,"Portuguese");
    do
    {
        printf("\nEscolha uma opcao:\n1 - Inserir dados\n2 - Exibir dados \n3 - Procurar\n4 - Alterar\n5 - Excluir\n6 - Sair.\n-->");
        scanf("%d",&op);
        getchar();
        switch(op)
        {
        case 1:
            recepcao(p,KP);
            break;
        case 2:
            exibicao(p,KP);
            break;
        case 3:
            procurar(p,KP);
            break;
        case 4:
            alterar(p,KP);
            break;
        case 5:
            excluir(p,KP);
            break;
        case 6:
            printf("\nEncerrando...\n");
            break;
        }

        printf("\n");
        system("pause");
        system("cls");
    }
    while(op != 6);
}

void recepcao(struct dados *p, FILE *KP)
{
    KP = fopen("agenda.txt","a");

    puts("Digite seu nome: ");
    gets(p->nome);

    puts("Digite seu endereco: ");
    gets(p->end);

    puts("Digite sua cidade: ");
    gets(p->cidade);

    puts("Digite seu estado: ");
    gets(p->estado);

    puts("Digite seu cep: ");
    gets(p->cep);
    printf("\n");

    fwrite(p,sizeof(*p),1,KP);

    fclose(KP);

}

void exibicao(struct dados *p, FILE *KP)
{

    int i;

    KP = fopen("agenda.txt","r");

    if(KP == NULL)
    {
        system("cls");
        system("color F0");
        printf("\n\n\t\t\t\t############");
        printf("\n\t\t\t\tLista vazia!\n");
        printf("\t\t\t\t############\n\n");
    }

    else
    {
        system("cls");



        printf("\n\n\t\t\%c%c%c%c%c LISTAGEM p %c%c%c%c%c \n\n",4,4,4,4,4,4,4,4,4,4);



        printf("\n\t\t _________________________________________________________________________________");
        printf("\n\t\t|       NOME        |      ENDEREÇO       |    CIDADE     |  ESTADO  |    CEP     |");

        while(1)
        {
            i = fread(p,sizeof(*p),1,KP);

            if(i == 1)
            {
                if(p->nome[0] != '*')
                {


                    printf("\n            %18s %26s %14s %10s %10s", p->nome, p->end, p->cidade, p->estado, p->cep);

                }
            }
            else
            {
                break;
            }
        }

        fclose(KP);

        printf("\n\n\n\n\t\t");
    }
}

int procurar(struct dados *p, FILE *KP)
{
    int i, j, cont = 0;
    unsigned char pesq[25] = "\0";

    KP = fopen("agenda.txt","r");

    if(KP == NULL)
    {
        system("cls");
        system("color F0");
        printf("\n\n\t\t\t\t############");
        printf("\n\t\t\t\tLISTA VAZIA!\n");
        printf("\t\t\t\t############\n\n");
    }
    else
    {
        system("cls");

        printf("\n\n\t\t\t%c%c%c PESQUISAR NOME %c%c%c\n\n",4,4,4,4,4,4);

        printf("\n\t\tInsira o nome: ");
        gets(pesq);

        while(1)
        {
            i = fread(p,sizeof(*p),1,KP);

            if(i == 1)
            {
                if(p->nome[0] != '*')
                {
                    for (j = 0; p->nome[j] != '\0'; j++)
                    {
                        if (p->nome[j] != pesq[j])
                        {
                            break;
                        }
                    }
                }

                cont++;

                if (p->nome[j] == '\0' && pesq[j] == '\0')
                {

                    printf("\n\t\t _________________________________________________________________________________");
                    printf("\n\t\t|       NOME        |      ENDEREÇO       |    CIDADE     |  ESTADO  |    CEP     |");



                    printf("\n            %18s %26s %14s %10s %10s", p->nome, p->end, p->cidade, p->estado, p->cep);


                    fclose(KP);

                    return (cont);
                }
            }
            else
            {
                break;
            }
        }
        system("cls");
        system("color 02");
        printf("\n\n\n\t\t\t\tNOME NÃO ENCONTRADO!\n");
        fclose(KP);

        return (-1);
    }
}




void alterar(struct dados *p, FILE *KP)
{
    int k, y;

    KP = fopen("agenda.txt","r+");

    if(KP == NULL)
    {
        system("cls");
        system("color F0");
        printf("\n\n\t\t\t\t############");
        printf("\n\t\t\t\tLista vazia!\n");
        printf("\t\t\t\t############\n\n");
    }


    else
    {
        k = procurar(p, KP);

        if(k == -1)
        {
            printf("\t\t\t\tErro no processo!");
        }


        else
        {
            printf("\n\t\tALTERANDO DADOS: \n");

            puts("Digite seu nome: ");
            gets(p->nome);

            puts("Digite seu endereco: ");
            gets(p->end);

            puts("Digite sua cidade: ");
            gets(p->cidade);

            puts("Digite seu estado: ");
            gets(p->estado);

            puts("Digite seu cep: ");
            gets(p->cep);
            printf("\n");

            KP = fopen("agenda.txt","r+");

            y = sizeof(*p)*(k-1);

            fseek(KP,y,0);

            fwrite(p,sizeof(*p),1,KP);

            fclose(KP);

        }

        printf("\n\n\t\t");

    }
}




void excluir(struct dados *p, FILE *KP)
{
    int k, y;

    KP = fopen("agenda.txt","r+");

    if(KP == NULL)
    {
        system("cls");
        system("color F0");
        printf("\n\n\t\t\t\t############");
        printf("\n\t\t\t\tLista vazia!\n");
        printf("\t\t\t\t############\n\n");
    }
    else
    {
        k = procurar(p, KP);

        if(k == -1)
        {
            printf("\t\t\t\tErro no processo!");
        }
        else
        {
            p->nome[0] = '*';
            p->end[0] = '*';
            p->cidade[0] = '*';
            p->estado[0] = '*';
            p->cep[0] = '*';

            KP = fopen("agenda.txt","r+");

            y = sizeof(*p)*(k-1);

            fseek(KP,y,0);

            fwrite(p,sizeof(*p),1,KP);

            fclose(KP);

            printf("\n\t\t\t***** DADOS EXCLUÍDOS *****\n\n");

            printf("\n\n\t\t");
        }
    }
}



#endif





