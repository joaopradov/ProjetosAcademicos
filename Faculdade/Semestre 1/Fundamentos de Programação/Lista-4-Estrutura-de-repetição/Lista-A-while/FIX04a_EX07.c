/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04a_EX07: Construa um programa em Linguagem C que, 
dado um conjunto de valores inteiros e positivos (recebidos do usuário), 
determine qual o menor valor do conjunto. 
O final do conjunto de valores é conhecido através do valor zero, 
que não deve ser considerado.
*/

#include <stdio.h>
int main()
{
	int num,
		menor = 0,
		cont = 1;

	while(cont >= 1)
	{
		scanf("%d", &num);
		
		if (num == 0) {
			break;
		}
		
		if (cont == 1){
			menor = num;
		} else if(num < menor){
			menor = num;
		}
		cont++;
	}
	
	printf("Menor valor %d", menor);	

		
	
	return 0;
}