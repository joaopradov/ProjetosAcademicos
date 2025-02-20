/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX06: Faça um programa em Linguagem C que peça 5 números reais. Depois, o programa deve apresentar a média. Por último, o programa deve procurar qual número digitado é o mais próximo da média e apresentá-lo na tela.
Casos de teste (ignore os _ ):
a) Para a entrada: 3.50 _ 7.40 _ 12.80 _ 1.60 _ 4.00
Média.......: 5.86
Mais próximo: 7.40 (apresenta a menor diferença até o valor da média)

b) Para a entrada: 17.15 _ 15.3 _ 5.88 _ 7.77 _ 9.99
Média.......: 11.22
Mais próximo: 9.99 (apresenta a menor diferença até o valor da média)

*/

#include <stdio.h>
#include <math.h>
int main() {

    float numeros[5], soma = 0, media, maisProximo;
    int ind, indMaisProximo;

    for(ind = 0; ind < 5; ind++)
    {
        scanf("%f", &numeros[ind]);
        soma += numeros[ind];
    }

    media = soma / 5;
    printf("Media: %.2f\n", media);

    maisProximo = numeros[0];
    indMaisProximo = 0;

    for(ind = 0; ind < 5; ind++)
    {
        if (fabs(numeros[ind] - media) < fabs(maisProximo - media))
        {
            maisProximo = numeros[ind];
            indMaisProximo = ind;
        }
    }

    printf("Mais proximo da media: %.2f (numero na posicao %d)\n", maisProximo, indMaisProximo );

    return 0;
}