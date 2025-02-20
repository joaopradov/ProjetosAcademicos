/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX10: Faça um programa em Linguagem C que receba um conjunto de 20 números inteiros, verificar se existem números repetidos e em quais posições. As mensagens de saída NÃO precisam estar idênticas, mas os números (valores) sim. O vetor sempre trabalha com as posições de 0 a tamanho - 1. Para melhorar a apresentação, ao mostrar ao usuário, estamos sempre acrescentando +1.
Casos de teste:
Para o conjunto 5, 15, 5, 1, 1, 4, 10, 25, 22, 17, 12, 20, 30, 7, 9, 11, 4, 18, 10 e 10.
o número 5 está repetido nas posições 1 - 3;
o número 1 está repetido nas posições 4 - 5;
o número 10 está repetido nas posições 7 - 19 - 20; 
Para o conjunto 6, 15, 5, 1, 2, 4, 1, 25, 22, 17, 12, 1, 30, 7, 9, 1, 16, 18, 10 e 20.
o número 1 está repetido nas posições 4 - 7 - 12 - 16;
Para o conjunto 2, 10, 5, 1, 14, 4, 21, 25, 22, 17, 12, 28, 30, 7, 9, 11, 6, 18, 32 e 20.
não existem números repetidos. 

*/

#include <stdio.h>
int main() {
    int numeros[20];
    int repetido, indAt, indComp;
    int encontrado[20] = {0};
    int algumRepetido = 0;

    printf("Digite 20 numeros inteiros:\n");
    for (indAt = 0; indAt < 20; indAt++) {
        scanf("%d", &numeros[indAt]);
    }

    printf("\nVerificando numeros repetidos:\n");

    for (indAt = 0; indAt < 20; indAt++) {
        if (encontrado[indAt]) {
            continue;
        }

        repetido = 0;
        
        for (indComp = indAt + 1; indComp < 20; indComp++) {
            if (numeros[indAt] == numeros[indComp]) {
                if (!repetido) {
                    printf("O numero %d esta repetido nas posicoes: %d", numeros[indAt], indAt + 1);
                    repetido = 1;
                    algumRepetido = 1;
                }
                printf(" - %d", indComp + 1);
                encontrado[indComp] = 1;
            }
        }

        if (repetido) {
            printf("\n");
        }
    }

    if (!algumRepetido) {
        printf("\nNao existem numeros repetidos.\n");
    }

    return 0;
}