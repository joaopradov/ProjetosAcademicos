/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 09/12/2024

FIX06_EX05: Faça um programa em Linguagem C que leia uma matriz 4 x 4, imprima a matriz e retorne a localização (a linha e a coluna) do maior valor da matriz.
*/

#include <stdio.h>
#define linha 4
#define coluna 4

int main(){
    int matriz[linha][coluna];
    int l, c;
    int maior = 0, lmaior = 0, cmaior = 0;

    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }
    
    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
        {
            if(matriz[l][c] == matriz[0][0]){
                maior = matriz[0][0];
                lmaior = 0;
                cmaior = 0;
            } else if (matriz[l][c] > maior)
            {
                maior = matriz[l][c];
                lmaior = l;
                cmaior = c;
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

    printf("Maior numero = %d\n", maior);
    printf("Linha = %d\n", lmaior+1);
    printf("Coluna = %d\n", cmaior+1);

    return 0;
}