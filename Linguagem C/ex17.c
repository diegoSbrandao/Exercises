#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex17


#ifdef ex17
/*Escreva um programa que receba dados via teclado para variaveis do tipo short,
//long, int, float, double e um char e imprima-os no video no seguinte formato:
        10        20        30        40        50        60
12345678901234567890123456789012345678901234567890123456789012345
    short               long                int
              float               double              char
*/
main(){

     setlocale(LC_ALL, "Portuguese");

    char c;
    unsigned char uc;
    short s;
    long l;
    int i;
    float f;
    double d;
    unsigned int ui;
    unsigned long ul;

    printf("DIGITE UM NUMERO SHORT: ");
    scanf("%d",&s);
    printf("DIGITE UM NUMERO LONG: ");
    scanf("%ld",&l);
    printf("DIGITE UM NUMERO INT: ");
    scanf("%d",&i);
    printf("DIGITE UM NUMERO FLOAT: ");
    scanf("%f",&f);
    printf("DIGITE UM NUMERO DOUBLE: ");
    scanf("%lf",&d);
    printf("DIGITE UM CARACTER: ");
    scanf("%c",&c);
    c = getchar();

    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");


    printf("%9d%19d%19d\n",s,l,i);
    printf("%19.2f%21.2lf%18c\n",f,d,c);
}

#endif ex17