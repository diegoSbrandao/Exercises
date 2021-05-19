#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{
    /*
        6.	Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que o usuário deseja subindo a escada.
        Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x,y,deg;
    float degraus;

    do {
            printf("Digite a altura do degrau em cm:\n");
            scanf("%d",&x);

            printf("Digite qual altura deseja subir em metros:\n");
            scanf("%d",&y);

    }while(x<=0 || y<=0 || x>y*100);

    degraus =  y*100/x;
    deg = degraus;

   if(deg==degraus){
    printf("A quantidade de degraus que terá que subir será: %.2f.",degraus);
}
   else{
   printf("A quantidade de degraus que terá que subir será: %d.",deg+1);
   }
}
#endif 

