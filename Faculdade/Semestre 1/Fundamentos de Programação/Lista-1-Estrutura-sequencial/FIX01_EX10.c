/*
Nome: JoÃ£o Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 29/11/2024

- FIX01_EX10: Elabore um programa em Linguagem C para calcular a distÃ¢ncia entre dois pontos, ð´(x1, y1) e ðµ(x2, y2), por meio da fÃ³rmula.
    dab = raiz de (x2 - x1)^2 + (y2 - y1)^2
- Casos de teste:
    - a)Dados os pontos A(1, 1) e B(3, 1), ð‘‘AB Ã© igual a 2;
    - b) Dados os pontos A(-3, -11) e B(2, 1), ð‘‘AB Ã© igual a 13.
*/

#include <stdio.h>
#include <math.h>
int main()
{
    //declaraÃ§Ã£o de variaveis
    int x1 = 0,
        x2 = 0,
        y1 = 0,
        y2 = 0;

    //entrada
    printf("Ponto A1:");
    scanf("%d",&x1);
    printf("Ponto A2:");
    scanf("%d",&y1);
    printf("Ponto B1:");
    scanf("%d",&x2);
    printf("Ponto B2:");
    scanf("%d",&y2);

    //calculo
    int raiz = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));

    //saida
    printf("Dados os pontos A(%d, %d) e B(%d, %d), dAB e igual a %d.", x1,y1,x2,y2,raiz);

    return 0;
}