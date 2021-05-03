import java.util.Locale;
import java.util.Scanner;
/* 
Exercício 12
Problema "retangulo"

Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.

Exemplo 1:
Base do retangulo: 4.0
Altura do retangulo: 5.0
AREA = 20.0000
PERIMETRO = 18.0000
DIAGONAL = 6.4031

Exemplo 2:
Base do retangulo: 10.3
Altura do retangulo: 13.1
AREA = 134.9300
PERIMETRO = 46.8000
DIAGONAL = 16.6643

*/

public class Ex12 {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double base, altura, area, perimetro, diagonal;

	    System.out.print("Base do retangulo: ");
	    base = sc.nextDouble();

	    System.out.print("Altura do retangulo: ");
	    altura = sc.nextDouble();

	    area = base * altura;

	    System.out.printf("AREA = %.4f\n", area);

	    perimetro = 2 * (base + altura);

	    System.out.printf("PERIMETRO = %.4f\n", perimetro);

	    diagonal = Math.sqrt(base * base + altura * altura);

	    System.out.printf("DIAGONAL = %.4f\n", diagonal);

		sc.close();
	}
}