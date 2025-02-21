/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/02/2025

FIX09_EX01: Faça um programa em Linguagem C que receba e apresente na tela uma data. Esta data é um registro (struct) com dia, mês e ano (ambos inteiros).
*/

#include <stdio.h>

// Definido a estrutura dos registros que serão fornecidos/ usado.
struct Data
{
    int dia;
    int mes;
    int ano;
};
// Aqui foi ajustado com o typedef para que pudessse apenas digitar 'Data' e não o 'struct Data'.
typedef struct Data Data;

int main(){
    // Deifinindo a variavel 'Data', para que não de erro no codigo
    Data Data;
    printf("Digite o dia: ");
    scanf("%d", &Data.dia);
    printf("Digite o mes: ");
    scanf("%d", &Data.mes);
    printf("Digite o ano: ");
    scanf("%d", &Data.ano);

    printf("A data digitada foi o dia %.2d do mes %.2d, e do ano %.4d",Data.dia, Data.mes, Data.ano);

    return 0;
}
