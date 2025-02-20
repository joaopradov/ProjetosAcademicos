/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 19/11/2024

FIX04c_EX05: Faça um programa em Linguagem C para apresentar a tabuada de um número escolhido pelo usuário (1 a 10).
*/

#include <stdio.h>
int main()
{
	int cont, num, resp;
	
	scanf("%d",&num);
	for(cont=1;cont<=10;cont++){
		resp = cont*num;
		printf("%.2d x %.2d = %.2d\n", num, cont, resp);
	}
	return 0;
}