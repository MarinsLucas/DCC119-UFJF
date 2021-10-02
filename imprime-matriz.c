/*
Faça um programa que crie uma matriz de números reais com quatro linhas e duas colunas e preencha-a com valores digitados pelo usuário. O programa deve imprimir na tela o estado final da matriz, organizando os elementos em linhas e colunas. As impressões devem ser feitas utilizando 1 casa decimal.
*/
#include <stdio.h>
#define LIN 4
#define COL 2

int main() {
  float m[LIN][COL];
  int i, j;
  for(i=0; i<LIN; i++)
    for(j=0; j<COL; j++)
        scanf("%f",&m[i][j]);
        
        
   for(i=0; i<LIN; i++){
     for(j=0; j<COL; j++){   
        printf("%.1f ", m[i][j]);    
     }
     printf("\n");
   }
        
  return 0;
}
