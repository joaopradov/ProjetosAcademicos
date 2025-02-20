/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04b_EX06: Faça um programa em Linguagem C para calcular a média de notas obtida por um grupo de 8 alunos.
*/

#include <stdio.h>
int main()
{
	int cont = 1;
	float media=0,
		  nota=0,
		  soma = 0;
	
	do{
		scanf("%f",&nota);
		soma = soma+nota;
		cont++;
	} while (cont<=8);
	media = soma/8;
	printf("A media foi de %.2f", media);
	
	return 0;
}