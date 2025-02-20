/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 05/11/2024

FIX03_EX08: Faça um programa em linguagem C que peça um número inteiro.
Em seguida, o programa deve apresentar uma mensagem conforme a seguinte regra:
a. Se o valor for positivo: “Valor positivo”;
b. Se o valor for negativo: “Valor negativo”;
c. Se não for nenhuma das opções (se for 0): “Valor neutro”.
*/
#include <stdio.h>
int main(){
    //variaveis
    int num = 0;
    //entrada
    printf("Digite o numero: ");
    scanf("%d",&num);
    //condicional
    if (num > 0){
        printf("NUMERO POSITIVO\n");
    } else {
        if (num < 0){
            printf("NUMERO NEGATIVO\n");
        } else {
            printf("VALOR NEUTRO\n");
        }
    }
    return 0;
}