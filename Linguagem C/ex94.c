#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1

/*
5 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcular
    a media dos valores digitados e mostrar o resultado. Todos os calculos devem ser
    feitos usando ponteiro.
*/

main()
{

    system("color 1F");
    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';
    float p=0;
    float cont=0;
    float *ponteiro = 0;
    float media = 0;


    while(opcao == 's' || opcao == 'S')
    {


        do
        {

            printf("\nDigite um número: ");
            scanf("%f",&p);

            if(p>0)
            {

                ponteiro = &p;
                cont++;
                media+=*ponteiro;
            }

        }
        while(p>=0);

        if(media>0)
        {
            printf("\nMédia: %.2f", media/cont);
            media=0; // é zerado para poder iniciar novamente sem bug.
            p=0;    // é zerado para poder iniciar novamente sem bug.
            cont=0; // é zerado para poder iniciar novamente sem bug.
        }

        else
        {
            printf("O usuário digitou apenas números nulos 0 (zero) !");
        }

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();


    }

}

#endif