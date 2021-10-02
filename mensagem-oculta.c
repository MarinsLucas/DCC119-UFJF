/*
Textos podem conter mensagens ocultas. Neste problema a mensagem oculta em um texto é composto pelas primeiras letras de cada palavra do texto, na ordem em que aparecem.

É dado um texto composto apenas por letras minúsculas ou espaços. Pode haver mais de um espaço entre as palavras. O texto pode iniciar ou terminar em espaços, ou mesmo conter somente espaços.

Entrada
A entrada contém vários casos de testes. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de uma única linha contendo de um a 100 caracteres, formado por letras minúsculas (‘a’-‘z’) ou espaços (‘ ’). Atenção para possíveis espaços no início ou no final do texto!

Nota: No exemplo de entrada os espaços foram substituídos por pequenos pontos (‘·’) para facilitar o entendimento dos exemplos.

Saída
Para cada caso de teste imprima a mensagem oculta no texto de entrada.
*/
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[100];
    scanf("%d ", &n);
    
    for (int i=0; i<n; i++){
        scanf ("%[^\n]s", str);
        scanf("%*c");
        if (str[0] != ' '){
            printf("%c", str[0]);
        }
        
        for(int j=1; str[j] != '\0'; j++){
            if (str[j-1]== ' ' && str[j]>='a' && str[j]<='z'){
                printf("%c", str[j]);
            }
        }
        
        printf("\n");
    }
    return 0;
}
