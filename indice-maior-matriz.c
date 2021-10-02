/*
Faça uma função que receba a matriz, o vetor e dois parâmetros inteiros (número de linhas e número de colunas). Essa função deve preencher cada posição do vetor com o índice do elemento que contem o maior valor de cada linha da matriz.

 

Faça um programa (função main) para declarar uma matriz de números reais de tamanho NxM (no máximo 100x100), um vetor de números inteiros de tamanho N e chamar a função descrita a seguir. Este programa deve ler o número de linhas e colunas, ler o conteúdo da matriz, chamar a função e imprimir os elementos do vetor após seu preenchimento.
*/
#include <stdio.h>

void func(int N,int M,int m[N][M]){
    int maior;
    int indice;
    for(int i=0; i<N;i++){
        maior = m[i][0];
        indice = 0;
        for(int j=0;j<M;j++){
            if(m[i][j]>maior){
                maior = m[i][j];
                indice = j;
            }
        }
        printf("%d ", indice);
        
        
    }
        
}

int main()
{
    int M, N;
    scanf("%d%d", &N, &M);
    int m[N][M];
    for(int i = 0; i<N; i++)
        for(int j=0; j<M;j++)
            scanf("%d", &m[i][j]);
    
    func(N,M,m);

    return 0;
}
