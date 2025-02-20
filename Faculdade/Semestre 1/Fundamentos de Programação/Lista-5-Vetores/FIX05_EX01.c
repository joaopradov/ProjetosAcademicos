/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX01: Faça um programa em Linguagem C que peça 6 números inteiros e, depois, apresente-os na tela na forma invertida ao que foi digitado.
Casos de teste (ignore os _ ):
a) Para a entrada: 1 _ 3 _ 2 _ 4 _ 5 _ 9, a saída será: 9 _ 5 _ 4 _ 2 _ 3 _ 1
b) Para a entrada: 70 _ 18 _ 7 _ 51 _ 12 _ 6, a saída será: 6 _ 12 _ 51 _ 7 _ 18 _ 70

*/

#include <stdio.h>
#define tam 6

int main(){

    int num[tam], ind = 0;

    for (ind = 0; ind < tam; ind++)
    {
        scanf("%d", &num[ind]);
    }
    
    printf("... mostrando na ordem inversa...\n");
    for (ind = tam - 1; ind >= 0 ; ind--)
    {
        printf("%d - ", num[ind]);
    }
    

    return 0;
}