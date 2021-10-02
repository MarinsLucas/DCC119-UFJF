/*
Faça o que se pede:

a) Faça uma função que receba como parâmetro uma string e apague os dígitos (os caracteres que representam os números) da segunda frase do texto. Para isso, a função deverá substituir cada dígito encontrado por um underline ('_') em todo o trecho entre a primeira e a segunda ocorrências de  '.' (ponto final). A função deverá retornar o número de modificações realizadas ou o valor -1, caso nenhum ponto seja encontrado. Caso o texto tenha apenas um ponto final, as modificações deverão ser realizadas até o fim do texto.

b) Faça um programa que leia do teclado uma string e chame a função anterior. O programa deverá imprimir, dependendo do retorno da função, "Nao foi encontrado ponto final" ou "Foram realizadas X alteracoes", onde X deve ser o número de letras modificadas pela função, neste caso imprima, também, a string modificada.
*/
#include <stdio.h>

       int altera = 0;
       
int alteraString( int j, char frase[j]){
    int ponto = 0;
    for(int i=0; i<j;i++){
        if(frase[i]=='.'){
            ponto++;
        }
        if(ponto==2) break;
        if(frase[i]>='0' && frase[i]<='9'){
            frase[i] = '_';
            altera++;
        }
    }
    
    if(ponto == 0){
        return -1; 
    }
    else{
        return altera; 
    }
}

int main()
{
    int j, pindorama;
    char frase[100];
    scanf("%[^\n]s", frase);
    for(j=0;frase[j]!='\0';j++)
    pindorama = alteraString(j, frase);
    if(pindorama == -1){
        printf("Nao foi encontrado ponto final");
    }else{
        printf("Foram realizadas %d alteracoes\n", altera);
        printf("%s", frase);
    }
    return 0;
}
