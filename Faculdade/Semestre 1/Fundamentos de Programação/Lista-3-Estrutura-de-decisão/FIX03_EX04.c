/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/11/2024

FIX03_EX04: Você está jogando um bingo e só faltam as "pedras" 51.
Faça um programa em linguagem C que receba 1 valor "cantado" do usuário, e diga BINGO se deu a sua pedra.
Ao final, ganhando ou não, de uma mensagem de fim da rodada.
*/
#include <stdio.h>
int main(){
    //variaveis
    int v_cant = 0;

    //entrada
    printf("Digite o número da pedra: ");
    scanf("%d",&v_cant);
    printf("A pedra cantada foi %d",v_cant);

    //condicional
    if (v_cant == 51){
        printf("\n!!!BINGO!!!");
    }
    printf("\nFIM DA RODADA");
    return 0;
}