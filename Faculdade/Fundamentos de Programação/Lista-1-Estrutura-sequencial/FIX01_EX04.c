/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX04: Elabore um programa em Linguagem C que leia o raio de uma circunferência, calcule e apresente sua área. Casos de teste:
    - a) Para um raio de 5 cm, a área do círculo será 78,50;
    - b) Para um raio de 12 cm, a área do círculo será 452,16.
*/

#include <stdio.h>

int main()
{
    //Declaração de variáveis
    float pi = 3.14;
    float area = 0;
    int raio = 0;

    //Entrada de dados
    printf("Qual o tamanho do raio? ");
    scanf("%d",&raio);

    //Calculo da circunferencia
    area = pi * (raio * raio);

    //Saída de dados
    printf("Para um raio de %d cm, a area do circulo sera de %.2f", raio, area);

    return 0;
}