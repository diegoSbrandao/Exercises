/*
 * Exercício 01

Fazer um programa para ler um número inteiro, e depois dizer se este número é negativo ou não.

Exemplos:

Entrada: Saída:
-10 NEGATIVO

Entrada: Saída:
8 NAO NEGATIVO

Entrada: Saída:
0 NAO NEGATIVO
 */


import java.util.Scanner;

public class Ex01 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n;
		n=0;
		
		System.out.println("Digite um número");
		n=sc.nextInt();
		
		if(n>=0) {
			System.out.println("NÃO NEGATIVO");			
		}	
		else {
			System.out.println("NEGATIVO");
		}
			
		
		sc.close();
	}
}














