#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1

/* 6)	Receba a quantidade de salários de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário.
A variável Salário armazena cada uma dos K salários digitados.
Calcule e mostre a somatória dos salários superiores a 3 salários-mínimos
e inferior ou igual a 7 salários-mínimos.
Exiba também o maior e o menor salário encontrado.
Utilize o laço while para a entrada da quantidade K
e um laço while para efetuar os cálculos e as comparações solicitadas.
Obs: O valor do salário mínimo deverá ser pesquisado na Internet.
*/
//salário mínimo em 2021 = R$ 1.100.

main()
{

    setlocale(LC_ALL, "Portuguese");

    int k=0,cont;
    float salario,minimo,maior,menor,somaSalario;
    salario=0;
    cont=0;
    minimo=1100;
    maior=0;
    somaSalario=0;
    menor=0;


    while(k<=0)
    {

        printf("Qual a quantidade de salários que irá digitar ? ");
        scanf("%d",&k);

        if(k<=0)
        {
            printf("\nDigite um número maior que 0 (zero).\n");
        }
    }


    while(cont<k)
    {
        cont=cont+1;

        printf("Digite o salário: ");
        scanf("%f",&salario);

        if(salario > 3*minimo && salario <= 7*minimo)
        {
            somaSalario = somaSalario + salario;
        }

        if(cont==1)
        {
            maior=salario;
            menor=salario;
        }
        else if(salario > maior)
        {
            maior=salario;
        }
        else if(salario < menor)
        {
            menor=salario;
        }

    }

    printf("\nA Somatória dos salários pedidos é %.2f\n",somaSalario);
    printf("\nO maior dos salários digitados foi %.2f\n",maior);
    printf("\nO menor dos salários digitados foi %.2f\n",menor);

}


#endif 


