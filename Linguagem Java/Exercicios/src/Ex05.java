/*
 
 Exercício 05

Fazer um programa para ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o
código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Calcule e mostre o valor a ser pago.

Exemplos:
Entrada: Saída:
12 1 5.30
16 2 5.10
VALOR A PAGAR: R$ 15.50

Entrada: Saída:
13 2 15.30
161 4 5.20
VALOR A PAGAR: R$ 51.40

Entrada: Saída:
1 1 15.10
2 1 15.10
VALOR A PAGAR: R$ 30.20
 */

import java.util.Scanner;
public class Ex05 {

	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		
		int codigoPeca, numeroPecas,codigoPeca2, numeroPecas2;
				
		double valorUnitario,valorUnitario2,soma,soma2,total;
		
		System.out.println("Digite o código da Peça: ");
		codigoPeca=sc.nextInt();
		
		System.out.println("Digite a quantidade desejada: ");
		numeroPecas=sc.nextInt();
		
		System.out.println("Digite o valor unitário da peça: ");
		valorUnitario=sc.nextDouble();
		
		System.out.println("Digite o código da Peça: ");
		codigoPeca2=sc.nextInt();
		
		System.out.println("Digite a quantidade desejada: ");
		numeroPecas2=sc.nextInt();
		
		System.out.println("Digite o valor unitário da peça: ");
		valorUnitario2=sc.nextDouble();
		
		soma = numeroPecas * valorUnitario;
		soma2 = numeroPecas2 * valorUnitario2;	
		total = soma + soma2;
		
		System.out.printf("VALOR A PAGAR : R$ %.2f",total);
					
		
		sc.close();
				

	}

}
