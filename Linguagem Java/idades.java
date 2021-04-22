import java.util.Locale;
import java.util.Scanner;
/* Problema "idades"
 * 
Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.

Exemplo:
Dados da primeira pessoa:
Nome: Maria Silva
Idade: 19
Dados da segunda pessoa:
Nome: Joao Melo
Idade 20
A idade média de Maria Silva e Joao Melo é de 19.5 anos

*/

public class idades {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		String nome1, nome2;
		int idade1, idade2;
		double media;

		System.out.println("Dados da primeira pessoa:");
		System.out.print("Nome: ");
		nome1 = sc.nextLine();
		System.out.print("Idade: ");
		idade1 = sc.nextInt();

		System.out.println("Dados da segunda pessoa:");
		System.out.print("Nome: ");
		sc.nextLine(); // --------------> limpeza de buffer
		nome2 = sc.nextLine();
		System.out.print("Idade: ");
		idade2 = sc.nextInt();

		media = (idade1 + idade2) / 2.0;

		System.out.printf("A idade media de %s e %s eh de %.1f anos", nome1, nome2, media);

		sc.close();
	}
}