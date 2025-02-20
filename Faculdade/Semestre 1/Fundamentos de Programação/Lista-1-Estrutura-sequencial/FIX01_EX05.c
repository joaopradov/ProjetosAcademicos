/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX05: Elabore um programa em Linguagem C que calcule o preço de venda de um carro.
    O preço de venda é formado pelo preço da montadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS.
    As porcentagens são sobre o preço da montadora, que é lido do usuário. Apresente na tela o preço final, o lucro e o valor dos impostos.
    Tente apresentar todos os dados no formato de uma tabela, com valores alinhados. Casos de teste:

    - a) Para o preço da montadora igual a R$ 39.294,00, o preço de venda é R$ 56.190,42, o lucro é R$ 5.894,10, o IPI é R$ 4.322,34 e o ICMS é R$ 6.679,98;
    - b) Para o preço da montadora igual a R$ 130.000,00, o preço de venda é R$ 185.900,00, o lucro é R$ 19.500,00, o IPI é R$ 14.300,00 e o ICMS é R$ 22.100,00.
*/

#include <stdio.h>

int main()
{
    //declaração de variáveis
    float preco_mont = 0,
          lucro = 0.15,
          ipi = 0.11,
          icms = 0.17;

    //entrada de dados
    printf("Qual o preco da montadora? ");
    scanf("%f", &preco_mont);

    //calculo de valores
    float preco_fim = preco_mont + (preco_mont*(lucro+ipi+icms)),
          val_lucro = preco_mont * lucro,
          val_ipi = preco_mont * ipi,
          val_icms = preco_mont * icms;

    //saida de dados
    printf("Para preco de montadora igual a R$ %.2f, o preco de venda e R$ %.2f, o lucro e de R$ %.2f, o IPI e R$ %.2f e o ICMS e %.2f", preco_mont, preco_fim, val_lucro, val_ipi, val_icms);

    return 0;
}