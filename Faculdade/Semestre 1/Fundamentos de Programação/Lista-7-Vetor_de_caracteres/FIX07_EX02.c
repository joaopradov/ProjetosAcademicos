/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX02: Faça um programa em Linguagem C que receba uma palavra do usuário e apresente cada caractere em uma linha.

Exemplo:
Entrada:Maria
Saída:
M
a
r
i
a
*/

#include <stdio.h>
int main() {
    char nome[50];
    int ind;
    scanf("%s", nome);
    for (ind = 0; nome[ind] != '\0'; ind++)
    {
        printf("%c\n", nome[ind]);
    }
    
    return 0;
}