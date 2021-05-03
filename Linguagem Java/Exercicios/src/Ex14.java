import java.util.Locale;
import java.util.Scanner;

/*
Exercício 14
 Problema "soma_vetor"
 * 
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor

Exemplo:
Quantos numeros voce vai digitar? 4
Digite um numero: 8.0
Digite um numero: 4.0
Digite um numero: 10.0
Digite um numero: 14.0
VALORES = 8.0 4.0 10.0 14.0
SOMA = 36.00
MEDIA = 9.00

*/

public class Ex14 {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
	    double soma, media;

	    System.out.print("Quantos numeros voce vai digitar? ");
	    n = sc.nextInt();

	    double[] vetor = new double[n];

	    for (int i=0; i<n; i++) {
	    	System.out.print("Digite um numero: ");
	        vetor[i] = sc.nextDouble();
	    }

		soma = 0;
	    for (int i=0; i<n; i++) {
	        soma = soma + vetor[i];
	    }

	    media = soma / n;

		System.out.print("VALORES = ");

	    for (int i=0; i<n; i++) {
	    	System.out.printf("%.1f  ", vetor[i]);
	    }

	    System.out.printf("\nSOMA = %.2f\n", soma);
	    System.out.printf("MEDIA = %.2f\n", media);

		sc.close();
	}
}
