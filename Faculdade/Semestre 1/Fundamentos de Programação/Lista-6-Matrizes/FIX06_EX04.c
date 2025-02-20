/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 09/12/2024

FIX06_EX04: Faça um programa em Linguagem C que crie uma matriz 6 x 6 de valores digitados pelo usuário. Calcule e apresente a soma dos valores da diagonal principal da matriz.
*/

#include <stdio.h>
#define linha 6
#define coluna 6
int main(){
    int matriz[linha][coluna];
    int l, c;
    int somaDiagonal = 0;

    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            scanf("%d", &matriz[l][c]);
            if (l == c)
            {
                somaDiagonal += matriz[l][c];
            }
            
        }
        
    }
    
    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("Soma da diagonal principal: %d", somaDiagonal);

    return 0;
}