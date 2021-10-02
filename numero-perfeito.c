/*
Para resolver este exercício, siga os passos abaixo:

Escreva uma função que receba um inteiro positivo n, gere e imprima o n-ésimo número natural perfeito. Um número perfeito é aquele que é igual à soma dos seus divisores exceto o próprio número. 
Por exemplo: Número 6 é o primeiro número perfeito, pois a soma de seus divisores, antecessores a ele, resulta em 6 -  1 + 2 + 3  . Logo, se n = 1, imprima- se 6.
Escreva uma função principal (main) que ​leia​ o valor inteiro n e chame​ a função desenvolvida no item anterior. 
*/
#include <stdio.h>

int nesimo_primo(int n){
int a, primo, div, nesimo;

primo = 1; 

a = 1;

if(n == 1)
    nesimo = 2;
else
{
    for(nesimo = 3; nesimo <= 1000; nesimo++)
    {
        for(div = 2; div <= nesimo/2; div++)
        {
            if(nesimo%div == 0)
            {
                primo = 0;
                break;
            }
        }

        if(primo == 1) 
            a++;
        else
            primo = 1;

        if(a == n) 
            break;
    }
}
return nesimo;
   
}

int pou(int a, int n) { 
    int r = 1; 
 
    while (n > 0) { 
        if (n & 1) 
            r *= a; 
        a *= a; 
        n >>= 1; 
    } 
    return r;
}

int main(){
    int n,num;
     scanf("%d", &n);
     n = nesimo_primo(n);
     num = pou(2,n-1)*(pou(2,n)-1);
     printf("%d", num);
     return 0;
}
