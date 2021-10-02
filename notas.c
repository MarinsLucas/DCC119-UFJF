/*
Faça uma função que receba como parâmetro uma nota de uma aluno e, se o valor for maior ou igual a 60, imprimir na tela "APROVADO", se for menor, imprimir "REPROVADO". Testar ainda se o valor lido foi maior do que 100 ou menor do que zero. Neste caso, imprimir "NOTA INVÁLIDA".
*/
#include <stdio.h>
#include <stdlib.h>
 
void conferirNota(float nota){
    if(nota>100 || nota<0){
        printf("NOTA INVÁLIDA");
    }
    else{
        if(nota>=60){
            printf("APROVADO");
        }
        else{
            printf("REPROVADO");
        }
    }
} 

int main() {
  float nota;
  scanf("%f" ,&nota);
  conferirNota(nota);
  return 0;
}
