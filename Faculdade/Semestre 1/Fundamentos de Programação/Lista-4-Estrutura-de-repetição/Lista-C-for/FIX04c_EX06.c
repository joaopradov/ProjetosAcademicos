/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 19/11/2024

FIX04c_EX06: Faça um programa em Linguagem C para calcular a média de notas obtida por um grupo de 8 alunos.
*/

#include <stdio.h>
int main()
{
	int cont;
	float nota, media, soma=0;
	for(cont=1;cont<=8;cont++){
		scanf("%f",&nota);
		soma = soma + nota;
	}
	media = soma/8;
	printf("Media = %.2f",media);
	return 0;
}