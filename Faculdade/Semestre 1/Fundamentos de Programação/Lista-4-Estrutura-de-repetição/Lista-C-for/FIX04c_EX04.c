/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 19/11/2024

FIX04c_EX04: Faça um programa em Linguagem C que receba um número do usuário e 
apresente a fase "Seja bem vindo", tantas vezes quanto for esse número. 
Uma frase por linha.
*/

#include <stdio.h>
int main()
{
	int cont, num;
	scanf("%d",&num);
	for (cont = 1; cont<=num; cont++){
		printf("Seja bem vindo!\n");
	}
	
	return 0;
}