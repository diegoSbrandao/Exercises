#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1

/* 10)	Gere a seguinte sequência abaixo para K termos.
K representa a quantidade de números que o usuário gostaria quer fosse exibida dessa sequência.
Mostre também a somatória apenas dos números divisíveis por 3 dessa sequência.
Utilize o laço do while para a entrada da quantidade K e um laço for para efetuar os cálculos solicitados.
		1, 1, 2, 3, 5, 8, 13, 21, .....


        Lógica tentada, abaixo.

        n1  + (n2-i);
		n1=n3;
		n2=n3;

        resultado= n1  + (n2-i);
       n3=resultado;

      printf("%d " "",resultado);
      n1=n3;
      n2=n1;

*/

main()
{

    setlocale(LC_ALL, "Portuguese");


    int x,num, n1, n2,somatoria;
    somatoria=0;
    n1 = 1;
    n2 = 0;

    do
    {
        printf("Digite a quantidade de termos desejada: ");
        scanf("%d",&x);

        if(x<=0)
        {
            printf("\nDigite um número maior que 0 (zero) !\n");
        }

    }while(x<=0);

    printf (" %d", n1);
    for (int i = 2; i < x; ++i)
    {
        num = n2 + n1;

        if(num%3==0)
        {
            somatoria+=num;
        }

        printf (" %d", num);
        n2 = n1;
        n1 = num;
    }

    printf ("\n\n");

    if(somatoria > 0){
    printf ("A somatória dos números divisíveis por três é igual a %d\n",somatoria);
    }
    else{
        printf("Não existe número divisível por três\n");
    }

    system("pause");

}


#endif 

