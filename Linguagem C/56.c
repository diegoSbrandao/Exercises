#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define ex1

#ifdef ex1
main()
{
    /*
        11.	Receba dois números, o primeiro deve ser maior que 10 e menor que 25,
        o segundo deve ser maior ou igual a zero,
        o terceiro deve ser a soma dos dois primeiros e
        o quarto é o produto dos três números anteriores.
        Calcule e exiba a soma dos quadrados de cada um dos quatro números.
        Caso o resultado seja menor que 50000, solicite novos dados.
    */
    setlocale(LC_ALL, "Portuguese");

    int a,b,c,d,quadrado;

    do{

        do{
        printf("Digite 2 números\n");
        scanf("%d" "%d", &a,&b);

        if (a<= 10 || a>=25 ){
            printf("O primeiro dígito deve ser mais que 10 e menor que 25.\n");
        }
        else if (b<0){
            printf("O segundo dígito deve ser mais que 0 ou igual a zero.\n");
        }

        }while(a<= 10 || a>=25 || b<0);

      c= a+b;
      d= a*b*c;

      quadrado = pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2);
      if (quadrado <=50000){
        printf("Digite novos números\n\n");
      }
      else{
      printf("A soma dos quadrados é:%d\n ",quadrado);
      }
      }while(quadrado <=50000);
}

#endif 

