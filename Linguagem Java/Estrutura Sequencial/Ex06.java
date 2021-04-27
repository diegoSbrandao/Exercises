
/*
 * Exercício 06

Fazer um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e
mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Exemplos:
Entrada: Saída:
3.0 4.0 5.2 TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000

Entrada: Saída:
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
		
		System.out.println("Digite três números: ");
		a=sc.nextDouble();
		b=sc.nextDouble();
		c=sc.nextDouble();
		
		tri = a * c / 2;
		cir = pi * (Math.pow(c,2));
		trap = (a + b) * c / 2;
		quad = b * b;
		retan = a * b;
		
		System.out.printf("TRIÂNGULO: %.3f\n", tri);
		System.out.printf("CÍRCULO: %.3f\n", cir);
		System.out.printf("TRAPÉZIO: %.3f\n", trap);
		System.out.printf("QUADRADO: %.3f\n", quad);
		System.out.printf("RETÂNGULO: %.3f\n", retan);
		
		
		sc.close();

	}

}
