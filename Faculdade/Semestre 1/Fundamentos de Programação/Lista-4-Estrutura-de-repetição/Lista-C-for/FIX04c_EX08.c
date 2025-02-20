/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 19/11/2024

FIX04c_EX08: Faça um programa em Linguagem C que receba idade e o peso de sete pessoas. 
Calcule e mostre: 
i) a quantidade de pessoas com mais de 90 quilos; 
ii) a média das idades das pessoas.
*/

#include <stdio.h>
int main()
{
	int cont;
	float idade, s_idade = 0, med_idade, peso, mais90 = 0;
	
	for (cont = 1;cont<=7;cont++){
		scanf("%f",&idade);
		s_idade = s_idade + idade;
		scanf("%f",&peso);
		if(peso>90.0){
			peso ++;
		}
	}
	med_idade = s_idade/7;
	printf("Media de idade = %.2f\n",med_idade);
	printf("Pessoas mais 90kg = %.2f",mais90);
	
	return 0;
}