/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04b_EX04: Faça um programa em Linguagem C que receba um número do usuário e apresente a fase "Seja bem vindo", tantas vezes quanto for esse número.
 Um frase por linha.
*/

#include <stdio.h>
int main()
{
	int num,
		cont = 1;
	
	scanf("%d",&num);
	
	do{
		printf("Seja bem vindo\n");
		cont++;
	} while (cont <= num);
	
	return 0;
}