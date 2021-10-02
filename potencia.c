/*
Faça um programa que leia um inteiro positivo x e imprima na tela todas as potências de 2 no intervalo entre 0 e x. A leitura de x deve ser repetida enquanto o valor digitado for inválido.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int x=-1,c=0, d=1;
  while(x<=0){
      scanf("%d",&x);
  }
  printf("Potências de 2 entre '0' e '%d':\n", x);
  while(d<=x){
      printf("-> 2^%d = %d\n",c, d);
      c++;
      d=pow(2,c);
      if(d>x){
         break;
      }
  }
  return 0;
}
