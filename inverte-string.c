/*
Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro uma string e inverta a ordem de seus caracteres.
Escreva uma função principal (main) que leia do teclado uma string, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido.
*/
#include <stdio.h>
#include <string.h>
#define TAM 50

int main() {
  int i;
  char str[TAM], rts[TAM];

    //interação com o usuário
  //printf("Insira aqui sua string\n"); 

    //leitura da string
  fgets(str, TAM, stdin);


    //tirando a quebra de linha que o fgets deixa
  str[strlen(str)-1] = '\0';

    //invertendo a string para gnirts
  for(i=0; i<strlen(str) ;i++){
    rts[i] = str[strlen(str)-i-1];
  }
  rts[strlen(str)]='\0';
  
  //imprimindo a string
  printf("%s",rts);
  
  
  return 0;
}
