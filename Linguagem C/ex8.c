#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex8

#ifdef ex8

/*
Problema "media_idades"

Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa.
Calcular e imprimir a idade média deste grupo de indivíduos.
Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSIVEL CALCULAR".

Exemplo 1:
Digite as idades:
31
27
46
-5
MEDIA = 34.67

Exemplo 2:
Digite as idades:
-10
IMPOSSIVEL CALCULAR
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    float idade,media,cont;
    idade =  1;
    cont=0;
    media=0;

    while(idade >= 0)
    {

        printf("Digite as idades: ");
        scanf("%f",&idade);


        if(idade >0 )
        {
            cont += 1;
            media += idade;
        }

    }

    system("cls");

    if(cont == 0)
    {
        printf("Impossível calcular");

    }
    else
    {
        printf("MEDIA =%.2f ", media/cont);
    }


}

#endif ex8