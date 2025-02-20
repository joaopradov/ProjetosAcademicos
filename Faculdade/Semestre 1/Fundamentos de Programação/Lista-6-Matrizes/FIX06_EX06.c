/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 09/12/2024

FIX06_EX06: Faça um programa em Linguagem C que permita ao usuário entrar com um array MULTIdimensional (matriz) 3 x 3 de números inteiros. Crie também um array UNIdimensional (vetor) pela armazenar a soma dos números de cada coluna da matriz. Mostre na tela esse array resultante.
*/

#include <stdio.h>
#define linha 3
#define coluna 3


int main(){
    int matriz[linha][coluna];
    int l, c;
    int somaColuna = 0;

    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
        
    }

    for (l = 0; l < linha; l++)
    {
        somaColuna = 0;
        for (c = 0; c < coluna; c++)
        {
            printf("%d", matriz[l][c]);
            somaColuna += matriz[l][c];
        }
        printf("\n");
    }

    printf("Soma das colunas:\n");
    for (c = 0; c < coluna; c++) {
        somaColuna = 0;
        for (l = 0; l < linha; l++) {
            somaColuna += matriz[l][c];
        }
        printf("Coluna %d: %d\n", c + 1, somaColuna);
    }
    
    return 0;
}