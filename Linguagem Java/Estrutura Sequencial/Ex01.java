

/*

 Exercício 01

Faça um programa para ler dois valores inteiros, e depois mostrar na tela a soma desses números com uma
mensagem explicativa, conforme exemplos.

Exemplos:
Entrada: Saída:
10
30
SOMA = 40

Entrada: Saída:
-30
10
SOMA = -20

Entrada: Saída:
0
0
SOMA = 0
 */
import java.util.Scanner;
public class Ex01 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x,y;
		
		System.out.println("Digite dois números: ");
		x=sc.nextInt();
		y=sc.nextInt();
		
		System.out.println("SOMA = " + (x+y));
		
		
		sc.close();

	}

}
