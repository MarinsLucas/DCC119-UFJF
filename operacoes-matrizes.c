/*
Crie um novo tipo de dado (struct)  chamado Matriz definido pelos seguintes campos:
 
float dados[100][100];
int lin;//define quantas linhas da matriz dados foram usadas
int col;//define quantas colunas da matriz dados foram usadas

 
Crie funções para executar as seguintes operações matriciais:
 
Leitura matricial: Uma função que não receba parâmetros, mas que retorne uma estrutura Matriz preenchida adequadamente. Leia primeiro o número de linhas e colunas e então faça a leitura da matriz conforme previamente estipulado.
Impressão matricial: Receba uma variável do tipo Matriz e a imprima na tela no formato de matriz usual. Utilize 2 casas decimais na impressão dos números reais.
Soma matricial: Receba 2 variáveis do tipo Matriz e retorne uma variável do tipo Matriz com a soma destas matrizes. Considere que a dimensão das matrizes é compatíveis com a operação, ou seja não é necessário verificar.
Subtração matricial: Receba 2 variáveis do tipo Matriz e retorne uma variável do tipo Matriz com a subtração destas matrizes. Considere que a dimensão das matrizes é compatíveis com a operação, ou seja não é necessário verificar.
Produto matricial: Receba 2 variáveis do tipo Matriz e retorne uma variável do tipo Matriz com a multiplicação destas matrizes. Considere que a dimensão das matrizes é compatíveis com a operação, ou seja não é necessário verificar.
Faça um programa para ler 2 variáveis Matriz e imprimir o resultado das operação de soma; ler outras 2 variáveis Matriz e imprimir o resultado da subtração; ler outras 2 variáveis Matriz e imprimir o resultado da multiplicação.
*/

#include <stdio.h>

typedef struct 
{
    float dados[100][100];
    int lin; 
    int col;
}Matriz;

Matriz leituraMatricial(Matriz matriz1)
{
    scanf("%d",&matriz1.lin);
    scanf("%d",&matriz1.col);
    for(int i=0;i<matriz1.lin;i++){
        for(int j=0;j<matriz1.col;j++)
        scanf("%f", &matriz1.dados[i][j]);
    }
    return matriz1;
}

void imprimeMatriz(Matriz mama){
    for(int i=0;i<mama.lin;i++){
        for(int j=0; j<mama.col;j++)
        {
            printf("%.2f ", mama.dados[i][j]);
        }
        printf("\n");
    }
}

void somaMatricial(Matriz matriz1, Matriz matriz2)
{
    Matriz soma; 
    soma.col = matriz1.col;
    soma.lin = matriz1.lin;
    for(int i=0; i<matriz1.lin; i++){
        for(int j=0;j<matriz1.col;j++)
        {
           soma.dados[i][j] = matriz1.dados[i][j] + matriz2.dados[i][j];
        }
    }
    soma.col = matriz1.col;
    soma.lin = matriz1.lin;
    imprimeMatriz(soma);
}

void subtraMatricial(Matriz matriz1, Matriz matriz2)
{
    Matriz soma; 
    soma.col = matriz1.col;
    soma.lin = matriz1.lin;
    for(int i=0; i<matriz1.lin; i++){
        for(int j=0;j<matriz1.col;j++)
        {
           soma.dados[i][j] = matriz1.dados[i][j] - matriz2.dados[i][j];
        }
    }
    soma.col = matriz1.col;
    soma.lin = matriz1.lin;
    imprimeMatriz(soma);
}

void produtoMatricial(Matriz matriz1,Matriz matriz2){
    Matriz soma; 
    float aux; 
    soma.col = matriz2.col;
    soma.lin = matriz1.lin; 

   for(int i = 0; i < matriz1.lin; i++) {
		for(int j = 0; j < matriz2.lin; j++) {
			
			soma.dados[i][j] = 0;
			for(int x = 0; x < matriz2.lin; x++) {
				aux +=  matriz1.dados[i][x] * matriz2.dados[x][j];
			}

			soma.dados[i][j] = aux;
			aux = 0;
		}
	}
    imprimeMatriz(soma);
}

int main()
{
    Matriz matriz1,matriz2; 
    
    matriz1 = leituraMatricial(matriz1);
    matriz2 = leituraMatricial(matriz2);
    printf("Soma:\n");
    somaMatricial(matriz1, matriz2);

    matriz1 = leituraMatricial(matriz1);
    matriz2 = leituraMatricial(matriz2);
    printf("Subtracao:\n");
    subtraMatricial(matriz1,matriz2);

    matriz1 = leituraMatricial(matriz1);
    matriz2 = leituraMatricial(matriz2);
    printf("Multiplicacao:\n");
    produtoMatricial(matriz1,matriz2);


}
