#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 11)	Solicite ao usuário um número maior ou igual a zero e inteiro representado pela variável num.
Calcular o fatorial desse número.
Utilize o laço while para a entrada da variável num e um laço for para efetuar o cálculo do fatorial.
	     OBS: O Fatorial de zero e de um é um.
         Exemplo de cálculo do Fatorial:
		5! =5 * 4 * 3 * 2 * 1            ou
		5! =1 * 2 * 3 * 4 *5
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,num,fat;
    num=-1;
    fat=1;

    while(num<0)
    {

        printf("Digite um número: ");
        scanf("%d",&num);

        if(num<0)
        {
            printf("\nDigite um número maior ou igual a 0 (zero)\n");
        }

    }

    for(i=1; i < num; i++)
    {

        fat*=num-i;

    }

    printf("\nO fatorial do número %d é: %d\n",num,fat*i);

}

#endif 

