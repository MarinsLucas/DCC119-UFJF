/*
A irrigação é de extrema importância para a agricultura, contribuindo para o aumento de produtividade na lavoura e para um bom desempenho em condições climáticas adversas. Aliado à sua importância estão seus custos, demandando um bom planejamento, visto que pode se tornar um processo tão oneroso que pode chegar a inviabilizar a sua utilização.  Diante deste cenário, é preciso utilizar racionalmente este recurso. Neste contexto surge o manejo inteligente da irrigação, onde o uso de sensores traz informações que auxiliam o produtor no uso mais racional da água. 

Considerando o que foi apresentado, para experimentar o manejo inteligente, um produtor inseriu um sensor em uma de suas lavouras. Este sensor é responsável por registrar a umidade do solo a cada hora do dia. Sempre que a umidade estiver abaixo de um valor limite a irrigação deve ser acionada automaticamente. 

a) Crie uma estrutura chamada Est_Lavoura capaz de armazenar o tipo da lavoura, o código da área e o valor registrado  pelo sensor de umidade a cada hora de um dado dia. Seguem os campos:   

      char tipo_lavoura[51]

      int codigo

      float dados_sensor[24]      

b) O produtor deseja verificar o número de vezes que a irrigação foi acionada durante um certo dia. Para isso, faça uma função que receba como parâmetros uma estrutura Est_Lavoura. Sabendo que o acionamento é feito sempre que a umidade apontada pelo sensor for inferior a 0,6; sua função deve retornar o número de vezes durante o dia em que a umidade registrada foi inferior a este valor. 

c) Faça um programa que leia os dados da lavoura  armazenando-os numa estrutura Est_Lavoura. Dado o custo de 1.300,00 reais para um único acionamento da irrigação inteligente, a partir de uma chamada da função do item anterior, imprima na tela uma mensagem indicando o gasto total com a irrigação no dia em questão.
*/
#include <stdio.h>


typedef struct{
    char tipo_lavoura[51];
    int codigo;
    float dados_sensor[24];
} Est_Lavoura;

float umidade(Est_Lavoura s){
  int acionamentos=0;
    for(int i=0;i<24; i++){
        if(s.dados_sensor[i]<0.6){
          acionamentos++;
        }
    }
    return acionamentos;
}

int main()
{
    Est_Lavoura s;
    float aux; 
    scanf("%s%d",s.tipo_lavoura, &s.codigo);
    for(int i=0;i<24;i++){
      scanf("%f",&s.dados_sensor[i]);
    }
    aux = umidade(s);
    printf("O gasto total com irrigacao foi de R$%.2f", aux*1300);
    return 0;
}
