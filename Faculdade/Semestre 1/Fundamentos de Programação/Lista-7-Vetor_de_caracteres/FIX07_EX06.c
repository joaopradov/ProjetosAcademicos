/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 16/12/2024

FIX07_EX06: Faça um programa em Linguagem C que receba o nome de Usuario e sua senha de acesso a um sistema. Se o Usuario for “joao“ e a senha for 123, permita o acesso. Caso contrário, dê uma mensagem de ACESSO NEGADO

Exemplo1:
Usuario: joao
Senha..: 123
Saída: Seja bem vindo, joao.

Exemplo2:
Usuario: jose
Senha..: 123
Saída: Acesso negado!
*/

#include <stdio.h>
#include <string.h>
int main() {
    char usuario[50], senha[50];

    printf("Usuario: ");
    scanf("%s", usuario);
    
    printf("Senha..: ");
    scanf("%s", senha);

    if (strcmp(usuario, "joao") == 0 && strcmp(senha, "123") == 0) {
        printf("Seja bem vindo, %s.\n", usuario);
    } else {
        printf("Acesso negado!\n");
    }

    return 0;
}