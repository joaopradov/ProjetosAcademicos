/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX09: Elabore um programa em Linguagem C para obter do usuário a velocidade em quilômetros por hora (km/h)
e informar a mesma velocidade em metros por segundo (m/s). Casos de teste:
    - a) A velocidade de 72 Km/h corresponde à velocidade de 20 m/s;
    - b) A velocidade de 180 Km/h corresponde à velocidade de 50 m/s.
*/

#include <stdio.h>
int main()
{
    //declaração de variaveis
    int kmph = 0;

    //entrada de dados
    printf("Digite a velocidade em Km/h: ");
    scanf("%d", &kmph);

    //calculo
    int mps = kmph * 1000 / 3600;

    //saida de dados
    printf("A velocidade de %d Km/h corresponde a velocidade de %d m/s", kmph, mps);

    return 0;
}