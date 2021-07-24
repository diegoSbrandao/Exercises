#include <stdio.h>
#include <locale.h>

#define ex01

/*

Programa criado para inversão de String e SubString

*/

#ifdef ex01

void InverteSubString(char str[], int i, int j);
void InvertePalavras(char str[]);
int TamanhoString(char str[]);
void InverteString(char str[]);



main(){

  setlocale(LC_ALL, "Portuguese");

  char str1[] = "Professora Nadia";
  char str2[] = "Fatec Rubens Lara";

  InverteString(str1);      //Inverter String
  printf("%s.\n", str1);

  InvertePalavras(str2);    //Inverter Palavras
  printf("%s.\n", str2);


}



int TamanhoString(char str[]){
  int i = 0;
  while(str[i] != '\0'){
    i++;
  }
  return i;
}

void InverteString(char str[]) {
  int i,j;
  char tmp;

  j = TamanhoString(str) - 1;
  i = 0;

  while (i < j) {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    i++;
    j--;
  }
}

void InverteSubString(char str[], int i, int j){
  char tmp;

  while (i < j) {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    i++;
    j--;
  }
}

void InvertePalavras(char str[]){
  int i, j;
  i = 0;
  do {
    while(str[i] == ' ') i++;
    j = i;

    while(str[j] != '\0' && str[j] != ' ') j++;

    j = j - 1;
    if(i < j) InverteSubString(str, i, j);

    i = j + 1;
  } while (str[i] != '\0');
}

#endif