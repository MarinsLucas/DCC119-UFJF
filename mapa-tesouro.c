/*
Um pirata decidiu criar um mapa do tesouro codificado na forma de uma matriz de inteiros. Crie um programa que:

a) Crie uma função que receba duas matrizes quadradas, A e B (máximo 100x100) e um inteiro k (máximo 100), representando o número de linhas/colunas. Assuma que a matriz A possui um único elemento diferente de 0, representando o local do tesouro. Esta função deve escrever o valor 1 em cada célula de B se esta estiver na linha ou na coluna do tesouro. Caso contrário, deve escrever a soma dos índices da linha e da coluna. Ex. Se o tesouro estiver na posição A[2][3], a célula B[3][2] terá o valor 5, enquanto B[2][5] terá o valor 1.

b) Crie um programa principal que declare as variáveis necessárias, leia a dimensão das matrizes e a matriz A com valores do teclado. Além disso, imprima na tela a matriz B após a execução da função de (a).
*/
#include <stdio.h>
#include <stdlib.h>

void func(int TAM, int A[TAM][TAM],int B[TAM][TAM]){
    int posTesoX, posTesoY;
    for(int i=0; i<TAM;i++){
        for(int j = 0;j<TAM;j++){
            if(A[i][j]==1){
                posTesoX = i;
                posTesoY = j;
            }
        }
    }
    int i, j; 
    
    for(i=0; i<TAM;i++){
        for(j=0; j<TAM;j++){
            if(i==posTesoX||j==posTesoY){
                B[i][j] = 1;   
            }
            else
            {
                B[i][j] = i+j;
            }
            
        }
    }
     for(i=0; i<TAM;i++){
        for(j=0; j<TAM;j++)
            printf("%d ", B[i][j]);
        printf("\n");
     }
}

int main()
{
    int TAM;
    scanf("%d",&TAM);
    int A[TAM][TAM], B[TAM][TAM];
    for(int i=0; i<TAM;i++){
        for(int j =0 ; j<TAM; j++)
            scanf("%d", &A[i][j]);
    }
    func(TAM, A, B);
    return 0;
}
