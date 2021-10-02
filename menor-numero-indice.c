/*
Faça um programa que leia do teclado vinte valores inteiros, guarde-os em um vetor e determine qual o menor dos valores lidos. O programa deve imprimir na tela o valor e o índice do menor elemento encontrado.
*/
#include <stdio.h>

int main(){
    int vet[20],i=1, menor, posmenor=0;
    scanf("%d", &vet[0]);
    menor = vet[0];
    while(i<20){
        scanf("%d",&vet[i]);
        if(vet[i]<menor){
            menor = vet[i];
            posmenor= i;
        }
        i++;
    }
    printf("Menor: %d\nÍndice: %d",menor, posmenor);
    return 0;
}
