#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define ex1

#ifdef ex1
main()
{
    /*
        12.	Leia quatro valores referentes às notas escolares de um aluno
        e exiba uma mensagem dizendo que ele foi aprovado se a média for maior ou igual a 5.
        Caso contrário informe que ele está reprovado.
        Apresente junto à mensagem o valor da média obtida pelo aluno independente de ter sido aprovado ou não.
        As notas deverão ser maiores ou iguais a zero e menores ou iguais a dez.
    */

    setlocale(LC_ALL, "Portuguese");

    int a,b,c,d,media;

        do{

        printf("Digite suas notas:\n");
        scanf("%d" "%d" "%d" "%d", &a,&b,&c,&d);

        if (a<0 || a>=11){
            printf("A primeira nota foi digitada errada.\n");
        }
        else if (b<0 || b>=11){
            printf("A segunda nota foi digitada errada.\n");
        }
        else if (c<0 || c>=11){
            printf("A terceira nota foi digitada errada.\n");
        }
        else if (d<0 || d>=11){
            printf("A quarta nota foi digitada errada.\n");
        }

        }while((a<0 || a>=11) || (b<0 || b>=11) || (c<0 || c>=11) || (d<0 || d>=11));


     media = (a+b+c+d) / 4;

     if(media>=5){
        printf("Você foi aprovado sua média é: %d\n",media);
     }
     else{
        printf("Você foi reprovado sua média é: %d\n",media);
     }

}

#endif 


