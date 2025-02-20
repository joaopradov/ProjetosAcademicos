/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX03: Faça um programa em Linguagem C que peça uma temperatura em graus célsius e apresente seu respectivo valor em fahrenheit. O cálculo de conversão é: F = (9 * C / 5) + 32. Casos de teste:
    - a) Para a temperatura de 50º Celsius, a temperatura em Fahrenheit é 122;
    - b) Para a temperatura de 18º Celsius, a temperatura em Fahrenheit é 64,4.
*/

#include <stdio.h>

int main()
{
    //Declaração de variáveis
    double grau_c = 0;
    double grau_f = 0;

    //Entrada de dados
    printf("Informe o grau em ºC: ");
    scanf("%lf", &grau_c);

    //Cálculo de conversão
    grau_f = ((9 * grau_c / 5) + 32 );

    //Saída de dados
    printf("A temperatura de %.2lf ºC, se torna %.2lf ºF", grau_c,grau_f);

    return 0;
}