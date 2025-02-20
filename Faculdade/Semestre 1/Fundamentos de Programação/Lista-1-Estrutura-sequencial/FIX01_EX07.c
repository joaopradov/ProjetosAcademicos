/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX07: Faça um programa em Linguagem C para calcular a média ponderada de três notas de um aluno considerando os pesos 2, 3 e 5,
 respectivamente para a primeira, segunda e terceira nota. Casos de teste:

    - a) Para as notas 5,0,   4,5   e   9,5, a média ponderada é 7,1;
    - b) Para as notas 10,0,   4,0   e   7,5, a média ponderada é 6,95.
*/

#include <stdio.h>

int main()
{
    //declaraçao de variaveis
    float n1 = 0,
          n2 = 0,
          n3 = 0;

    //entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite a terceira nota: ");
    scanf("%f",&n3);

    //calculo
    float pn1 = n1 * 2,
          pn2 = n2 * 3,
          pn3 = n3 * 5;
    float media = pn1+pn2+pn3;

    //saida
    printf("Para as notas, %.2f, %.2f e %.2f, a media ponderada e de %.2f",n1,n2,n3,media);

    return 0;
}