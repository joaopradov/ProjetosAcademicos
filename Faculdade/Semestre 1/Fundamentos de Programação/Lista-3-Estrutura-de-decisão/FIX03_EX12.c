/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 11/11/2024

FIX03_EX12: Faça um programa em Linguagem C para mostrar um menu com as opções de um cardápio de restaurante ao usuário
e obter o prato desejado. Após a escolha do prato,
 perguntar ao usuário se deseja pagar a gorjeta ao garçom (10% sobre o valor do prato)
 e mostrar o valor final de acordo com a resposta.
 Cardápio
1	Picanha	            R$ 65,00
2	Lasanha	            R$ 27,00
3	Strogonoff 	        R$ 22,00
4	Bife acebolado 	    R$ 20,00
5	Pão com ovo 	    R$ 7,50

Casos de teste:
a) Para opção com código igual a 2 e com pagamento de gorjeta ao garçom, o valor final é R$ 29,70;
b) Para opção com código igual a 1 e sem pagamento de gorjeta ao garçom, o valor final é R$ 65,00;
c) Para opção com código igual a 5 e com pagamento de gorjeta ao garçom, o valor final é R$ 8,25.

Pense e treine:
OBS1.: e se ao invés de 1, 2, 3, 4 e 5 o menu apresentar as opções A, B, C, D e E. Quais mudanças deveriam ser feitas?
*/
#include <stdio.h>
int main(){
    int opcao;
    int n_val;
    char pag;
    printf("\t===== CARDAPIO =====\n");
    printf("[1]Picanha\t\tR$ 65,00\n");
    printf("[2]Lasanha\t\tR$ 27,00\n");
    printf("[3]Strogonoff\t\tR$ 22,00\n");
    printf("[4]Bife acebolado\tR$ 20,00\n");
    printf("[5]Pao com ovo\t\tR$  7,50\n");
    scanf(" %d",&opcao);
    if(opcao > 5){
		printf("OPCAO INVALIDA! ");
		return 0;
	}
    printf("Deseja dar gorjeta? [S/N] ");
    scanf(" %c",&pag);
    if(pag == 'S' || pag == 's'){
        switch(opcao){
            case 1:
            	n_val = 65.00 + (65.00*0.1);
            	printf("Para a opcao com o código %d e com o pagamento de gorjeta ao garcom, o valor final e de R$ %d",opcao,n_val);
                break;
            case 2:
            	n_val = 27.00 + (27.00*0.1);
            	printf("Para a opcao com o código %d e com o pagamento de gorjeta ao garcom, o valor final e de R$ %d",opcao,n_val);
                break;
            case 3:
            	n_val = 22.00 + (22.00*0.1);
            	printf("Para a opcao com o código %d e com o pagamento de gorjeta ao garcom, o valor final e de R$ %d",opcao,n_val);
                break;
            case 4:
            	n_val = 20.00 + (20.00*0.1);
            	printf("Para a opcao com o código %d e com o pagamento de gorjeta ao garcom, o valor final e de R$ %d",opcao,n_val);
                break;
            case 5:
            	n_val = 7.50 + (7.50*0.1);
            	printf("Para a opcao com o código %d e com o pagamento de gorjeta ao garcom, o valor final e de R$ %d",opcao,n_val);
                break;
        }
    } else {
        switch(opcao){
            case 1:
                printf("Para a opcao %d, e sem gorjeta o valor fica R$65.00",opcao);
                break;
            case 2:
                printf("Para a opcao %d, e sem gorjeta o valor fica R$27.00",opcao);
                break;
            case 3:
                printf("Para a opcao %d, e sem gorjeta o valor fica R$22.00",opcao);
                break;
            case 4:
                printf("Para a opcao %d, e sem gorjeta o valor fica R$20.00",opcao);
                break;
            case 5:
                printf("Para a opcao %d, e sem gorjeta o valor fica R$7.50",opcao);
                break;
        }
    }
    return 0;
}