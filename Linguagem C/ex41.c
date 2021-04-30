#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex41

#ifdef ex41
/*
	Escreva um programa que tenha o menu abaixo.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit e Celsius e Kelvin
       3 - transforma graus Kelvin e Celsius e Fahrenheit
    Cada opcao de menu deve chamar uma funcao que retorna o resultado da
    conversao. O resultado deve ser mostrado na funcao main().
*/

//declaração
float celsiusFunc(int x);
float fahrenheitFunc(int x);
float kelvinFunc(int x);
float celsius,fahrenheit,kelvin;
float C,F, K;



int main(){

setlocale(LC_ALL, "Portuguese");
int op;

    char opcao = 's';

    while(opcao == 's' || opcao == 'S') {

    printf("Escolha uma opção abaixo:\n"),
    printf("\n1 - transforma graus Celsius em Fahrenheit e Kelvin");
    printf("\n2 - transforma graus Fahrenheit e Celsius e Kelvin");
    printf("\n3 - transforma graus Kelvin e Celsius e Fahrenheit\n");
    scanf("%d",&op);


    if(op==1){
	   celsiusFunc(C);
    }
    else if (op==2){
      fahrenheitFunc(F);
    }
    else if (op==3){
      kelvinFunc(K);
    }
    else{
        printf("Número digitado inválido");
    }
    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();
    }

}

//Funções
float celsiusFunc(int x)
{
  float C,F, K;
  printf("Escreva a temperatura em graus celsius: ");//conversao de celsius pra kelvin e fahrenheit
  scanf("%f",&C);
  F = C * 1.8 + 32;//calculo para fahrenheit
  K = C + 273.15;//calculo para kelvin
  printf("\nDe celsius pra Fahrenheit = %.2f \n", F);
  printf("\nDe celsius pra Kelvin = %.2f \n", K);
}

float fahrenheitFunc(int x)
{
  float C,F, K;
  printf("Escreva a temperatura em graus fahrenhit: ");//conversao de fahrenhit pra kelvin e celsius
  scanf("%f",&F);
  C = (F-32) / 1.8;//calculo para celsius
  K = F + 459.67; //calculo para kelvin
  K = K * 5/9; //calculo para kelvin
  printf("\nDe Fahrenheit pra celsius  = %.2f \n", C);
  printf("\nDe Fahrenheit pra Kelvin = %.2f \n", K);
}

float kelvinFunc(int x)
{
  float C,F, K;
  printf("Escreva a temperatura em graus kelvin: ");//conversao de kelvin pra  celsius e fahrenheit
  scanf("%f",&K);
  F = (K - 273.15) * 9/5 + 32;//calculo para fahrenheit
  C = K - 273.15;//calculo para celsius
  printf("\nDe kelvin pra Fahrenheit = %.2f \n", F);
  printf("\nDe kelvin pra celsius = %.2f \n", C);
}


#endif ex41