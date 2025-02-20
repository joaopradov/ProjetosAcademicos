/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 05/11/2024

FIX03_EXTRA: Faça uma programa em linguagem C que leia 3 valores ladoA, ladoB e ladoC
e verifique se esses valores representam os lados de um triângulo.
Para que seja um triângulo, todos os lados devem ser maiores que zero
e nenhum lado deve ser igual ou maior que a soma dos outros dois lados.
Ao terminar precisa informar também qual o tipo do triângulo:

- Escaleno: todos os lados diferentes.
- Isósceles: 2 lados iguais.
- Equilátero: todos os lados iguais.

Casos de teste:
a) Para valores: 5, 5 e 5, Valores representam um triângulo equilátero!
b) Para valores: 3, 3 e 4, Valores representam um triângulo isóceles!
c) Para valores: 5, 9 e 5, Valores representam um triângulo isóceles!
d) Para valores: 1, 2 e 3, Valores NÃO representam os lados de um triângulo!
e) Para valores: 8, 9 e 12, Valores representam um triângulo escaleno!
*/
#include <stdio.h>
int main(){
    //variaveis
    int a = 0,
        b = 0,
        c = 0;
    //entrada
    printf("Lado 1: ");
    scanf("%d",&a);
    printf("Lado 2: ");
    scanf("%d",&b);
    printf("Lado 3: ");
    scanf("%d",&c);
    //condicional
    if (a+b > c && a+c>b && c+b>a){
        if (a==b && b==c){
            printf("TRIANGULO EQUILATERO");
        }else{
            if (a==b || b==c || c==a){
                printf("TRIANGULO ISOSCELES");
            }else{
                printf("TRIANGULO ESCALENO");
            }
        }
    }else{
        printf("NAO E UM TRIANGULO");
    }
    return 0;
}