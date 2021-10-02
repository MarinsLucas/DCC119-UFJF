/*
Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro um número inteiro e imprima na tela sua tabuada.
Escreva uma função principal (main) que chame a função desenvolvida no item anterior para imprimir a tabuada de todo valor inteiro que o usuário digitar. O programa deverá ser encerrado quando o usuário digitar o valor zero.
*/

#include <stdio.h>

void calcTabuada(int a){
    printf("Tabuada do %d:\n", a);
    printf("%d x 0 = %d\n",a, a*0);
    printf("%d x 1 = %d\n",a,a*1);
    printf("%d x 2 = %d\n",a,a*2);
    printf("%d x 3 = %d\n",a,a*3);
    printf("%d x 4 = %d\n",a,a*4);
    printf("%d x 5 = %d\n",a,a*5);
    printf("%d x 6 = %d\n",a,a*6);
    printf("%d x 7 = %d\n",a,a*7);
    printf("%d x 8 = %d\n",a,a*8);
    printf("%d x 9 = %d\n",a,a*9);
    printf("%d x 10 = %d\n",a,a*10);
    printf("\n");
}

int main()
{
    int a=1;
    while(a!=0){
        scanf("%d",&a);
        if(a!=0){
        calcTabuada(a);
        }
    }

    return 0;
}
