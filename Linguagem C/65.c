#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{

    /*
        9.	Faça um programa que receba a altura e o peso de uma pessoa.
        De acordo com a tabela a seguir e mostre qual a classificação dessa pessoa.

            Altura	          Peso
                              Até 60	      Entre 60 e 90(Inclusive)	  Acima de 90
            Menores que 1,20	A	                D                         G
            De 1,20 a 1,70	    B	                E                         H
            Maiores que 1,70	C	                F                         I

    */

    setlocale(LC_ALL, "Portuguese");

    double  x,y,imc;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite o seu peso.\n");
    scanf("%lf",&y);

    //limitando a altura em 2.5 para, caso usuário digitar em cm, ele receberá a mensagem abaixo.
    if (x<=0 || x > 2.5 || y<=0){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while (x<=0 || x > 2.5 || y<=0);

    system("cls"); //limpar a tela.

    if(x<1.20 && y<=60){
     printf("Classificação: A");
   }

   else if(x<1.20 && y<=90){
     printf("Classificação: D");
   }

   else if(x<1.20 && y>90){
     printf("Classificação: G");
   }

    if(x<1.70 && y<=60){
     printf("Classificação: B");
   }

   else if(x<1.70 && y<=90){
     printf("Classificação: E");
   }

   else if(x<1.70 && y>90){
     printf("Classificação: H");
   }

    if(x>1.70 && y<=60){
     printf("Classificação: C");
   }

   else if(x>1.70 && y<=90){
     printf("Classificação: F");
   }

   else if(x>1.70 && y>90){
     printf("Classificação: I");
   }

}
#endif 
