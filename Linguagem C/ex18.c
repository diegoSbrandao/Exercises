#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex18


#ifdef ex18
/*Escreva um programa que receba via teclado um tempo em segundos e
converta para horas, minutos e segundos.
Ex.: recebe 3850 segundos que converte para 1h 4min 10s.
*/
main(){

    setlocale(LC_ALL, "Portuguese");

    int H,M,S,s;

    printf("DIGITE OS SEGUNDOS: ");
    scanf("%d",&s);

    H = s/3600;
    S = s%3600;
    M = S/60;
    S = S-(M*60);

    if(H==0)
    {
        printf("%d segundos são = %dmin %ds",s,M,S);
    }
    else if(H==1)
    {
        printf("%d segundos são = %dh %dmin %ds.",s,H,M,S);
    }
    else
    {
        printf("%d segundos são = %dhrs %dmin %ds.",s,H,M,S);
    }
}


#endif ex18