#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex29

#ifdef ex29

/*
Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
      para transforma-lo em uma calculadora. (utilize o comando switch). As operacoes
      aritmeticas devem estar em funcoes. O resultado deve ser mostrado na funcao main()
*/

//declaração
int soma(int x, int y);
int subt(int x, int y);
int multi(int x, int y);
float divis(int x, int y);

main(){

    setlocale(LC_ALL, "Portuguese");
    int num1, num2, res = 0;
    char op;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S'){

    printf("Digite um numero: ");
    scanf("%d",&num1);

    do{
        printf("\nDigite a operação escolhida:");
        printf("\nSoma(+): ");
        printf("\nSubtração(-): ");
        printf("\nDivisão(/): ");
        printf("\nMultiplicação(*):\n");
        op = _getche();
        if(op == '='){
            break;
        }
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);
        system("clear||cls");//comando para limpar a tela.

        switch(op){
        case '+':
            res = soma(num1,num2);
            printf("RESULTADO = %d",soma(num1,num2));
            printf("\nSe deseja parar digite o símbolo de igual (=)");
            break;
        case '-':
            res = subt(num1,num2);
            printf("RESULTADO = %d",subt(num1,num2));
            printf("\nSe deseja parar digite o símbolo de igual (=)");
            break;
        case '*':
            res = multi(num1,num2);
            printf("RESULTADO = %d",multi(num1,num2));
            printf("\nSe deseja parar digite o símbolo de igual (=)");
            break;
        case '/':
            res = (int) divis(num1,num2);
            printf("RESULTADO = %2.f", divis(num1,num2));
            printf("\nSe deseja parar digite o símbolo de igual (=)");
            break;
        }
        num1 = res;
        printf("\n\n");
    }
    while(1==1);
    printf("\nUltimo resultado: %d", res);
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

#endif ex29