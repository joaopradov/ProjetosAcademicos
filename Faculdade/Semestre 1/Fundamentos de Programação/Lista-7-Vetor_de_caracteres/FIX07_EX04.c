/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX04: Faça um programa em Linguagem C que receba uma string e depois um caractere, e retorne o número de vezes que esse caracter aparece na string.

Exemplo:
Entrada: Um sorriso e um bom dia ajuda a melhorar a vida de todo mundo         r
Saída: O caractere >> r << aparece 4 vezes na frase.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char caractere;
    int contador = 0;

    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite o caractere a ser contado: ");
    scanf("%c", &caractere);

    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] == caractere) {
            contador++;
        }
    }

    printf("O caractere >> %c << aparece %d vez(es) na frase.\n", caractere, contador);

    return 0;
}