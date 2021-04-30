import java.util.Locale;
import java.util.Scanner;

/* 
Exercício 11
Problema "menor_de_tres"
 * 
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.

Exemplo 1:
Primeiro valor: 7
Segundo valor: 3
Terceiro valor: 8
MENOR = 3

Exemplo 2:
Primeiro valor: 5
Segundo valor: 12
Terceiro valor: 5
MENOR = 5

Exemplo 3:
Primeiro valor: 9
Segundo valor: 9
Terceiro valor: 9
MENOR = 9

*/

public class ex11 {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int a, b, c, menor;

	    System.out.print("Primeiro valor: ");
	    a = sc.nextInt();
		
	    System.out.print("Segundo valor: ");
	    b = sc.nextInt();
		
	    System.out.print("Terceiro valor: ");
	    c = sc.nextInt();
		

	    if (a < b && a < c) {
	        menor = a;
	    }
	    else if (b < c) {
	        menor = b;
	    }
	    else {
	        menor = c;
	    }
		
	    System.out.printf("MENOR = %d\n", menor);

		sc.close();
	}
}