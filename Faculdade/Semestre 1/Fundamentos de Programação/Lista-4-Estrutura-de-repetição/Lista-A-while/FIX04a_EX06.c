/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04a_EX06: Faça um programa em Linguagem C para calcular a média de notas obtida por um grupo de 8 alunos.
*/

#include <stdio.h>
int main()
{
	int cont = 1;
	float media,
		  nota,
		  soma = 0;
	
	while(cont <= 8)
	{
		scanf("%f",&nota);
		soma = soma + nota;
		cont++;
	} 
	media = soma/8;
	printf("A media foi de %.2f", media);
	
	return 0;
}