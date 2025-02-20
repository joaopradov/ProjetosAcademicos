/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 09/12/2024

FIX06_EX02: (tem resolução na videoaula de algoritmos prof. Paulo Nardi) Faça um programa em Linguagem C que crie uma matriz de 2x3, de números inteiros e a populacione usando laço PARA (FOR). Por fim, calcule e apresente a soma de cada linha.
*/

#include <stdio.h>
#define linha 2
#define coluna 3
int main(){
    int matriz[linha][coluna];
    int l, c, somaLinha = 0;

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
        somaLinha = 0;
        for (c = 0; c < coluna; c++)
        {
            somaLinha += matriz[l][c];
        }
        printf("Soma da linha %d = %d\n", l, somaLinha);
    }
    

    return 0;
}