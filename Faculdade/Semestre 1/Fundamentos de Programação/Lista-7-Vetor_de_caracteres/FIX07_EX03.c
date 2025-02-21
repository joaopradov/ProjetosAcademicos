/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX03: Faça um programa em Linguagem C que receba uma frase do usuário e apresente-a de trás para frente.

Exemplo:
Entrada: Testando uma frase
Saída: esarf amu odnatseT
*/

#include <stdio.h>
#include <string.h>
int main(){
    char frase[100];
    int ind = 0;

    fgets(frase, 100, stdin);

    int tam_frase = strlen(frase);
    if (frase[tam_frase - 1] == '\n')
    {
        frase[tam_frase - 1] = '\0';
        tam_frase--;
    }

    for (ind = tam_frase - 1; ind >=0; ind-- )
    {
        printf("%c", frase[ind]);
    }
    

    return 0;
}