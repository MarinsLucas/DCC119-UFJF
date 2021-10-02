/*De acordo com o regimento da UFJF, para que um aluno seja aprovado numa disciplina ele precisa ter nota final maior ou igual a 60 e ter frequência mínima de 75%, caso contrário o aluno será reprovado. Nas disciplinas de Algoritmo, caso o aluno tenha frequência suficiente mas não tenha atingido a nota final mínima, ele poderá fazer a prova substitutiva para tentar melhorar a sua nota final.

 a) Desenvolver uma função que receba três valores como parâmetros: nota final, número de faltas e número de tarefas realizadas. A função deverá imprimir, de acordo com os critérios descritos acima: “Aluno aprovado”, “Aluno reprovado” ou “O aluno tem direito de fazer a prova substitutiva”. Considere que foram dadas 60 aulas e que nestas aulas foram realizadas 45 atividades, o aluno precisa ter realizado no mínimo 30 tarefas. É obrigatório o uso do ELSE nesta questão.

b) Fazer um programa que leia a quantidade de alunos da turma, a nota final, número de faltas e o número de tarefas realizadas nas aulas de cada aluno e chame a função desenvolvida no item (a) para imprimir a situação de todos os alunos.
*/
#include<stdio.h>

void calc(float notaFinal, int numFaltas, int numAtividades){
    if(notaFinal>=60 && numAtividades>=30 && numFaltas<=15){
        printf("Aprovado\n");
    }
    else{
        if(numAtividades>=30 && numFaltas<=15){
            printf("O aluno tem direito de fazer a prova substitutiva\n");
        }else{
            printf("Reprovado\n");
        }
    }
}

int main(){
    int numAlunos, numFaltas, numAtividades,c=0;
    float notaFinal;
    scanf("%d", &numAlunos);
    while(c<numAlunos){
        scanf("%f%d%d",&notaFinal, &numFaltas, &numAtividades);
        calc(notaFinal, numFaltas,numAtividades);
        
    
        c++;
    }
}
