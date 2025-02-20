/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX03: Faça um programa em Linguagem C que peça 5 números inteiros ao usuário. Armazene esses números em um vetor. Depois, o programa deve apresentar o maior valor armazenado no vetor.
Casos de teste (ignore os _ ):
a) Para a entrada: 10 _ 50 _ 20 _ 40 _ 30, apresentar como saída:
Maior: 50
b) Para a entrada: 8 _ 15 _ 9 _ 16 _ 5, apresentar como saída:
Maior: 16

*/

#include <stdio.h>
#define tam 5
int main() {
    int num[tam], ind = 0, maior = 0;

    for (ind= 0; ind < tam; ind++)
    {
        scanf("%d", &num[ind]);
    }

    printf("Original: ");
    for (ind = 0; ind < tam; ind++)
    {
        printf("%d - ", num[ind]);
    }
    
    maior = num[0];

    for (ind = 0; ind < tam; ind++)
    {
        if (num[ind] > maior)
        {
            maior = num[ind];
        }
    }

    printf("\nMaior = %d", maior);
    
    
    return 0;
}