/*
Utilizando a estrutura "Medidas" definida no exemplo, faça um programa que leia o peso e a altura de seis pessoas e imprima na tela a média das medidas do grupo.
*/
#include <stdio.h>
#define PESSOAS 6

typedef struct {
  float peso;
  float altura;
} Medidas;

int main() {
  Medidas x; 
  float somaPesos=0, somaAlturas=0; 
    for(int i=0; i<PESSOAS;i++)
    {
        scanf("%f", &x.peso);
        scanf("%f", &x.altura);
        somaPesos += x.peso;
        somaAlturas +=x.altura; 
    }
    printf("Média Pesos: %.2f kg\n", somaPesos/PESSOAS);
    printf("Média Alturas: %.2f m\n", somaAlturas/PESSOAS);  

  return 0;
}
