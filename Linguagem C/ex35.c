#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex35

#ifdef ex35
 /*
Receba via teclado valores do tipo int para uma matriz 5 x 5. Receba via
        teclado um valor x. O programa dever fazer a busca desse valor x na matriz
        e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de
        ”nao encontrado”.
    */
    int main(void)
    {

        setlocale(LC_ALL, "Portuguese");

        int i,j,valor,m[5][5];
        char opcao = 's';
        while(opcao == 's' || opcao == 'S')
        {

            for(i=0; i<5; i++)   //faz a matriz que vai armazenar todos os valores
            {

                for(j=0; j<5; j++)
                {

                    printf("escreva o [%i][%i] numero:",i,j);//Primeiro tu coloca para o valor

                    scanf("%i",&m[i][j]);//salva
                }
            }

            system("cls");//limpa a tela

            for(i=0; i<5; i++)
            {

                for(j=0; j<5; j++)
                {

                    printf("|%i",m[i][j]);//mostra a Matriz
                }
                printf("\n");//Esse quebra linha serve para mostrar em forma de matriz
            }

            printf("Qual valor você procura?:");//o que vai ler fora do for ou da matirz

            scanf("%i",&valor);

            for(i=0; i<5; i++)
            {
                for(j=0; j<5; j++)
                {

                    if(m[i][j]==valor)   //condição dentro do for para percorrer a matriz toda
                    {
                        printf("Esse:%i[%i][%i]",m[i][j],i,j);//mostra o resultado
                    }
                }
            }
            printf("\nNúmero não encontrado.\n");
            printf("\nTecle 's' se deseja continuar\n\n");
            opcao = getch();
        }
    }


#endif ex35