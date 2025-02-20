/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 09/12/2024

FIX06_EX07: Escreva um programa em Linguagem C que simule a venda de ingressos para uma sessão de cinema, sabe-se que o cinema possui 150 poltronas, dispostas em 15 filas de 10 poltronas cada. Representado da seguinte maneira:
0 - poltrona vazia
1 - pagante inteira
2 - pagante meia

O preenchimento é aleatório (pode usar a função rand() ). Apresente 

a) Ocupação das poltronas; 
b) Quantidade de cada tipo; 
c) Valor apurado na sessão, sabendo que o ingresso custa R$ 18,00 (inteira).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 15
#define COLUNAS 10
#define INTEIRA 18.00
#define MEIA 9.00

int main() {
    int cinema[FILAS][COLUNAS];
    int i, j;
    int pagantesInteira = 0, pagantesMeia = 0;
    float total = 0.0;

    srand(time(NULL));

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            cinema[i][j] = rand() % 3;
        }
    }

    printf("Ocupação das poltronas:\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", cinema[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (cinema[i][j] == 1) {
                pagantesInteira++;
            } else if (cinema[i][j] == 2) {
                pagantesMeia++;
            }
        }
    }

    total = (pagantesInteira * INTEIRA) + (pagantesMeia * MEIA);

    printf("\nQuantidade de ingressos:\n");
    printf("Pagantes Inteira: %d\n", pagantesInteira);
    printf("Pagantes Meia: %d\n", pagantesMeia);
    printf("Valor apurado: R$ %.2f\n", total);

    return 0;
}