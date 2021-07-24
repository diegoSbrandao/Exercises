#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex03

#ifdef ex03

_Bool pesquisa(char letra, char *vetor, int tamanho);

main()
{
    /*

    3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa no
    video na funcao main(). O vetor é uma variavel local na função main().Passe
    como parametro para a funcao o vetor e a letra digitada usando ponteiros.
    Pesquise usando ponteiros. (utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y

    */

    static char vetor[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
    char letra;
    char *pc;
    char *vet;
    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        puts("Digite uma letra: ");
        letra = getchar();
        pc=&letra;
        puts("Resultado: ");

        vet=&vetor;
        if(pesquisa(letra,&vetor[0],sizeof(vet)))
        {
            puts("Valor encontrado !");
        }
        else
        {
            puts("Valor NÃO encontrado");
        }

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
        getchar();

    }


}

_Bool pesquisa(char letra,char *vetor,int tamanho)
{
    int i;
    for(i=0; i<tamanho; i++)
    {
        if(letra==vetor[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

#endif

