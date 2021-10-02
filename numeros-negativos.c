/*
Escreva uma função que receba um vetor de valores reais e seu tamanho e retorne quantos destes valores são negativos. Além disso, crie uma função principal (main) que leia um tamanho para o vetor, preencha o vetor e imprima utilizando a função.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int d, i=0,c=0;
    scanf("%d",&d);
    float vet[d];
    while(i<d){
        scanf("%f",&vet[i]);
        if(vet[i]<0) c++;
        i++;
    }
    printf("%d",c);
  return 0;
}
