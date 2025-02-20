/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 06/12/2024

FIX05_EX09: Faça um programa em Linguagem C que dado o conjunto de temperaturas médias de cada um dos dias do mês (para um mês de trinta dias), apresente:
A menor temperatura do mês; 
A maior temperatura do mês; 
A temperatura média mensal; 
O número de dias no mês em que a temperatura foi inferior à média mensal. 

*/

#include <stdio.h>
int main() {
    float temperatura[6], soma = 0, menor, maior, media;
    int ind, diasMenor = 0;

    for (ind = 0; ind < 6
    ; ind++) {
        scanf("%f", &temperatura[ind]);
        soma += temperatura[ind]; 
    }

    media = soma / 6;

    menor = temperatura[0];
    maior = temperatura[0];

    for (ind = 0; ind < 6; ind++) {
        if (temperatura[ind] < menor) {
            menor = temperatura[ind];
        } else if (temperatura[ind] > maior) {
            maior = temperatura[ind];
        }

        if (temperatura[ind] < media) {
            diasMenor++;
        }
    }

    // Exibir os resultados
    printf("\nA temperatura media mensal e: %.2f\n",media);
    printf("A menor temperatura do mes foi: %.2f\n", menor);
    printf("A maior temperatura do mes foi: %.2f\n", maior);
    printf("Numero de dias com temperatura inferior a media mensal: %d\n", diasMenor);

    return 0;
}