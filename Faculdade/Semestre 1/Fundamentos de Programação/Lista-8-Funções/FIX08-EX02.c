/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 03/02/2025

FIX08_EX02: Faça um programa em Linguagem C que escreva uma função para calcular a média aritmética de 3 valores. A função deve receber os valores como parâmetro, calcular e apresentar o resultado na tela.
*/

#include <stdio.h>

void calcMedia(float nt1, float nt2, float nt3){
    float media = (nt1 + nt2 + nt3) / 3;
    printf("A media foi de %.2f", media);
}

int main(){
    float nt1, nt2, nt3;
    printf("Digite a primeira nota: ");
    scanf("%f", &nt1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nt2);
    printf("Digite a tereceira nota: ");
    scanf("%f", &nt3);

    calcMedia(nt1, nt2,nt3);

    return 0;
}