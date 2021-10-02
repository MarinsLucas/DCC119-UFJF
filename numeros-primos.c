/*
Escreva uma função que recebe como parâmetro um número inteiro n. A função deve retornar 1 caso o número digitado seja primo e 0 caso contrário. Faça também um programa para ler o número e chamar essa função e imprimir “PRIMO” caso a função retorne 1 e "NAO PRIMO" caso contrario. Dica: Números primos são os números naturais que têm apenas dois divisores diferentes: o 1 e ele mesmo.
*/
#include<stdio.h>
int calc(int num){
    int primo=1;
    int contador =2;
    while(contador<num){
       
        if(num%contador==0){
            primo = 0;
            break;
        }
         contador++;
    }
    return primo;
}
int main(){
    int num,ximbalaue;
    scanf("%d", &num);
    ximbalaue = calc(num);
    if(ximbalaue==1){
        printf("PRIMO");
    }
    else{
        printf("NAO PRIMO");
    }
}
