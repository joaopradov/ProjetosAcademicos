/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX01: Faça um programa em Linguagem C que peça a idade do usuário e, em seguida, digite a mensagem: “Legal! Você tem *idade* anos!”. Casos de teste:
    - a) Para a idade 18, a mensagem seria: Legal! Você tem 18 anos!
    - b) Para a idade 43, a mensagem seria: Legal! Você tem 43 anos!
*/

#include <stdio.h>

int main()
{
    //DECLARAÇÃO DE VARIAVEIS
    int idade;

    //ENTRADA
    printf("Qual a sua idade? ");
    scanf("%d",&idade);

    //SAÍDA
    printf("Legal! Voce tem %d idade.", idade);

    return 0;
}