/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 03/02/2025

FIX08_EX01: Faça um programa em Linguagem C que escreva uma função para receber um número e retornar o valor absoluto deste número (a função sempre retorna um valor positivo).
*/

#include <stdio.h>

int valorAbs(int num){
    if (num < 0)
    {
        return -num;
    }
    return num;
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    valorAbs(num);

    printf("O valor Absoluto do numero %d e %d", num, valorAbs(num));
    return 0;
}