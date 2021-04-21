#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex2

#ifdef ex1

/*
Problema "terreno"

Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais, conforme exemplo.

Exemplo:
Digite a largura do terreno: 10.0
Digite o comprimento do terreno: 30.0
Digite o valor do metro quadrado: 200.00
Area do terreno = 300.00
Preco do terreno = 60000.00

*/
main()
{

    setlocale(LC_ALL,"Portuguese");

    float L,C,M,A,P;
    A=0;
    P=0;

    do
    {

        printf("Digite a largura do terreno:\n");
        scanf("%f",&L);

        printf("Digite o comprimento do terreno:\n");
        scanf("%f",&C);

        printf("Digite o valor do metro quadrado:\n");
        scanf("%f",&M);

        if(L==0 || C==0 || M==0)
        {
            printf("\nDigite apenas números acima de 0 (zero).\n");
        }

    }
    while(L==0 || C==0 || M==0);

    A=L*C; //Cálculo da área
    P=M*A; //Cálculo do preço do m²

    printf("\nÁrea do terreno = %.2f\n",A);
    printf("Preço do terreno = %.2f",P);

}
#endif ex1

#ifdef ex2
/*
Problema "retangulo"

Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.

Exemplo:
Base do retangulo: 4.0
Altura do retangulo: 5.0
AREA = 20.0000
PERIMETRO = 18.0000
DIAGONAL = 6.4031

*/
main()
{

    setlocale(LC_ALL, "Portuguese") ;

    float BA,AL,A,PE,DIAG;


    do
    {

        printf("Digite a base do retângulo: ");
        scanf("%f",&BA);

        printf("Digite a altura do retângulo: ");
        scanf("%f",&AL);

        if(BA==0 || AL==00)
        {
            printf("\nDigite apenas números maiores que 0 (zero).\n");
        }

    }
    while(BA==0 || AL==00);

    A=BA*AL; // BASE * ALTURA
    PE= 2 * (BA+AL);       // FÓRMULA = 2(b + h)
    DIAG= sqrt( pow(BA, 2) + pow(AL, 2) ); // diagonal = raiz quadrada de altura² + base²
    //função sqrt = calcula a raiz quadrada, função pow = calcula potenciação.

    printf("\nÁREA = %.4f\n",A);
    printf("\nPERÍMETRO = %.4f\n",PE);
    printf("\nDIAGONAL = %.4f\n",DIAG);

}


#endif ex2


