/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/11/2024

FIX03_EX01: Faça um programa em linguagem C que leia uma valor do usuário e diga se ele é um valor igual a zero.
*/

#include <stdio.h>
int main(){

    //declaração de variaveis
    float valor = 0;

    //entrada
    printf("Digite um valor: ");
    scanf("%f",&valor);

    //condicao
    if (valor == 0){
        printf("O valor é igual a zero");
    }
    printf("O valor e %.1f",valor);
    return 0;
}