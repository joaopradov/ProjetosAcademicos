/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 19/11/2024

FIX04c_EX07: Construa um programa em Linguagem C que, dado um conjunto de valores inteiros e positivos 
(recebidos do usuário), determine qual o menor valor do conjunto. 
O final do conjunto de valores é conhecido através do valor zero, que não deve ser considerado.
*/

#include <stdio.h>
int main()
{
	int cont, val, menor;
	
	for(cont=1;cont>=1;cont++){
		scanf("%d",&val);
		
		if(val == 0){
			break;
		}
		
		if (cont == 1){
			menor = val;
		} else if (val<menor){
			menor = val;
		}
		
	}
	printf("MENOR = %d", menor);
	
	return 0;
}