
/*
 
 Exerc�cio 04

Fazer um programa que leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, o valor que recebe por
hora e calcula o sal�rio desse funcion�rio. A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas
decimais.

Exemplos:
Entrada: Sa�da:
25
100
5.50
NUMBER = 25
SALARY = U$ 550.00

Entrada: Sa�da:
1
200
20.50
NUMBER = 1
SALARY = U$ 4100.00

Entrada: Sa�da:
6
145
15.55
NUMBER = 6
SALARY = U$ 2254.75
 */

import java.util.Scanner;

public class Ex04 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int numeroFuncionario;
		double horasTrabalhadas, valorHora;
		
		System.out.println("Digite o n�mero do funcion�rio: ");
		numeroFuncionario=sc.nextInt();
		
		System.out.println("Digite a quantidade de horas trabalhas: ");
		horasTrabalhadas=sc.nextDouble();
		
		System.out.println("Digite o valor da sua hora: ");
		valorHora=sc.nextDouble();
		
		
		
		System.out.println("Number = " + numeroFuncionario);
		System.out.printf("Salary = U$ %.2f", (horasTrabalhadas*valorHora));
						
				
		
		
		sc.close();

	}

}
