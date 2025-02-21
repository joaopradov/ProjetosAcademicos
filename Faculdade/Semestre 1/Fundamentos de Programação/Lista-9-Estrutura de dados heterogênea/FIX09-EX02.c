/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/02/2025

FIX09_EX02: Idem ao EX01, todavia, a data deve ser apresentada na tela por meio de uma função que receberá esta data por parâmetro.
Exemplo de saída: 26/08/2024
*/

#include <stdio.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

typedef struct Data Data;

int main(){
    
    Data Data;
    printf("Digite o dia: ");
    scanf("%d", &Data.dia);
    printf("Digite o mes: ");
    scanf("%d", &Data.mes);
    printf("Digite o ano: ");
    scanf("%d", &Data.ano);

    printf("A data digitada foi: %.2d/%.2d/%.4d", Data.dia, Data.mes, Data.ano);

    return 0;
}