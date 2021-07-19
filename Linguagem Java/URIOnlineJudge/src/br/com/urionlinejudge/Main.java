package br.com.urionlinejudge;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int ano=0;
        int mes=0;
        int dias=0;

        while (N != 0) {
            ano = N / 365;
            N = N - (ano * 365);

            mes = N / 30;
            N = N - (mes * 30);

            dias = N / 1;
            N = N - (dias * 1);

        }
        System.out.println(ano+" ano(s)");
        System.out.println(mes+" mes(es)");
        System.out.println(dias+" dia(s)");

        sc.close();
    }
}