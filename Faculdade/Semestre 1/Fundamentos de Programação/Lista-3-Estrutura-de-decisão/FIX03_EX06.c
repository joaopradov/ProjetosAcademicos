/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 05/11/2024

FIX03_EX06: Criar um programa em linguagem C que leia 2 números.
Caso o primeiro número lido seja maior que o segundo, imprima na tela o primeiro número menos o segundo,
caso contrário mostre a soma dos dois números.
*/
#include <stdio.h>
int main(){
    //variaveis
    int n1 = 0,
        n2 = 0,
        soma = 0;
    //entrada
    printf("Primeiro numero: ");
    scanf("%d",&n1);
    printf("Segundo numero: ");
    scanf("%d",&n2);
    //condicional
    if (n1 > n2){
       soma = n1 - n2;
       printf("O resultado e: %d \n",soma);
    }else{
        soma = n1 + n2;
        printf("O resultado e: %d \n",soma);
    }
    printf("FIM\n");
    return 0;
}