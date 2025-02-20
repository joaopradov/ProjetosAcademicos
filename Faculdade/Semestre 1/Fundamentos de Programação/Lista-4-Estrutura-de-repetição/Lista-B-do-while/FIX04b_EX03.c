/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04b_EX03: Faça um programa em Linguagem C que imprima todos os múltiplos de 3, entre 1 e 100.
*/

#include <stdio.h>
int main()
{
	int cont = 1;
	
	do{
		if(cont%3==0){
			printf("[%d] - ",cont);
		} else {
			printf("%d - ",cont);
		}
		cont++;
	} while (cont <= 100);
	
	return 0;
}