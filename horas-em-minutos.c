/*
Faça uma função que receba como parâmetro um número representando uma quantidade de horas e retorne essa quantidade convertida em minutos.

Na função principal, faça a leitura da quantidade de horas e a imprima convertida em minutos - como nos exemplos - utilizando a função criada anteriormente.

Dica: Trabalhe com inteiros.
*/
#include <stdio.h>
#include <stdlib.h>

int conv(int hr){
    return hr*60;
}
int main() {
  int hr;
  scanf("%d",&hr);
  printf("%d horas = %d minutos",hr, conv(hr));
  return 0;
}
