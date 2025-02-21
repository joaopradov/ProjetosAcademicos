/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 03/02/2025

FIX08_EX04: Faça um programa em Linguagem C para simular uma calculadora simples com as seguintes operações possíveis: adição, subtração, multiplicação e divisão. O programa inicia com a apresentação ao usuário do menu de opções:

********** 
Calculadora 
1. Adição 
2. Subtração 
3. Multiplicação 
4. Divisão 
5. Sair
********** 
Entre com a opção:

* Utilize uma função para apresentar o menu inicial e uma função de cada tipo para resolver as operações. Cada operações (adição; subtração; multiplicação; divisão) deve usar um tipo de função (sem retorno e sem parâmetro; sem retorno e com parâmetro; com retorno e sem parâmetro; com retorno e com parâmetro;) - não vale repetir o uso.
*/

#include <stdio.h>

void mostrarMenu(){
    printf("**********\n");
    printf("Calculadora\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("**********\n");
}

void adicao(int n1, int n2){
    printf("O resultado da adicao é %d", n1 + n2);
}

void subtracao() {
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("O resultado da subtracao e %d", n1 - n2);
}

int multiplicacao() {
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    return n1*n2;
}

float divisao(float n1, float n2) {
    return n1 / n2;
}

int main(){
    int opcao;
    int n1, n2;
    float resultado;
    float num1, num2;

    do{
        mostrarMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%d", &n1);
            printf("Digite o segundo numero: ");
            scanf("%d", &n2);
            adicao(n1,n2);
            break;
        case 2:
            subtracao();
            break;
        case 3:
            resultado = multiplicacao();
            printf("O resultado da multiplicação e %.2f", resultado);
            break;
        case 4:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = divisao(num1, num2);
            printf("O resultado da divisao e %.2f", resultado);
            break;
        case 5:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("ERRO! Opcao invalida tente novamente! \n");
            break;
        }
    }while (opcao != 5);

    return 0;
}