#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1

/*
6 - Escreva um programa que contenha uma estrutura representando uma data valida.
    Essa estrutura deve conter os campos dia, mes e ano.
    Em seguida,leia duas datas e armazene nessa estrutura usando ponteiros.
    Calcule e exiba o numero de dias que decorreram entre as duas datas usando ponteiros.
*/
struct data
{
    int dia;
    int mes;
    int ano;
    int soma;
};

main()


{
    setlocale(LC_ALL, "Portuguese");

    static struct data dados[2], *ponteiro;
    ponteiro = &dados[0];

    int mesTrinta=0;
    int mesTrintaUm=0;
    int mesVinteOito=0;
    int soma=0;
    int diferencaDias=0;
    int somaDiferencaDias =0;
    int somaTotal=0;
    int mesmoMes=0;
    int bissexto=0;
    int contaAnos=0;
    int somaAnos =0;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {



    for(int i=0; i<2; i++)          //Laço de repetição usado para coletar os dados.
    {

            system("color 07");

            do{
            printf("\tPor favor, informe uma data: \n\n");
            printf("Por favor, digite o %d dado: \n",i+1);      //O primeiro ano deve ser MENOR que o segundo ano!.
            printf("[Dia]: ");
            scanf("%d", &(*(ponteiro + i)).dia);


            if(((*(ponteiro + i)).dia < 1 || (*(ponteiro + i)).dia >31))
            {
                printf("\nNúmero Inválido !\n");
                printf("Digite um número entre 1 e 31\n");
                system("color 40");
            }

            }while(((*(ponteiro + i)).dia < 1 || (*(ponteiro + i)).dia >31));       //Laço de repetição para validação de Dias


            system("color 07");
            do{
            printf("[Mês]: ");
            scanf("%d", &(*(ponteiro + i)).mes);

            if (((*(ponteiro + i)).mes <= 0) || (*(ponteiro + i)).mes >12)
            {
                printf("\nNúmero Inválido !\n");
                printf("Digite um número entre 1 e 12\n");
                system("color 40");

            }

            }while(((*(ponteiro + i)).mes <= 0) || (*(ponteiro + i)).mes >12);    //Laço de repetição para validação de Mês


            system("color 07");
            do{
            printf("[Ano]: ");
            scanf("%d", &(*(ponteiro + i)).ano);


            if  ( (*(ponteiro + i)).ano <= 1900 || (*(ponteiro + i)).ano > 2100 && (2100 - (*(ponteiro + i)).ano <200))
            {
                printf("\nNúmero Inválido !\n");
                printf("Digite um número entre 1900 e no máximo 2100\n");
                system("color 40");

            }

            }while( (*(ponteiro + i)).ano <= 1900 || (*(ponteiro + i)).ano > 2100 && (2100 - (*(ponteiro + i)).ano <200));        //Laço de repetição para validação: Ano limitado entre 1900 a 2100.






            if ((*(ponteiro + i)).mes == 4  || (*(ponteiro + i)).mes == 6  || (*(ponteiro + i)).mes == 9 || (*(ponteiro + i)).mes == 11) // Limitar meses selecionados, a inserir no máximo 30 dias.
            {


                if((*(ponteiro + i)).dia>=31)
                {
                    printf("A data digitada %d é inválida para o mês digitado %d.\n",(*(ponteiro + i)).dia,(*(ponteiro + i)).mes);
                }


            }



            if ((*(ponteiro + i)).mes == 1 || (*(ponteiro + i)).mes == 3  || (*(ponteiro + i)).mes == 5 || (*(ponteiro + i)).mes == 7 || (*(ponteiro + i)).mes == 8 || (*(ponteiro + i)).mes == 10 || (*(ponteiro + i)).mes == 12) // Limitar meses selecionados, a inserir no máximo 31 dias.
            {

                if((*(ponteiro + i)).dia>=31)
                {
                    printf("A data digitada %d é inválida para o mês digitado %d.\n",(*(ponteiro + i)).dia,(*(ponteiro + i)).mes);
                }

            }



            if ( (*(ponteiro + i)).ano % 400 == 0 || (*(ponteiro + i)).ano % 4 == 0 && (*(ponteiro + i)).ano % 100 != 0)            // Verificação ano bissexto.
            {

                bissexto=1;
                if((*(ponteiro + i)).mes==2 && (*(ponteiro + i)).dia > 29)
                {
                    printf("\nA data digitada %d é inválida para o mês digitado.\n",(*(ponteiro + i)).dia);
                    printf("\ Ano Bissexto mês de fevereiro (29 DIAS)\n");


                }

            }

            if(bissexto==0)                                                                         // Verificação mês fevereiro máx. 28 dias.
            {
                if((*(ponteiro + i)).mes==2 && (*(ponteiro + i)).dia > 28)
                {
                    printf("\nA data digitada %d é inválida para o mês digitado.\n",(*(ponteiro + i)).dia);
                    printf("\Mês de fevereiro (28 DIAS)\n");

                }


            }

            bissexto=0;

    }


            //Processamento dos dados inseridos.


            contaAnos = abs((*(ponteiro + 0)).ano -(*(ponteiro + 1)).ano); //Conta para diferença de anos

            if((*(ponteiro + 0)).mes > (*(ponteiro + 1)).mes)          //Se o primeiro mês for maior que o segundo mês
            {
                (*(ponteiro + 1)).mes = (*(ponteiro + 1)).mes + 12;
            }




    if ((*(ponteiro + 0)).ano == (*(ponteiro + 1)).ano)       ////Ano Igual e Bissexto, mas não conta o mês com 29 dias, pois data informada é acima de fevereiro.
    {

    if((*(ponteiro + 0)).ano % 400 == 0 || (*(ponteiro + 0)).ano % 4 == 0 && (*(ponteiro + 0)).ano % 100 != 0 && (*(ponteiro + 0)).mes > 2)
    {

        for(int i=(*(ponteiro + 0)).mes+1; i < (*(ponteiro + 1)).mes; i++)
        {

            if(i==4 || i == 6 || i == 9 || i == 11)
            {
                mesTrinta++;
            }
            else if (i==2)
            {
                mesVinteOito++;
            }

            else if (i==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                mesTrintaUm++;
            }


            else if (i > 12)
            {
                i = 0;
                (*(ponteiro + 1)).mes = (*(ponteiro + 1)).mes - 12;
            }

        }


    }

    else if((*(ponteiro + 0)).ano % 400 == 0 || (*(ponteiro + 0)).ano % 4 == 0 && (*(ponteiro + 0)).ano % 100 != 0 && (*(ponteiro + 0)).mes <=2)   //Ano Igual e Bissexto, Conta o mês com 29 dias!
    {
        bissexto+=1;

        for(int i=(*(ponteiro + 0)).mes+1; i < (*(ponteiro + 1)).mes; i++)
        {

            if(i==4 || i == 6 || i == 9 || i == 11)
            {
                mesTrinta++;
            }
            else if (i==2)
            {
                mesVinteOito++;
            }

            else if (i==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                mesTrintaUm++;
            }


            else if (i > 12)
            {
                i = 0;
               (*(ponteiro + 1)).mes = (*(ponteiro + 1)).mes - 12;
            }

        }


    }

    else
    {

        for(int i=(*(ponteiro + 0)).mes+1; i < (*(ponteiro + 1)).mes; i++)
        {

            if(i==4 || i == 6 || i == 9 || i == 11)
            {
                mesTrinta++;
            }
            else if (i==2)
            {
                mesVinteOito++;
            }

            else if (i==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                mesTrintaUm++;
            }


            else if (i > 12)
            {
                i = 0;
                (*(ponteiro + 1)).mes = (*(ponteiro + 1)).mes - 12;
            }

        }


    }


}


        if(contaAnos > 1)      //Se Diferença de anos Maior que 1 ano
        {
            if((*(ponteiro + 0)).mes >2)
            {
                (*(ponteiro + 0)).ano = (*(ponteiro + 0)).ano + 1; //Aumenta um ano do ano original, para não entrar no cálculo.

                for(int A=(*(ponteiro + 0)).ano; A < (*(ponteiro + 1)).ano; A++)
                {

                    if(A % 400 == 0 || A % 4 == 0 && A % 100 != 0)
                    {
                        bissexto++;
                    }

                }

            }

            else
            {

                for(int A=(*(ponteiro + 0)).ano; A < (*(ponteiro + 1)).ano; A++)
                {

                    if(A % 400 == 0 || A % 4 == 0 && A % 100 != 0)
                    {
                        bissexto++;
                    }

                }

            }


            for(int i=(*(ponteiro + 0)).mes+1; i < (*(ponteiro + 1)).mes; i++)
            {

                if(i==4 || i == 6 || i == 9 || i == 11)
                {
                    mesTrinta++;
                }
                else if (i==2)
                {
                    mesVinteOito++;
                }

                else if (i==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                {
                    mesTrintaUm++;
                }


                else if (i > 12)
                {
                    i = 0;
                    (*(ponteiro + 0)).mes = (*(ponteiro + 1)).mes - 12;
                }

            }


        }


        if (contaAnos == 1)       //Anos com diferença de no máximo 1 (um) ano.
        {

            if((*(ponteiro + 0)).mes >2)
            {

                for(int A=(*(ponteiro + 0)).ano; A < (*(ponteiro + 1)).ano; A++)
                {

                    if(A % 400 == 0 || A % 4 == 0 && A % 100 != 0)
                    {
                        bissexto=0;
                    }

                }

            }

            else if ((*(ponteiro + 0)).mes <=2)
            {
                bissexto+=1;

            }


            for(int i=(*(ponteiro + 0)).mes+1; i < (*(ponteiro + 1)).mes; i++)
            {

                if(i==4 || i == 6 || i == 9 || i == 11)
                {
                    mesTrinta++;
                }
                else if (i==2)
                {
                    mesVinteOito++;
                }

                else if (i==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                {
                    mesTrintaUm++;
                }


                else if (i > 12)
                {
                    i = 0;
                    (*(ponteiro + 1)).mes = (*(ponteiro + 1)).mes- 12;
                }

            }


        }

                //Cálculo de Dias

        if ((*(ponteiro + 0)).mes == (*(ponteiro + 1)).mes)
        {
            mesmoMes = abs((*(ponteiro + 0)).dia - (*(ponteiro + 1)).dia);
        }


        else if((*(ponteiro + 0)).mes==4 || (*(ponteiro + 0)).mes == 6 || (*(ponteiro + 0)).mes == 9 || (*(ponteiro + 0)).mes == 11)
        {
            diferencaDias = 30 - (*(ponteiro + 0)).dia;
        }


        else if ((*(ponteiro + 0)).mes==2)
        {
            diferencaDias = 28 - (*(ponteiro + 0)).dia;
        }


        else if ((*(ponteiro + 0)).mes==1 || (*(ponteiro + 0)).mes == 3 || (*(ponteiro + 0)).mes == 5 || (*(ponteiro + 0)).mes == 7 || (*(ponteiro + 0)).mes == 8 || (*(ponteiro + 0)).mes == 10 || (*(ponteiro + 0)).mes == 12)
        {
            diferencaDias = 31 - (*(ponteiro + 0)).dia;
        }



                        //Cálculo de Exceções


        if( (*(ponteiro + 0)).dia == (*(ponteiro + 1)).dia && (*(ponteiro + 0)).mes == (*(ponteiro + 1)).mes && (*(ponteiro + 0)).ano != (*(ponteiro + 1)).ano)
        {
            somaAnos = contaAnos * 365;
        }


        if((*(ponteiro + 0)).mes!=(*(ponteiro + 1)).mes)
        {
            somaDiferencaDias = diferencaDias + dados[1].dia;
        }

        soma = (mesTrinta * 30) + (mesVinteOito * 28) + (mesTrintaUm * 31);


        if(contaAnos >1)
        {
            somaAnos = contaAnos * 365;
        }

        else if(contaAnos >=1 && (*(ponteiro + 0)).mes - (*(ponteiro + 1)).mes <2)

        {
            somaAnos = contaAnos * 365;
        }


                                    //Saída de Dados !


        (*(ponteiro + 0)).soma = somaDiferencaDias + soma + mesmoMes + somaAnos + bissexto;
        system("cls");
        system("color 1F");
        printf("\n\n\n\t\t\t\t ###############################################");
        printf("\n\t\t\t\t Os dias que decorreram entre as duas datas = %d. \n", (*(ponteiro + 0)).soma);
        printf("\t\t\t\t ###############################################\n\n");

        system("pause");

         printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();


    }

}




#endif
