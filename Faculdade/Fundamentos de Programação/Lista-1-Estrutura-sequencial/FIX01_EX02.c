/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX02: Faça um programa em Linguagem C que peça o ano de nascimento do usuário e apresente sua provável idade. Casos de teste:
    - a) Para o ano 2000, a provável idade é 22;
    - b) Para o ano 1976, a provável idade é 46.
*/

#include <stdio.h>

int main()
{
    //Declaração de variáveis
    int ano_atual = 2024;
    int ano_nasc = 0;
    int idade = 0;

    //Entrada de dados
    printf("Qual ano de nascimento? ");
    scanf("%d", &ano_nasc);
    idade = ano_atual - ano_nasc;

    //Saída de dados
    printf("Sua idade e de %d anos",idade);
    return 0;
}