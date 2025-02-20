/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04a_EX02: Faça um programa em Linguagem C que apresente os valores de 10 a 1.
*/

#include <stdio.h>
int main()
{
	int cont=10;
	while(cont>=1)
	{
		printf("%d - ",cont);
		cont--;
	}
	
	return 0;
}