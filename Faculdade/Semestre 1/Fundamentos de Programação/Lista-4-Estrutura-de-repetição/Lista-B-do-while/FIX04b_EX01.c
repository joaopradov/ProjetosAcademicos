/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04b_EX01: Faça um programa em Linguagem C que apresente os valores de 1 a 10.
*/

#include <stdio.h>
int main(){
	int cont = 1;
	do {
		printf("%d - ",cont);
		cont++;
	} while(cont <= 10);
	
	return 0;
}