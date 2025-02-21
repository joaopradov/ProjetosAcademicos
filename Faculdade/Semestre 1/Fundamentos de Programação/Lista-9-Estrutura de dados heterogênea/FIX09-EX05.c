/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/02/2025

FIX09_EX05: Construa uma função projetada para receber datas do usuário. Esta função deve continuar solicitando uma data até que o usuário forneça uma data válida. Quando uma data válida for fornecida, a função deve retornar essa data.
*/

#include <stdio.h>
#include <stdbool.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

typedef struct Data Data;

int validacao (Data Data){
    if (Data.dia < 1 || Data.dia > 30)
    {
        return 0;
    }
    if (Data.mes < 1 || Data.mes > 12)
    {
        return 0;
    }
    if (Data.ano < 1900 || Data.ano > 2024)
    {
        return 0;
    }
    return 1;
}

int main(){
    Data Data;
    do{
        printf("Digite o dia: ");
    scanf("%d", &Data.dia);
    printf("Digite o mes: ");
    scanf("%d", &Data.mes);
    printf("Digite o ano: ");
    scanf("%d", &Data.ano);
    }while (validacao(Data) == 0);

    printf("Data: %.2d/%.2d/%.4d", Data.dia, Data.mes, Data.ano);
    
    return 0;
}