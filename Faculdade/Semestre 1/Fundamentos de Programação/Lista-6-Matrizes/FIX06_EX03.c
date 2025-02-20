/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 09/12/2024

FIX06_EX03: (tem resolução na videoaula de algoritmos prof. Paulo Nardi) Faça um programa em Linguagem C que crie três matrizes de 3 x 3 de inteiros: mat1, mat2 e mult. Em seguida, peça para o usuário digitar os valores para mat1 e mat2. Ao final, o algoritmo deverá preencher a matriz mult com a multiplicação das respectivas posições das matrizes anteriores.
*/

#include <stdio.h>
#define linha 3
#define coluna 3
int main(){

    int mat1 [linha][coluna], mat2 [linha][coluna], mult[linha][coluna];
    int l, c;

//matriz 1
    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            scanf("%d", &mat1[l][c]);
        }
    }
//matriz 2
    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            scanf("%d", &mat2[l][c]);
        }
    }
//mult
    for(l = 0; l< linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            mult[l][c] = mat1[l][c] * mat2[l][c];
        }
    }
//imprimindo a mult
    for (l = 0; l < linha;l++)
    {
        for (c = 0; c < coluna; c++)
        {
            printf("| %d | ", mult[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}