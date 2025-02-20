/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 19/11/2024

FIX04c_EX03: Faça um programa em Linguagem C que imprima todos os múltiplos de 3, entre 1 e 100.
*/

#include <stdio.h>
int main()
{
	int cont;
	for(cont = 1; cont<=100;cont++){
		if (cont%3==0){
			printf("[%d] - ",cont );
		} else {
			printf("%d - ", cont);
		}
	}
	
	return 0;
}