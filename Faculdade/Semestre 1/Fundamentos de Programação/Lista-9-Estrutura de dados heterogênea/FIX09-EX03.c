/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/02/2025

FIX09_EX03: Complementando o EX02, cria uma nova função que deve apresentar a data recebida por parâmetro, por extenso.
Exemplo de saída: 26 de Agosto de 2024
*/

#include <stdio.h>

struct Data
{
    int dia;
    char mes[15];
    int ano;
};

typedef struct Data Data;

int main(){
    Data Data;

    printf("Digite o dia: ");
    scanf("%d", &Data.dia);
    getchar();
    printf("Digite o mes: ");
    fgets(Data.mes, 15, stdin);
    for (int i = 0; Data.mes[i] != '\0'; i++)
    {
        if (Data.mes[i] == '\n'){
            Data.mes[i] = '\0';
            break;
        }
    }
    printf("Digite o ano: ");
    scanf("%d", &Data.ano);

    printf("Data digitada: %d de %s de %d", Data.dia, Data.mes, Data.ano);

    return 0;
}