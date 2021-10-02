/*
Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro uma string, conte quantos caracteres desta são iguais ao caractere 'a' e substitua-os por 'b'. Esta função deverá retornar quantos caracteres foram modificados.
Escreva uma função principal (main) que leia do teclado uma string, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido (string e retorno).
*/
#include <stdio.h>
#define TAM 500

int trocaCaracter(char str[]){
  int i, len=0;
 //loop que passe pela string todinha
  for(i=0;str[i]!='\0';i++){
    if(str[i]=='a'){
      str[i]= 'b';
      len++;
    }
  }

 return len;
}

int main() {
  char str[TAM];
  int len;
  //scanea a string
  scanf("%[^\n]s", str);
  len= trocaCaracter(str);
  printf("%s\n",str); 
  printf("Caracteres Modificados: %d",len);
 
  return 0;
}
