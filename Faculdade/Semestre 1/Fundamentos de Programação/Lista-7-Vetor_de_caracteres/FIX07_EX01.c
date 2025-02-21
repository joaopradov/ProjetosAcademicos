/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX01: Faça um programa em Linguagem C que receba o nome completo do usuário e apresente-o com uma mensagem de boas vindas.
Exemplo:
Entrada: João Manoel da Silva
Saída: BOM DIA, João Manoel da Silva.
*/

#include <stdio.h>
int main(){
    char nome[100];
    printf("Nome: ");
    gets(nome);
    printf("Boa noite, %s.", nome);

    return 0;
}