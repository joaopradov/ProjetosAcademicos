/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX10: Faça um programa em Linguagem C que receba 3 nomes completos (até 30 caracteres) e imprima-os em ordem alfabética.
*/

#include <stdio.h>
#include <string.h>
int main() {
    char nome1[31], nome2[31], nome3[31];

    printf("Digite o primeiro nome completo: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("Digite o segundo nome completo: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    printf("Digite o terceiro nome completo: ");
    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = 0;

    if (strcmp(nome1, nome2) > 0) {
        char temp[31];
        strcpy(temp, nome1);
        strcpy(nome1, nome2);
        strcpy(nome2, temp);
    }
    if (strcmp(nome2, nome3) > 0) {
        char temp[31];
        strcpy(temp, nome2);
        strcpy(nome2, nome3);
        strcpy(nome3, temp);
    }
    if (strcmp(nome1, nome2) > 0) {
        char temp[31];
        strcpy(temp, nome1);
        strcpy(nome1, nome2);
        strcpy(nome2, temp);
    }

    printf("Nomes em ordem alfabética:\n");
    printf("%s\n", nome1);
    printf("%s\n", nome2);
    printf("%s\n", nome3);

    return 0;
}