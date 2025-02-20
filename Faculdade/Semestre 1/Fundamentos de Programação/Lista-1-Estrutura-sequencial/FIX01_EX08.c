/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX08: Similar ao exercício anterior mas receba também os pesos para cada uma das notas. Casos de teste:
    - a) Para as notas 5,0 (peso 3,0), 4,5 (peso 3,0) e 9,5 (peso 4,0), a média ponderada é 6,65;
    - b) Para as notas 9,0 (peso 2,0), 8,3 (peso 3,0) e 6,5 (peso 5,0), a média ponderada é 7,54.
*/

#include <stdio.h>
int main()
{
    //declaração de variaveis
    float n1 = 0,
          n2 = 0,
          n3 = 0,
          p1 = 0,
          p2 = 0,
          p3 = 0;

    //entrada de dados
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &n1);
    printf("Digite peso da primeira prova: ");
    scanf("%f", &p1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &n2);
    printf("Digite peso da segunda prova: ");
    scanf("%f", &p2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &n3);
    printf("Digite peso da terceira prova: ");
    scanf("%f", &p3);

    //calculo
    float mp = (n1*p1)+(n2*p2)+(n3*p3);

    //saida de dados
    printf("Para as notas %.2f (peso %.2f), %.2f (peso %.2f) e %.2f (peso %.2f), a media ponderada e %.2f.", n1,p1,n2,p2,n3,p3,mp);

    return 0;
}