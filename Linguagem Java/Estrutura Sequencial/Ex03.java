

/*

Exercício 03

Fazer um programa para ler quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Exemplos:
Entrada: Saída:
5
6
7
8
DIFERENCA = -26

Entrada: Saída:
5
6
-7
8
DIFERENCA = 86

 */
import java.util.Scanner;
public class Ex03 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a,b,c,d,diferenca;
		
		
		System.out.println("Digite quatro números: ");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		d=sc.nextInt();
		
		diferenca = (a*b) - (c*d);
		
		
		System.out.println("DIFERENCA = " + diferenca);
		
		
		sc.close();

	}

}
