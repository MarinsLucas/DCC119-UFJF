/*
Uma empresa organizadora de eventos está oferecendo uma promoção na mensalidade para os fundos de formatura de acordo com a área do curso. O desconto segue a tabela abaixo:

Área	Desconto
Biológicas ('B')	5%
Humanas ('H')	10%
Sociais ('S')	20%
Exatas ('E')	30%
a) Faça uma função que receba por parâmetro o valor da mensalidade. Para cada aluno, a função deverá ler um caractere representando a área do curso (observe os caracteres entre parênteses na tabela acima), calcular e imprimir o valor do desconto obtido e o valor da mensalidade com desconto. A função deverá ser encerrada quando for digitado o caractere 'Q'.

b) Faça um programa (função main) que leia o valor da mensalidade e chame a função anterior.
*/
#include<stdio.h>

void calc_desconto(float men){
   char a= 'A';
   while(a!='Q'){
      scanf("%c", &a);
      if(a=='B'){
         printf("Desconto R$%.2f\n", men*0.05);
         printf("Nova Mensalidade R$%.2f\n\n", men*0.95);
      }
      if(a=='H'){
         printf("Desconto R$%.2f\n", men*0.10);
         printf("Nova Mensalidade R$%.2f\n\n", men*0.9);
      }
      if(a=='S'){
         printf("Desconto R$%.2f\n", men*0.20);
         printf("Nova Mensalidade R$%.2f\n\n", men*0.8);
      }
      if(a=='E'){
         printf("Desconto R$%.2f\n", men*0.30);
         printf("Nova Mensalidade R$%.2f\n\n", men*0.70);
      }
   }
}

int main(){
   float mensalidade;
   scanf("%f",&mensalidade);
   calc_desconto(mensalidade);
   return 0;
}