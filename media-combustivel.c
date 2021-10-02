/*
Crie uma função que retorne a média de combustível gasto pelo usuário. Esta função receberá a quantidade de quilômetros rodados e a quantidade de combustível consumido em litros. Faça também um programa que leia os valores chame, a função e imprima na tela a resposta. A resposta deverá ser impressa no formato 9.999 km/l, ou seja com 3 casas decimais seguido pela unidade km/l
*/
#include<stdio.h>

float func1(float km,float l){
    return km/l;
}
int main(){
    float km, l;
    scanf("%f%f",&km,&l);
    printf("%.3f km/l",func1(km,l));
    return 0;
}
