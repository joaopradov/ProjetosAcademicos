/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX05: Faça um programa em Linguagem C que receba o seu nome completo e apresente quantas LETRAS tem seu nome. Aqui, precisa descontar a quantidade de espaços.

Exemplo:
Entrada: Joaquim Pereira da Silva
Saída: Seu nome tem 21 letras.
*/

#include <stdio.h>
#include <string.h>
int main() {
    char nome[100];
    int contador = 0;

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    for (size_t i = 0; i < strlen(nome); i++) {
        if (nome[i] != ' ' && nome[i] != '\n') {
            contador++;
        }
    }

    printf("Seu nome tem %d letras.\n", contador);

    return 0;
}