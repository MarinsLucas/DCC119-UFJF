/*
Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério:  o produto poderá ter seu preço aumentado ou diminuído. Para o preço ser alterado, o produto deve preencher pelo menos um dos requisitos a seguir:

VALOR MEDIA MENSAL 	PREÇO ATUAL	%DE AUMENTO	%DE DIMINUIÇÃO
< 500  	< R$ 30,00 	10	-
≥ 500 e <1.200  	≥ R$ 30,00 e <R$ 80,00	15	-
≥ 1200	≥ R$ 80,00	-	20

Faça uma função que recebe por parâmetro o preço atual e a venda média mensal. A função deve retornar o novo preço. Construa um programa que leia o preço atual e a venda média mensal e mostre o preço atual e o novo preço.
*/
#include<stdio.h>

float novo_preco(float media, float atual){
   float novo;
   if(media<500 || atual<30){
      novo = atual*1.1;
   }
   if((media>=500 && media<1200)||(atual>= 30 && atual<80)){
      novo = atual*1.15;
   }
   if(media>=1200||atual>=80){
      novo = atual*0.8;
   }
   return novo;
}

int main(){
   float media_de_compras,preco_atual;
   scanf("%f%f",&preco_atual, &media_de_compras);
   printf("R$ %.2f\n", preco_atual);
   printf("R$ %.2f\n", novo_preco(media_de_compras, preco_atual));
   return 0;
}
