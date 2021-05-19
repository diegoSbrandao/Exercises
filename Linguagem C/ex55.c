#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define ex1

#ifdef ex1
main()
{
    /*

    10.	Elabore um programa que efetue o cálculo do reajuste de salário de um funcionário.
    Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.
    Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %;
    caso seja maior que 1000, o reajuste deve ser de 5%.
    Ao final do programa deve apresentar o valor antigo e o novo salário.

    */
    setlocale(LC_ALL, "Portuguese");

    int  salar,novoSalar;
    double reaj;
    do{
    printf("Digite seu salário R$: \n");
    scanf("%d", &salar);

    if(salar<=0){
        printf("O valor do salário deve ser maior que zero\n");
    }

    }while(salar<=0);

   if(salar<800){
    reaj = 0.15;
    novoSalar = salar * reaj + salar;
    printf("Seu antigo salário era %d agora seu novo salário é %d",salar,novoSalar);
   }

   else if(salar>=800 && salar<=1000){
    reaj = 0.10;
    novoSalar = salar * reaj + salar;
   printf("Seu antigo salário era %d agora seu novo salário é %d",salar,novoSalar);
   }

   else if(salar>1000){
    reaj = 0.05;
    novoSalar = salar * reaj + salar;
   printf("Seu antigo salário era %d agora seu novo salário é %d",salar,novoSalar);
   }

}

#endif 

