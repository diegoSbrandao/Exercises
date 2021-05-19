#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{
    /*

    8.	O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde
    para dar uma indicação sobre a condição de peso de uma pessoa adulta.
    A fórmula é IMC = peso / (altura)2. Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo
    com as condições abaixo:

        Resultado		Situação

        Abaixo de 17		Muito abaixo do peso
        Entre 17 e 18,49	Abaixo do peso
        Entre 18,5 e 24,99	Peso normal
        Entre 25 e 29,99	Acima do peso
        Entre 30 e 34,99	Obesidade I
        Entre 35 e 39,99	Obesidade II (severa)
        Acima de 40		Obesidade III (mórbida)

    */
    setlocale(LC_ALL, "Portuguese");

    double  x,y,imc;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite o seu peso.\n");
    scanf("%lf",&y);

    if (x<=0 || y<=0){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while(x<=0 || y<=0);

    imc = y / pow(x,2);

    system("cls"); //limpar a tela.

    if(imc<17){
     printf("Muito abaixo do peso");
   }

   else if(imc<18.49){
     printf("Abaixo do peso");
   }

   else if(imc<24.99){
     printf("Peso normal");
   }

   else if(imc<29.99){
     printf("Acima do peso");
   }

   else if(imc<34.99){
     printf("Obesidade I");
   }

   else if(imc<39.99){
     printf("Obesidade II (severa)");
   }

   else{
    printf("Obesidade III (mórbida)");
   }

}
#endif 


