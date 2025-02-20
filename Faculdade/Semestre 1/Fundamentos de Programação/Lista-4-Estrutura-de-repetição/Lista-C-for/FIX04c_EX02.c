/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 19/11/2024

FIX04c_EX02: Faça um programa em Linguagem C que apresente os valores de 10 a 1.
*/

#include <stdio.h>
int main()
{
	int cont;
	for(cont = 10; cont >= 1; cont--){
		printf("%d - ",cont);
	}
	return 0;
}