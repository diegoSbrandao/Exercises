#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*

12)	Uma empresa contratou a quantidade de funcionários representada pela variável Y.
Conforme o valor das vendas mensais, os funcionários adquirem pontos que determinarão seus salários ao final de cada mês.
Sabe-se que esses funcionários trabalharão nos meses de novembro a janeiro do ano subsequente.
Utilize os laços que desejar.

a)	Leia as pontuações nos três meses de cada funcionário;
b)	Calcule e mostre a pontuação geral de cada funcionário nos três meses.
c)	Calcule e mostre a média das pontuações de cada funcionário nos três meses.
d)	Determine e mostre a maior pontuação atingida entre todos os funcionários nos três meses.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Y,pontuacaoNov,pontuacaoDez,pontuacaoJan,maior,func;
    float somatoria =0;
    pontuacaoNov=0;
    pontuacaoDez=0;
    pontuacaoJan=0;
    somatoria=0;
    maior=0;
    func=0;


    do
    {

        printf("Qual a quantidade de funcionários ? ");
        scanf("%d",&Y);

        if(Y<=0)
        {
            printf("Número inválido! Digite um número superior a 0 (zero).\n");
        }
    }
    while(Y<=0);

    for(int i=0; i < Y; i++)
    {

        do
        {

            printf("Digite a pontuação do funcionario %i no mês de novembro: ",i+1);
            scanf("%d",&pontuacaoNov);

            printf("Digite a pontuação do funcionario %i no mês de dezembro: ",i+1);
            scanf("%d",&pontuacaoDez);

            printf("Digite a pontuação do funcionario %i no mês de janeiro: ",i+1);
            scanf("%d",&pontuacaoJan);

            if(pontuacaoNov < 0 || pontuacaoDez < 0 || pontuacaoJan < 0)
            {
                printf("\nNúmero digitado Inválido ! Digite zero ou um número superior a zero.\n");
            }

        }
        while(pontuacaoNov < 0 || pontuacaoDez < 0 || pontuacaoJan < 0);

        somatoria=pontuacaoNov+pontuacaoDez+pontuacaoJan;


        if(somatoria > maior)
        {
            maior=somatoria;
            func=i;
        }

        printf("\nFuncionário %d sua pontuação nos 3 meses foi: %.0f",i+1,somatoria);
        printf("\nFuncionário %d sua pontuação média nos 3 meses foi: %.2f\n\n",i+1,somatoria/3);

        somatoria=0;

    }

    printf("\--------------------------------------------------\n");
    printf("A maior pontuação dos 3 meses atingida foi: %d.",maior);
    printf("\nO Funcionário número:[%d] foi o que mais pontuou.",func+1);
    printf("\n--------------------------------------------------\n");

}

#endif 

