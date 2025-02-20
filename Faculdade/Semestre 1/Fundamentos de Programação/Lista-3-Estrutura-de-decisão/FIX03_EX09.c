/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 05/11/2024

FIX03_EX09: Faça um programa em linguagem C que apresente um menu e pergunte ao usuário se ele deseja calcular:
1) a área de um triângulo (base vezes altura dividido por 2)
2) a área de um círculo (pi multiplicado pelo raio ao quadrado)
3) a área de um cubo (6 vezes a área do quadrado)
Depois, solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
*/
#include <stdio.h>
#include <math.h>
int main(){
    //variaveis
    int esc = 0;
    float area = 0;
    //entrada
    printf("Escolha qual area quer calcular:\n[1] TRIANGULO\n[2] CIRCULO\n[3] CUBO\n");
    scanf("%d",&esc);
    //condicional
    if (esc == 1){
       int base = 0,
           alt = 0;
           printf("Digite a base: ");
           scanf("%d",&base);
           printf("Digite a altura: ");
           scanf("%d",&alt);
           area = base * alt / 2;
    }else{
        if (esc == 2){
            float pi = 3.14,
                  raio = 0;
            printf("Digite o raio: ");
            scanf("%f",&raio);
            area = pi * (pow(raio,2));
        } else{
            int ares = 0;
            printf("Digite a aresta de uma das faces: ");
            scanf("%d",&ares);
            area = 6 * pow(ares,2);
        }
    }
    //saida
    printf("O resultado do calculo escolhido e de %.2f",area);

    return 0;
}