#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define ex03

#ifdef ex03
    /*

        3 - Faça um programa para o controle de mercadorias em uma despensa doméstica.
    Cada produto será armazenado um código numérico, nome do produto e quantidade atual
    numa estrutura de dados. Utilize ponteiros. A estrutura deve ser declarada como
    variavel local na funcao main().
    O programa deve ter as opções:
    1 - inclui produtos
    2 - altera produtos
    3 - exclui produtos
    4 - pesquisar uma mercadoria pela descrição
    5 - listar todos os produtos
    6 - listar os produtos não disponíveis.
    7 - alterar a quantidade atual
    Escreva os itens das mercadorias direto no arquivo. (utilize a funcao fseek).

    */



struct dados
{
   unsigned char nome[20];
   char id[6];
   int qnt_atual;
};

void INCLUIR(struct dados *p, FILE *KP);

void LISTAR(struct dados *p, FILE *KP);

int PESQUISAR(struct dados *p, FILE *KP);

void LIMITE(struct dados *p, FILE *KP); // LISTA PRODUTOS COM VALOR ZERADO (PRODUTOS NÃO DISPONÍVEIS)

void QUANTIDADE(struct dados *p, FILE *KP);

void ALTERAR(struct dados *p, FILE *KP);

void EXCLUIR(struct dados *p, FILE *KP);



void main()
{
   setlocale(LC_ALL,"Portuguese");
   int op;

   struct dados produtos;

   struct dados *p;

   p = &produtos;

   FILE *KP;

   while(1)
   {
      system("color 1F");

      printf("\n\n\n");

      printf("\t\t 1 - INCLUIR PRODUTOS\n\n");
      printf("\t\t 2 - ALTERAR PRODUTOS\n\n");
      printf("\t\t 3 - EXCLUIR PRODUTO\n\n");
      printf("\t\t 4 - PESQUISAR MERCADORIA\n\n");
      printf("\t\t 5 - LISTAR PRODUTOS\n\n");
      printf("\t\t 6 - LISTAR PRODUTOS NÃO DISPONÍVEIS\n\n");
      printf("\t\t 7 - ALTERAR QUANTIDADE ATUAL\n\n");
      printf("\t\t 8 - SAIR\n\n");

      printf("\n\n\t\tESCOLHA: ");
      scanf("%d",&op);
      getchar();

      switch (op)
      {
      case 1:
         INCLUIR(p, KP);
         break;
      case 2:
         ALTERAR(p, KP);
         break;
      case 3:
         EXCLUIR(p, KP);
         break;
      case 4:
         PESQUISAR(p, KP);
         break;
      case 5:
         LISTAR(p, KP);
         break;
     case 6:
         LIMITE(p, KP);
         break;
      case 7:
         QUANTIDADE(p, KP);
         break;
      case 8:
         exit(0);
         break;
      default:
        system("cls");
        printf("\n\n\t\tNúmero Inválido !!\n");
      }
      system("pause");
      system("cls");
   }
}

void INCLUIR(struct dados *p, FILE *KP)
{
   system("cls");

   KP = fopen("despensa_domestica.txt","a");

   printf("\n\n\t\t\t CADASTRO DE PRODUTO \n\n");

   printf("\n\t\tInsira o nome do produto: ");
   gets(p->nome);

   printf("\n\n\t\tInsira o ID do produto: ");
   gets(p->id);

   printf("\n\n\t\tInsira a quantidade do produto: ");
   scanf("%d",&p->qnt_atual);

   fwrite(p,sizeof(*p),1,KP);

   fclose(KP);

   printf("\n\n\t\t");
}

