/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/02/2025

FIX09_EX04: Construa uma função que receba uma data por parâmetro (struct), valide esta data e retorne um inteiro representando se está ou não correta. As regras de validação de uma data seguem o seguinte critério: 

Regra de validação: dias entre 1 e 30 (inclusive); mês entre 1 e 12 (inclusive); anos entre 1900 e 2024 (inclusive);
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

// Na função ele vai retornar 0 se estiver inválido e 1 caso esteja válida a data.
int validacao (Data Data)
{
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

int main() {
    Data Data;
    printf("Digite o dia: ");
    scanf("%d", &Data.dia);
    printf("Digite o mes: ");
    scanf("%d", &Data.mes);
    printf("Digite o ano: ");
    scanf("%d", &Data.ano);

    int resultado;
    resultado = validacao(Data);

    printf("%d", resultado);

    return 0;
}
