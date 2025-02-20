/*
Nome: Joï¿½o Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 18/11/2024

FIX04a_EX08: Faï¿½a um programa em Linguagem C que receba idade e o peso de sete pessoas. 
Calcule e mostre: 
i) a quantidade de pessoas com mais de 90 quilos; 
ii) a mï¿½dia das idades das pessoas.
*/

#include <stdio.h>
int main()
{
	int cont = 1,
		mais_90 = 0,
		idade;
		
	float peso,
		  m_idade,
		  soma_id = 0;
 		  
 	while(cont <= 7)
	 {
		 scanf("%d", &idade);
		 soma_id = soma_id + idade;
		 scanf("%f", &peso);
		 if(peso > 90.00){
			 mais_90 ++;
		 }
		 cont++;
		 
	 }
    m_idade = soma_id/cont;
	printf("Pessoas mais de 90 quilos: %d\n", mais_90);	  
	printf("Media de idade: %.2f", m_idade);
	
	return 0;
}