void LISTAR(struct dados *p, FILE *KP)
{
   int i;

   KP = fopen("despensa_domestica.txt","r");

   if(KP == NULL)
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      system("cls");

      printf("\n\n\t\t\t>>> LISTA DE PRODUTOS <<<\n\n");


      printf("\n\t\t|         NOME         |    ID      | QNT. ATUAL  |");

      while(1)
      {
         i = fread(p,sizeof(*p),1,KP);

         if(i == 1)
         {
            if(p->nome[0] != '*')
            {
               printf("\n\t\t| %-20s |    %-5s   |    %-5d    |", p->nome,p->id, p->qnt_atual);
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

int PESQUISAR(struct dados *p, FILE *KP)
{
   int i, j, cont = 0;
   unsigned char pesq[20] = "\0";

   KP = fopen("despensa_domestica.txt","r");

   if(KP == NULL)
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      system("cls");

      printf("\n\n\t\t\t>>> PESQUISA DE PRODUTO <<<\n\n");

      printf("\n\t\tInsira o nome do produto: ");
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
               printf("\n\t\t|         NOME         |    ID      | QNT. ATUAL  |");
               printf("\n\t\t| %-20s |    %-5s   |    %-5d    |\n\n", p->nome,p->id, p->qnt_atual);

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
      printf("\n\n\t\tPRODUTO NÃO ENCONTRADO!\n\n");

      fclose(KP);

      return (-1);
   }
}


void LIMITE(struct dados *p, FILE *KP)
{
   int i, cont = 0;

   KP = fopen("despensa_domestica.txt","r");

   if(KP == NULL )
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      while(1)
      {
         i = fread(p,sizeof(*p),1,KP);

         if(i == 1)
         {
            if(p->nome[0] != '*')
            {
               if(p->qnt_atual ==0 )
               {
                  cont++;
               }
            }
         }
         else
         {
            break;
         }
      }

      if(cont == 0)
      {
        system("cls");
         printf("\n\n\t\tNENHUM PRODUTO!!!\n\n\n");
      }
      else
      {
         system("cls");

         printf("\n\n\t\t\t>>> LISTA DE PRODUTOS INDISPONIVEIS <<<\n\n");

        printf("\n\t\t|         NOME         |    ID      | QNT. ATUAL  |");

         fseek(KP,0,0);

         while(1)
         {
            i = fread(p,sizeof(*p),1,KP);

            if(i == 1)
            {
               if(p->nome[0] != '*')
               {
                  if(p->qnt_atual ==0)
                  {
                printf("\n\t\t| %-20s |    %-5s   |    %-5d    |\n\n", p->nome,p->id, p->qnt_atual);

                  }
               }
            }
            else
            {
               break;
            }
         }

         printf("\n\n\n\n\t\t");

         fclose(KP);
      }
   }
}



void QUANTIDADE(struct dados *p, FILE *KP)
{
    int k, y, valores;
   KP = fopen("despensa_domestica.txt","r+");

   if(KP == NULL)
   {
    system("cls");
    printf("Lista Vazia !\n\n");
   }
   else
   {
      k = PESQUISAR(p, KP);

      if(k == -1)
      {
         system("pause");
        printf("PROCESSO CANCELADO !\n\n");
      }
      else
      {

         KP = fopen("despensa_domestica.txt","r+");

         y = sizeof(*p)*(k-1);

         fseek(KP,y,0);

         fread(p,sizeof(*p),1,KP);


         do
         {
            fseek(KP,y,0);
            fread(p,sizeof(*p),1,KP);

            printf("\n\t\t\t>>> ALTERA QUANTIDADE DE PRODUTO <<<\n\n");

            printf("\n\n\t\tInsira a quantidade, se desejar retirar use (-) na frente do número: ");
            scanf("%d",&valores);

            p->qnt_atual += valores;

            if((*p).qnt_atual < 0)
            {
              printf("\n\n\t\tESTOQUE NEGATIVO!!!\n\n");

               system("pause");
               system("cls");
               system("color 1F");
            }
         }while((*p).qnt_atual < 0);

         y = sizeof(*p)*(k-1);

         fseek(KP,y,0);

         fwrite(p,sizeof(*p),1,KP);

         fclose(KP);

         printf("\n\n\n\t\t");
      }
   }
}

void ALTERAR(struct dados *p, FILE *KP)
{
   int k, y;

   KP = fopen("despensa_domestica.txt","r+");

   if(KP == NULL)
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      k = PESQUISAR(p, KP);

      if(k == -1)
      {
         system("pause");
         printf("PROCESSO CANCELADO !\n\n");
      }
      else
      {

         printf("\t\t\t>>> ALTERA PRODUTO <<<\n\n");

         printf("\n\t\tInsira o nome do produto: ");
         gets(p->nome);

         printf("\n\n\t\tInsira a ID do produto: ");
         gets(p->id);

         printf("\n\n\t\tInsira a quantidade do produto: ");
         scanf("%d",&p->qnt_atual);


         KP = fopen("despensa_domestica.txt","r+");

         y = sizeof(*p)*(k-1);

         fseek(KP,y,0);

         fwrite(p,sizeof(*p),1,KP);

         fclose(KP);

         printf("\n\n\t\t");
      }
   }
}

void EXCLUIR(struct dados *p, FILE *KP)
{
   int k, y;

   KP = fopen("despensa_domestica.txt","r+");

   if(KP == NULL)
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      k = PESQUISAR(p, KP);

      if(k == -1)
      {
         system("pause");
         printf("PROCESSO CANCELADO !\n\n");
      }
      else
      {

         p->nome[0] = '*';
         p->id[0] = '*';
         p->qnt_atual = 0;

         KP = fopen("despensa_domestica.txt","r+");

         y = sizeof(*p)*(k-1);

         fseek(KP,y,0);

         fwrite(p,sizeof(*p),1,KP);

         fclose(KP);

         printf("\n\t\t\t>>> PRODUTO EXCLUIDO <<<\n\n");

         printf("\n\n\t\t");
      }
   }
}

#endif







