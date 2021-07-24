#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex02

#ifdef ex02
/*
    2 - Escreva um programa que receba n valores via teclado, receba também a operação a ser executada.

        Quando for digitado "=" o programa deve mostrar o resultado acumulado dos n valores.

        As operações aritmeticas e a entrada de dados devem ser funções que recebe os valores usando ponteiros.

*/

int soma(int x, int y);
int subt(int x, int y);
int multi(int x, int y);
float divis(int x, int y);

main()
{

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, res = 0;
    int *numA,*numB, *resultado;
    numA = &num1;
    numB = &num2;
    resultado = &res;

    char op;
    char *pont;
    pont = &op;


    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("Digite um numero: ");
        scanf("%d",&numA);

        do
        {
            printf("\nDigite a operação escolhida:");
            printf("\nSoma(+): ");
            printf("\nSubtração(-): ");
            printf("\nDivisão(/): ");
            printf("\nMultiplicação(*):\n");
            op = _getche();
            if(op == '=')
            {
                break;
            }
            printf("\nDigite outro numero: ");
            scanf("%d",&numB);
            system("clear||cls");//comando para limpar a tela.

            switch(op)
            {
            case '+':
                res += soma(numA,numB);
                printf("\nSe deseja parar digite o símbolo de igual (=)");
                break;
            case '-':
                res -= subt(numA,numB);
                printf("\nSe deseja parar digite o símbolo de igual (=)");
                break;
            case '*':
                res *= multi(numA,numB);
                printf("\nSe deseja parar digite o símbolo de igual (=)");
                break;
            case '/':
                res /= (int) divis(numA,numB);
                printf("\nSe deseja parar digite o símbolo de igual (=)");
                break;
            }
            num1 = res;
            printf("\n\n");
        }
        while(1==1);
        resultado = res;
        printf("\nUltimo resultado: %d", resultado);
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }

}

//Funções
int soma(int x, int y)
{
    return x + y;
}

int subt(int x, int y)
{
    return x - y;
}

int multi(int x, int y)
{
    return x * y;
}

float divis(int x, int y)
{
    return (float) x / (float) y;
}

#endif



