/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX07: Faça um programa em Linguagem C que receba (ou gere aleatoriamente) 25 valores. Após digitados, o programa deve ordenar os valores no vetor e apresentá-los na tela em ordem decrescente.

*/

#include <stdio.h>
int main() {
    int vetorValores[25];
    int temp, ind, indComp;

    printf("Digite 25 valores inteiros:\n");
    for (ind = 0; ind < 25; ind++) {
        scanf("%d", &vetorValores[ind]);
    }

    for (ind = 0; ind < 24; ind++) {
        for (indComp = 0; indComp < 24 - ind; indComp++) {
            if (vetorValores[indComp] < vetorValores[indComp + 1]) {
                temp = vetorValores[indComp];
                vetorValores[indComp] = vetorValores[indComp + 1];
                vetorValores[indComp + 1] = temp;
            }
        }
    }

    printf("\nValores em ordem decrescente:\n");
    for (ind = 0; ind < 25; ind++) {
        printf("%d ", vetorValores[ind]);
    }
    printf("\n");

    return 0;
}