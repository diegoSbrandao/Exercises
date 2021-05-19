#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define ex1

#ifdef ex1
main()
{
    /*
        7.	Receba três números onde o primeiro deve ser maior do que zero e menor que 20.
        O segundo deve ser negativo e o terceiro representa um número qualquer.
        Calcule a soma de cada número elevado ao quadrado. Se a soma resultar um valor inferior a 1000 solicite novos dados.
    */

    setlocale(LC_ALL, "Portuguese");

    int x,y,z,soma,poten;

    do
    {
        printf("Digite três números: \n");
        scanf("%d" "%d" "%d", &x,&y,&z);

        soma = pow(x,2) + pow(y,2)+ pow(z,2);

        if (x<=0 || x>20)
        {
            printf("Seu primeiro número deve ser maior 0 e menor que 20\n");
        }
        else if (y>=0)
        {
            printf("Seu segundo número deve ser negativo\n");
        }

        else if (soma < 1000)
        {
            printf("A soma dos números foi inferior a 1000, digite novos números\n");
        }

    }
    while(x<=0 || x>20 || y>=0 || soma<1000);


    printf("A soma dos números digitados %d e %d e %d elevado ao quadrado é: %d\n ",x,x,z,soma);
    system("pause"); // pausa o programa


}

#endif 



