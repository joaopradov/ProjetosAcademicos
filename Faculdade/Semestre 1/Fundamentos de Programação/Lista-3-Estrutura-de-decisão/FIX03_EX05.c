/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/11/2024

FIX03_EX05: Você está jogando um bingo e só faltam as "pedras" 73 e 27.
Faça um programa em linguagem C que receba 2 valores "cantados" do usuário, se os valores "cantados" forem os seus, diga BINGO!!!
Ao final, ganhando ou não, de uma mensagem de fim da rodada.
*/
#include <stdio.h>
int main(){
    //variaveis
    int cant1 = 0,
        cant2 = 0;
    //entrada
    printf("PEDRA 1: ");
    scanf("%d",&cant1);
    printf("PEDRA 2: ");
    scanf("%d",&cant2);

    //condicional
    if ((cant1 == 73 && cant2 == 27) || (cant1 == 27 && cant2 == 73)){
        printf("\n!!! BINGO !!!\n");
    }
    printf("\nFIM DE RODADA!\n");
    return 0;
}