/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX07: Faça um programa em Linguagem C que receba uma palavra do usuário e retire o hífen se acaso existir. Não é apenas para imprimir, precisa retirar o hífen da palavra.

Exemplo1:
Entrada: segunda-feira
Saída: segunda feira

Exemplo2:
Usuário: Teste sem hifen
Saída: Teste sem hifen
*/

#include <stdio.h>
#include <string.h>
int main() {
    char palavra[100];
    int j = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    palavra[strcspn(palavra, "\n")] = 0;

    for (size_t i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == '-') {
            if (i > 0 && palavra[i-1] != ' ') {
                palavra[j] = ' ';
                j++;
            }
        } else {
            palavra[j] = palavra[i];
            j++;
        }
    }

    palavra[j] = '\0';

    printf("Saída: %s\n", palavra);

    return 0;
}