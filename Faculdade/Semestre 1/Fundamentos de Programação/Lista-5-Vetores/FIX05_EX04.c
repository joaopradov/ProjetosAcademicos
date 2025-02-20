/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX04: Faça um programa em Linguagem C que peça o salário de 8 funcionários de uma determinada empresa. Armazene esses dados em um vetor. Calcule a média salarial dos funcionários. Depois, o programa deve apresentar quantos funcionários recebem menos que a média salarial.

*/

#include <stdio.h>
#define tam 8

int main() {
    float sal[tam], soma = 0, media = 0;
    int ind = 0;

    for (ind = 0; ind < tam; ind++)
    {
        scanf("%f", &sal[ind]);
        soma = soma + sal[ind];
    }

    printf("\nSalarios: ");
    for (ind = 0; ind < tam; ind++)
    {
        printf("%.2f | ", sal[ind]);
    }
    
    media = soma / tam;
    printf("\nMedia de salario: %.2f", media);
    
    return 0;
}