/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04a_EX05: Faça um programa em Linguagem C para apresentar a tabuada de um número escolhido pelo usuário (1 a 10).
*/

#include <stdio.h>
int main()
{
	int num,
		cont = 1,
		res;
	
	scanf("%d",&num);
	while(cont<=10)
	{
		res = num * cont;
		printf("%d x %d = %d\n", num, cont, res);
		cont++;
	}
	
	return 0;
}