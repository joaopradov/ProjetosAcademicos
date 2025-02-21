/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX08: Faça um programa em Linguagem C que receba o nome completo do usuário e troque o último sobrenome por “XPTO”. Não é apenas para imprimir, precisa substituir o último sobrenome.

Exemplo:
Entrada: Joaquim Pereira da Silva
Saída: Joaquim Pereira da XPTO
*/

#include <stdio.h>
#include <string.h>
int main() {
    char nome[100];
    char *ultimo_sobrenome;

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = 0;

    ultimo_sobrenome = strrchr(nome, ' ');

    if (ultimo_sobrenome != NULL) {
        strcpy(ultimo_sobrenome + 1, "XPTO");
    }

    printf("Saída: %s\n", nome);

    return 0;
}