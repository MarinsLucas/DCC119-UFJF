/*
Faça uma função que receba um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor recebido e a relação de notas necessárias. Faça também um programa principal (main) que leia o valor e chame a função desenvolvida.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. 
*/
#include <stdio.h>

void func1(int entrada){
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    nota100 = (entrada/100);
    nota50 = ((entrada%100)/50);
    nota20 = (((entrada%100)%50)/20);
    nota10 = ((((entrada%100)%50)%20)/10);
    nota5 = (((((entrada%100)%50)%20)%10)/5);
    nota2 = ((((((entrada%100)%50)%20)%10)%5)/2);
    nota1 = (((((((entrada%100)%50)%20)%10)%5)%2));
    
    printf("%d nota(s) de R$ 100,00\n",nota100);
    printf("%d nota(s) de R$ 50,00\n",nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);
}

int main()
{
    int entrada;
    scanf("%d",&entrada);
    printf("%d\n",entrada);
    func1(entrada);
    return 0;
}
