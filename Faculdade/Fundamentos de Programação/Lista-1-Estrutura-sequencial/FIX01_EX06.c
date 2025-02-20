/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX06: Elabore um programa em Linguagem C para calcular: (a + b)³. Casos de teste:
    - a) Para os números 2 e 3, o cubo da soma é 125;
    - b) Para os números 7 e 5, o cubo da soma é 1728.
*/

#include <stdio.h>
#include <math.h>
int main()
{
    //declaração de variaveis
    int n1 = 0,
        n2 = 0;

    //entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    //calculo
    int soma = n1 + n2,
        expoente = 3,
        resultado = pow(soma,expoente);

    //saida
    printf("Para os numeros %d e %d, o cubo da soma e de %d", n1, n2, resultado);

    return 0;
}