/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 11/11/2024

FIX03_EX10: (idem ao exercício EX09 mas agora deve ser feito usando switch-case)
Faça um programa em Linguagem C que apresente um menu e pergunte ao usuário se ele deseja calcular:
1) a área de um triângulo (base vezes altura dividido por 2)
2) a área de um círculo (pi multiplicado pelo raio ao quadrado)
3) a área de um cubo (6 vezes a área do quadrado)
Depois, solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
    int opcao,
        base,
        alt,
        aresta;
    float raio,
          area;
    printf("Escolha uma opcao de calculo: \n");
    printf("[1] AREA DO TRIANGULO\n");
    printf("[2] AREA DO CIRCULO\n");
    printf("[3] AREA DO CUBO\n");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
            printf("Digite a base: ");
            scanf("%d",&base);
            printf("Digite a altura: ");
            scanf("%d",&alt);
            area = base*alt / 2;
            printf("\nA area do TRIANGULO e de %.2f",area);
            break;
        case 2:
            printf("Digite o raio: ");
            scanf("%f",&raio);
            area = PI * pow(raio,2);
            printf("\nA area do CIRCULO e de %.2f",area);
            break;
        case 3:
            printf("Digite o tamanho da aresta: ");
            scanf("%d",&aresta);
            area = 6 * pow(aresta,2);
            printf("\nA area do CUBO e de %.2f",area);
            break;
        default:
            printf("\n!!! ERRO! !!! OPCAO INVALIDA !\n");
    }
    return 0;
}