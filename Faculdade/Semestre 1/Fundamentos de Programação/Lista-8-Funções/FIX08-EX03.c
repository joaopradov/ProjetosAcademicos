/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 03/02/2025

FIX08_EX03: Faça um programa em Linguagem C para obter do usuário uma temperatura em graus Fahrenheit e retornar o valor correspondente em graus Celsius. O cálculo deve ser realizado por uma função que vai receber por parâmetro o valor em Fahrenheit e vai retornar o valor em Celsius.
Fórmula para conversão: C = ((F - 32) / 9) * 5

Casos de teste: 

32 graus Fahrenheit é igual a 0 grau Celsius;
212 graus Fahrenheit é igual a 100 graus Celsius;
86 graus Fahrenheit é igual a 30 graus Celsius. 
*/

#include <stdio.h>

float FahParaCels(float f){
    return ((f - 32) / 9) * 5;
}

int main(){
    float tempF;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("f", &tempF);

    float celsius;
    celsius = FahParaCels(tempF);

    printf("A temperatura de %.2f Fahrenheit convertida fica %.2f Celsius.", tempF, celsius);
}