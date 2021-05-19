#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex1

#ifdef ex1
main()
{
    /* 6.	Receba dois números quaisquer, calcule e mostre na tela o resultado da divisão do segundo pelo primeiro. */

    setlocale(LC_ALL, "Portuguese");

    int x,y,divi;

    do
    {
        printf("Digite dois números: \n");
        scanf("%d" "%d", &x,&y);

        if (x<=0)
        {
            printf("Seu primeiro número deve ser maior que 0\n");
        }


    }
    while(x<=0);

    divi = y/x; //y = dividendo e x=divisor

    printf("Lembrando que a divisão feita foi do segundo pelo primeiro.\n");
    printf("A divisão dos números digitados %d e %d é igual: %d\n ",x,y,divi);
    system("pause"); // pausa o programa

}
#endif






