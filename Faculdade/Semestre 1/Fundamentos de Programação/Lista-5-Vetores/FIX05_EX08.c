/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX08: Faça um programa em Linguagem C para obter dois conjuntos (vetores) A e B (ambos de tamanho 8). Criar um conjunto (vetor) C = A + B, sendo que cada elemento Ci = Ai + Bi, para i = 0, 1, ... , n. Apresentar no final os conjuntos A, B e C. 

*/

#include <stdio.h>
int main() {
    int vetorA[8];
    int vetorB[8];
    int vetorC[8];

    printf("Vetor A:\n");
    for (int ind = 0; ind < 8; ind++) {
        printf("A[%d]: ", ind);
        scanf("%d", &vetorA[ind]);
    }

    printf("\nVetor B:\n");
    for (int ind = 0; ind < 8; ind++) {
        printf("B[%d]: ", ind);
        scanf("%d", &vetorB[ind]);
    }

    for (int ind = 0; ind < 8; ind++) {
        vetorC[ind] = vetorA[ind] + vetorB[ind];
    }

    printf("\nVetor A: ");
    for (int ind = 0; ind < 8; ind++) {
        printf("%d ", vetorA[ind]);
    }

    printf("\nVetor B: ");
    for (int ind = 0; ind < 8; ind++) {
        printf("%d ", vetorB[ind]);
    }

    printf("\nVetor C (A + B): ");
    for (int ind = 0; ind < 8; ind++) {
        printf("%d ", vetorC[ind]);
    }

    return 0;
}