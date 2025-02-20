/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/11/2024

FIX03_EX03: O salário mínimo em 2024 é equivalente a R$ 1.412,00.
Faça um programa em linguagem C que receba o valor do salário bruto de um funcionário,
se ele ganhar menos que 2 salários mínimos, acresça um bônus de 10% ao salário a receber.
Ao final apresente o valor do salário bruto, o valor do aumento e o valor do novo salário a receber.
*/

#include <stdio.h>
int main(){
    //variaveir
    float sal_min = 1412.00,
          sal_bruto = 0,
          nsal_bruto = 0;

    //entrada
    printf("Digite o seu salario: ");
    scanf("%f",&sal_bruto);

    //condicional
    if (sal_bruto < sal_min*2){
        nsal_bruto = sal_bruto+(sal_bruto*0.1);
        printf("\nO novo salario e de R$ %.2f",nsal_bruto);
    }
    printf("\nO salario bruto e de R$ %.2f",sal_bruto);
    return 0;
}