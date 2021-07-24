#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ex01

#ifdef ex01

/*

Permutações de Strings - HackerRank

Tarefa

As cordas são geralmente ordenadas em ordem lexicográfica. Isso significa que eles são ordenados comparando seus diferentes caracteres mais à esquerda. Por exemplo, abc < abd Porque c < d . Além disso z > yyy Porque z > y . Se uma string é um prefixo exato da outra, é lexicograficamente menor, por exemplo, gh < ghij.

Dada uma matriz de strings classificadas em ordem lexicográfica, imprima todas as suas permutações em ordem lexicográfica estrita. Se duas permutações parecerem iguais, imprima apenas uma delas. Veja a 'nota' abaixo para um exemplo.

Complete a função next_permutationque gera as permutações na ordem descrita.

Por exemplo, s = [ab,bc,cd]. As seis permutações na ordem correta são:

ab  bc  cd 
ab  cd  bc 
bc  ab  cd 
bc  cd  ab 
cd  ab  bc 
cd  bc  ab

Observação: pode haver duas ou mais strings iguais aos elementos de.
Por exemplo, s = [ab,bc,cd]. Apenas uma instância de uma permutação onde todos os elementos correspondem deve ser impressa. Em outras palavras, se, s[0] == s[1] em seguida, imprima s[0] s[1] ou s[1] s[0] mas não ambos.

Uma matriz de três elementos com três elementos distintos tem seis permutações, conforme mostrado acima. Neste caso, existem três pares correspondentes de permutações onde s[0] = ab e s[1] = ab, são trocados. Imprimimos apenas as três permutações visivelmente únicas:

ab  ab  bc 
ab  bc  ab 
bc  ab  ab
Formato de entrada

A primeira linha de cada arquivo de teste contém um único inteiro , o comprimento da cadeia de caracteres .

Cada um dos próximos n linhas contém uma string s[i].

Restrições

n >=2 e n <= 9

s[i] >=1 e s[i] <= 10

s[i] contém apenas letras minúsculas em inglês.
Formato de saída

Imprima cada permutação como uma lista de strings separadas por espaço em uma única linha.

Amostra de entrada 0

2 
ab 
cd

Saída de amostra 0

ab cd 
cd ab

Amostra de entrada 1

3 
a 
bc 
bc
Saída de amostra 1

a bc bc 
bc a bc 
bc bc a

Explicação 1

Isso é semelhante à nota acima. Apenas três das seis permutações são impressas para evitar redundância na saída.


*/

int next_permutation(int n, char **s){
    // Find non-increasing suffix
    int i = n-1;
    while(i>0 && strcmp(s[i-1],s[i])>=0) 
        i--;    // find key
    if (i<=0) return 0;
    
    // Swap key with its successor in suffix
    int j = n-1;
    while(strcmp(s[i-1],s[j])>=0) 
        j--;    // find rightmost successor to key
    char *tmp = s[i-1];
    s[i-1] = s[j];
    s[j] = tmp;
    
    // Reverse the suffix
    j = n-1;
    while(i<j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}

#endif

