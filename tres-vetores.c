/*
  Crie uma função chamada PREENCHE que receba 3 parâmetros: um vetor de inteiros de 15 posições chamado ORIGEM, que já vem preenchido com valores inteiros; um vetor de inteiros de 15 posições chamado DESTINO e, uma variável inteira chamada VAL. Esta função deve preencher o vetor DESTINO da seguinte forma: a primeira posição do vetor DESTINO deve ser preenchida com o valor 500. Nas demais posições, para os índices ímpares, esta função deve preencher o vetor DESTINO com o valor do vetor ORIGEM dividido por VAL . Para os índices pares, o vetor DESTINO tem que receber o valor do vetor ORIGEM na posição anterior multiplicado por VAL, ou seja, DESTINO na posição i recebe valor de ORIGEM na posição i-1 multiplicado por VAL.

 

No programa principal (função main), crie os dois vetores de inteiros de 15 posições e uma variável inteira. Peça para o usuário preencher o vetor ORIGEM e depois peça para ele digitar um valor inteiro. Chame a função PREENCHE passando esses 3 parâmetros: os dois vetores criados e o valor digitado pelo usuário. Por fim, imprima o vetor DESTINO. 
*/

#include<stdio.h>

void PREENCHE(int *ORIGEM, int VAL,int *DESTINO){
  int c;
  DESTINO[0]=500;
  for(c=1; c<15; c++){
    if(c%2==0){
      DESTINO[c]=ORIGEM[c-1]*VAL; 
    }else{
      DESTINO[c]=ORIGEM[c]/VAL;
    }
  }
}

int main(){
  int ORIGEM[15], VAL,c=0;
  int DESTINO[15];
  while(c<15){
    scanf("%d",&ORIGEM[c]);
    c++;
  }
  scanf("%d",&VAL);
  PREENCHE(ORIGEM, VAL, DESTINO);
  for(c=0;c<15;c++){
    printf("%d ",DESTINO[c]);
  }
}
