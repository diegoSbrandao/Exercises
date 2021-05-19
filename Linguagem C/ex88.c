#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex01

#ifdef ex01
/*
 2 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto
*/
void main()
{

    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';

    struct ponto
    {
        int x;
        int y;
    };

    struct ponto p;
    float resultado;

    while(opcao == 's' || opcao == 'S')
    {
    printf("Informe o ponto x: \n");
    scanf("%d", &p.x);
    printf("Informe o ponto y: \n");
    scanf("%d", &p.y);



    resultado = sqrt(pow(p.x - 0, 2) + pow(p.y - 0, 2));



    printf("Distância do ponto de origem (0, 0): %.2f \n", resultado);

    printf("\n\nTecle 's' se deseja continuar\n");
    opcao = getch();
    }
}

#endif 
