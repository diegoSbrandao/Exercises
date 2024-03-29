
/*
 * Exerc�cio 06

Fazer um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e
mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B.

Exemplos:
Entrada: Sa�da:
3.0 4.0 5.2 TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000

Entrada: Sa�da:
12.7 10.4 15.2 TRIANGULO: 96.520
CIRCULO: 725.833
TRAPEZIO: 175.560
QUADRADO: 108.160
RETANGULO: 132.080
 * 
 */

import java.util.Scanner;
public class Ex06 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		
		double a,b,c,tri,cir,trap,quad,retan,pi;
		pi = 3.14159;
		
		System.out.println("Digite tr�s n�meros: ");
		a=sc.nextDouble();
		b=sc.nextDouble();
		c=sc.nextDouble();
		
		tri = a * c / 2;
		cir = pi * (Math.pow(c,2));
		trap = (a + b) * c / 2;
		quad = b * b;
		retan = a * b;
		
		System.out.printf("TRI�NGULO: %.3f\n", tri);
		System.out.printf("C�RCULO: %.3f\n", cir);
		System.out.printf("TRAP�ZIO: %.3f\n", trap);
		System.out.printf("QUADRADO: %.3f\n", quad);
		System.out.printf("RET�NGULO: %.3f\n", retan);
		
		
		sc.close();

	}

}
