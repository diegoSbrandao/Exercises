#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex16



#ifdef ex16
/*Escreva um programa que determine o menor multiplo de um numero inteiro.
Este multiplo deve ser maior que o limite minimo recebido.
Recebe os 2 numeros via teclado.
Ex: menor multiplo de 13 maior que 100. Resultado: 104.
*/

main(){

    setlocale(LC_ALL, "Portuguese");

    int lim,mul,x,menor=0;

    printf("LIMITE: ");
    scanf("%d",&lim);
    printf("MULTIPLO: ");
    scanf("%d",&mul);

    for(x=lim+mul+1; x>lim; x--)
    {
        if(x%mul==0)
        {
            if(x<menor)
            {
                menor = x;
            }
            else if(menor==0)
            {
                menor = x;
            }
        }
    }
    system("clear||cls");//comando para limpar a tela.
    printf("Menor múltiplo de %d maior que o limite de %d = %d",mul,lim,menor);

}

#endif ex16