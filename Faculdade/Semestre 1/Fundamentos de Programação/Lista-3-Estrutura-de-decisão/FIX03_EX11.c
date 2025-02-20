/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 11/11/2024

FIX03_EX11: Faça um programa em Linguagem C que peça o mês do ano (um número de 1 a 12).
O algoritmo deve apresentar o nome do mês por extenso e quantos dias o mês tem, ou “mês inválido”,
caso digite um número fora do intervalo válido.
*/
#include <stdio.h>
int main(){
    int mes;
    printf("Digite o mes: [1 a 12] \n");
    scanf("%d",&mes);
    switch(mes){
        case 1:
            printf("\nJANEIRO");
            printf("\nTem 31 dias\n");
            break;
        case 2:
            printf("\nFEVEREIRO");
            printf("\nTem 29 dias\n");
            break;
        case 3:
            printf("\nMARCO");
            printf("\nTem 31 dias\n");
            break;
        case 4:
            printf("\nABRIL");
            printf("\nTem 30 dias\n");
            break;
        case 5:
            printf("\nMAIO");
            printf("\nTem 31 dias\n");
            break;
        case 6:
            printf("\nJUNHO");
            printf("\nTem 30 dias\n");
            break;
        case 7:
            printf("\nJULHO");
            printf("\nTem 31 dias\n");
            break;
        case 8:
            printf("\nAGOSTO");
            printf("\nTem 31 dias\n");
            break;
        case 9:
            printf("\nSETEMBRO");
            printf("\nTem 30 dias\n");
            break;
        case 10:
            printf("\nOUTUBRO");
            printf("\nTem 31 dias\n");
            break;
        case 11:
            printf("\nNOVEMBRO");
            printf("\nTem 30 dias\n");
            break;
        case 12:
            printf("\nDEZEMBRO");
            printf("\nTem 31 dias\n");
            break;
        default:
            printf("\nERRO! MES INVALIDO!\n");
    }
    return 0;
}