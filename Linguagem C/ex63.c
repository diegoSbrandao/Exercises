#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{
    /*
        7.	Faça um programa que receba a altura e o sexo (1 para homens e 2 para mulheres)
        de uma pessoa e que calcule e mostre o seu peso ideal, utilizando as seguintes fórmulas:
        a.	Para homens (72 * h) – 58
        b.	Para mulheres (62,1* h) – 44.7

    */

    setlocale(LC_ALL, "Portuguese");

    double  x,y;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite qual seu sexo: homem (1), mulher (2).\n");
    scanf("%lf",&y);

    if (x<=0 || y!=1 && y!=2){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while(x<=0 || y!=1 && y!=2);

    system("cls"); //limpar a tela.

    if(y==1){
    y = (72 * x) - 58;
     printf("O seu peso ideal é: %.2lf.",y);
   }

   else{
    y = (62.1 * x) - 44.7;
     printf("O seu peso ideal é: %.2lf.",y);
   }

}
#endif 


