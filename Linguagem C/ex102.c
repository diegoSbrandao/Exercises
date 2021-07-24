#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex01

#ifdef ex01

main()
{

    /*
        1 - Faça um programa para:
    1 - criar/abrir um arquivo texto de nome ”arq.txt”,
    2 - receba via teclado diversos caracteres (um por vezes)e armazene-os
        nesse arquivo. O caracter '0' finaliza a entrada de dados.
    3 - abra o arquivo. Leia e imprima na tela todos os caracteres armazenados.

    */

    setlocale(LC_ALL, "Portuguese");

    char x;

    FILE* arq = fopen("arq.txt", "w");

    do
    {
        printf("Digite um caractere: ");    //Recebe caracteres;
        scanf("%c",&x);
        getchar();
        fputc(x,arq);

    }while(x!='0');     //Ao ser digitado 0 é encerrado;
    fclose (arq);


    arq = fopen("arq.txt", "r"); //Abre o arquivo para leitura;

    x = getc(arq);
    while (x != EOF)
    {
        putchar(x);             //Imprime o conteúdo do arquivo;
        x = getc(arq);
    }

    fclose (arq);
}
#endif



