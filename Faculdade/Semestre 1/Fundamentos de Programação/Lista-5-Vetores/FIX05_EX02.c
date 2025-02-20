/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX02: Faça um programa em Linguagem C que peça 5 números inteiros e, no final, troque a ordem do primeiro número com a do último número digitado. Apresente os dados originais e os dados alterados na tela.
Casos de teste (ignore os _ ):
a) Para a entrada: 10 _ 50 _ 20 _ 40 _ 30, apresentar como saída:
original...: 10 _ 50 _ 20 _ 40 _ 30
alterado.: 30 _ 50 _ 20 _ 40 _ 10
b) Para a entrada: 8 _ 15 _ 9 _ 16 _ 5, apresentar como saída:
original...: 8 _ 15 _ 9 _ 16 _ 5
alterado.: 5 _ 15 _ 9 _ 16 _ 8

*/

#include <stdio.h>
#define tam 5

int main() {

    int num[tam], ind = 0, aux = 0;

    for(ind = 0; ind < tam; ind++){
        scanf("%d", &num[ind]);
    }

    printf("\nOriginal: ");
    for ( ind = 0; ind < tam; ind++)
    {
        printf("%d - ", num[ind]);
    }

    printf("\nAlterado: ");
    aux = num[0];
    num[0] = num[tam - 1];
    num[tam - 1] = aux;
    for (ind = 0; ind < tam; ind++)
    {
        printf("%d - ", num[ind]);
    }
    

    return 0;
}