/*
 * Exercício 07

Fazer um programa para ler um número inteiro e dizer se este número é par ou ímpar.

Exemplos:

Entrada: Saída:
12 PAR

Entrada: Saída:
-27 IMPAR

Entrada: Saída:
0 PAR
 */

import java.util.Scanner;
public class Ex07 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int n;
		n=0;
		
		System.out.println("Digite um número");
		n=sc.nextInt();
		
			if(n>=0) {
				System.out.println("PAR");				
			}
			else {
				System.out.println("ÍMPAR");
			}
		
		
		
		
		
		
		
		
		
		
		
		sc.close();
	}
	
}
