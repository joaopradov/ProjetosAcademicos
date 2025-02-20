/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 09/12/2024

FIX06_EX01: (tem resolução na videoaula de algoritmos prof. Paulo Nardi) Faça um programa em Linguagem C que crie uma matriz de 2x2, de números inteiros. Populacione-a usando laço PARA (FOR) e, por fim, apresente todos os valores na tela (com aparencia de matriz).
*/

#include <stdio.h>
#define linha 2
#define coluna 2
int main () {
    int matriz[linha][coluna];
    int l, c;
//recebendo dados
    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }
    
//imprimindo dados
    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            printf(" %d |", matriz[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}