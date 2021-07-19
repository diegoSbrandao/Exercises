package br.com.urionlinejudge;
import java.util.Scanner;

/*
Leia um valor de ponto flutuante com duas casas decimais.
Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis
no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2.
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial,
conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

Exemplo de Entrada
576.73

Exemplo de Saída
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01

 */
public class UriOnlineJudge1021 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double N = sc.nextDouble();
        int X100 = 0;
        int X50 = 0;
        int X20 = 0;
        int X10 = 0;
        int X5 = 0;
        int X2 = 0;

        int RES = (int) N;

        double X1 = 0;
        double X05 = 0;
        double X025 = 0;
        double X010 = 0;
        double X005 = 0;
        double X001 = 0;
        

        while (RES != 0) {
            X100 = RES / 100;
            RES = RES - (X100 * 100);

            X50 = RES / 50;
            RES = RES - (X50 * 50);

            X20 = RES / 20;
            RES = RES - (X20 * 20);

            X10 = RES / 10;
            RES = RES - (X10 * 10);

            X5 = RES / 5;
            RES = RES - (X5 * 5);

            X2 = RES / 2;
            RES = RES - (X2 * 2);
            break;
        }

        double moeda = RES;
        System.out.printf("%.2f",moeda);

        while (moeda != 0) {

            X1 = moeda / 1.0;
            moeda = moeda - (X1 * 1.0);
            
            X05 = moeda / 0.5;
            moeda = moeda - (X05 * 0.5);

            X025 = moeda / 0.25;
            moeda = moeda - (X20 * 0.25);

            X010 = moeda / 0.1;
            moeda = moeda - (X010 * 0.10);

            X005 = moeda / 0.05;
            moeda = moeda - (X005 * 0.05);

            X001 = moeda / 0.01;
            moeda = moeda - (X001 * 0.01);
        }


        System.out.println("NOTAS");
        System.out.println(X100 + " nota(s) de R$ 100,00" );
        System.out.println(X50 + " nota(s) de R$ 50,00" );
        System.out.println(X20 + " nota(s) de R$ 20,00" );
        System.out.println(X10 + " nota(s) de R$ 10,00" );
        System.out.println(X5 + " nota(s) de R$ 5,00" );
        System.out.println(X2 + " nota(s) de R$ 2,00" );

        System.out.println("MOEDAS");
        System.out.println(X1 + " moeda(s) de R$ 1.00" );
        System.out.println(X05 + " moeda(s) de R$ 0.50" );
        System.out.println(X025 + " moeda(s) de R$ 0.25" );
        System.out.println(X010 + " moeda(s) de R$ 0.10" );
        System.out.println(X005 + " moeda(s) de R$ 0.05" );
        System.out.println(X001 + " moeda(s) de R$ 0.01" );

        sc.close();
    }
}