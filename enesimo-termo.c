/*
Faça um programa que leia um número inteiro x, calcule o resultado da expressão abaixo e imprima na tela o resultado obtido.
 
S = (x^1)/50 + (x^2)/48 + (x^3)/46 + ... + (x^25)/2
 
Dica: utilize a função pow da biblioteca <math.h> para fazer o cálculo das potências.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int x, e=50,c=1;
    double d=0;
    scanf("%d",&x);
    while(c<=25){
        d = d + pow(x,c)/e;
        c++;
        e=e-2;
    }
    printf("S = %.2lf",d);
  return 0;
}
