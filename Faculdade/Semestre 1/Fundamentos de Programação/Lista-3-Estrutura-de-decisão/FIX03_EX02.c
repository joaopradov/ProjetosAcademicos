/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/11/2024

FIX03_EX02: Faça um programa em linguagem C que peça a idade do usuário.
Se ele for menor de idade, dê uma mensagem que ele não poderá acessar o sistema.
Independente da resposta, finalize o programa.
*/

#include <stdio.h>
int main(){

    //variaveis
    int idade = 0;

    //entrada
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    //condicional
    if (idade<18){
        printf("A sua idade e %d anos, e nao podera acessar o programa.\n",idade);
    }
    printf("Acesso liberado\n");
    return 0;
}
