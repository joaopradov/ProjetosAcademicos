/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX05: Faça um programa em Linguagem C que peça 5 números inteiros. Após digitados, o programa deve ordenar os valores no vetor e apresentá-los na tela em ordem crescente.
Casos de teste (ignore os _ ):
a) Para a entrada: 10 _ 50 _ 20 _ 40 _ 30
Saída: 10 _ 20 _ 30 _ 40 _ 50

b) Para a entrada: 8 _ 15 _ 5 _ 16 _ 9
Saída: 5 _ 8 _ 9 _ 15 _ 16

*/

#include <stdio.h>
int main() {

    //variaveis
    int numeros[5], indAt, indComp, troca;

    //entrada de dados
    for (indAt = 0; indAt < 5; indAt++)
    {
        scanf("%d", &numeros[indAt]);
    }

    //ordenação
    for (indAt = 0; indAt < 4; indAt++)
    {
        for (indComp = 0; indComp < 4 - indAt; indComp++)
        {
            if (numeros[indComp] > numeros[indComp + 1])
            {
                troca = numeros[indComp];
                numeros[indComp] = numeros[indComp + 1];
                numeros[indComp + 1] = troca;
            }
        }
    }
    
    //saida de dados
    for (indAt = 0; indAt < 5; indAt++)
    {
        printf("%d - ", numeros[indAt]);
    }
    
    return 0;
}