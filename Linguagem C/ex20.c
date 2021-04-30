#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex20


#ifdef ex20
/*Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $20, $10, $5, $2 e $1 em que o valor lido pode
    ser decomposto. Escrever o valor lido e a relação de notas necessárias.
*/
main(){

    setlocale(LC_ALL, "Portuguese");
    int valor,troco;
    int cem, cinquenta, vinte, dez, cinco, dois, um;       // Guarda a quantidade de nota do valor.

    printf("Entre com um valor em reais.\n");
    scanf("%d",&valor);

    troco = valor;


    cem = troco / 100;
    troco = troco - (cem *100);

    cinquenta = troco / 50;
    troco = troco - (cinquenta * 50);

    vinte = troco / 20;
    troco = troco - (vinte * 20);

    dez = troco /10;
    troco = troco -(dez * 10);

    cinco = troco / 5;
    troco = troco - (cinco * 5);

    dois = troco / 2;
    troco = troco - (dois * 2);

    printf("Valor decomposto : %d\n",valor);
    printf("Notas de 100 : %d\n",cem);
    printf("Notas de 50 : %d\n",cinquenta);
    printf("Notas de 20 : %d\n",vinte);
    printf("Notas de 10 : %d\n",dez);
    printf("Notas de 5 : %d\n",cinco);
    printf("Notas de 2 : %d\n",dois);
    printf("Notas de 1 : %d\n",troco);
   
}
#endif ex20