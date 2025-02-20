/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 05/11/2024

FIX03_EX07: Faça um programa em linguagem C que peça um número inteiro e apresente a mensagem “é par” ou “é ímpar”.
Dica: use o operador % (resto da divisão de inteiros).
Por exemplo: 5 % 2 retornará o resto da divisão de 5 por 2.
Então, 5 % 2 = 1 (porque 5 dividido por 2 é igual a 2 e resta 1).
Por outro lado, 6 % 2 = 0, porque 6 dividido por 2 é igual a 3 e resta 0
*/
#include <stdio.h>
int main(){
    //variaveis
    int num = 0;
    //entrada
    printf("Digite um numero: ");
    scanf("%d",&num);
    //condicional
    if ( num % 2 == 0){
        printf(" PAR \n");
    } else {
        printf(" IMPAR \n");
    }
    return 0;
}