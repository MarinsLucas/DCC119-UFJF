/*
1- Escreva um trecho de código em “C” para fazer a criação dos novos tipos de dados conforme solicitado abaixo:

Horário: composto de hora, minutos e segundos. 

Data: composto de dia, mês e ano. 

Compromisso: composto de uma data, horário e texto que descreve o compromisso.

Faça um programa que leia 3 compromissos e imprima no formato 

No dia dd/mm/aaaa as hh:mm:ss voce tem o compromisso: XXXXXXXXX
*/
#include<stdio.h>

typedef struct 
{
    int horario[3];
    int data[3];
    char compromisso[100];
} atv;

int main()
{
    atv agenda;
    for(int i=0; i<3;i++)
    {
        //scanea horário
        for(int j=0; j<3;j++)
        {
            scanf("%d", &agenda.data[j]);
        }
        for(int j=0;j<3;j++){
            scanf("%d", &agenda.horario[j]);
        }
        scanf("%*c");
        scanf("%[^\n]s", agenda.compromisso);
        printf("No dia %d/%d/%d as %d:%d:%d voce tem o compromisso: %s\n", agenda.data[0],agenda.data[1],agenda.data[2], agenda.horario[0],agenda.horario[1],agenda.horario[2],agenda.compromisso);
    }
}
