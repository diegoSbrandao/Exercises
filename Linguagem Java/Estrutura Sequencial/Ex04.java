
/*
 
 Exercício 04

Fazer um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por
hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas
decimais.

Exemplos:
Entrada: Saída:
25
100
5.50
NUMBER = 25
SALARY = U$ 550.00

Entrada: Saída:
1
200
20.50
NUMBER = 1
SALARY = U$ 4100.00

Entrada: Saída:
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
		
		System.out.println("Digite o número do funcionário: ");
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
