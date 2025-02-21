/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/02/2025

FIX09_EX06: Construa uma função que recebe 2 (duas) datas como parâmetro (struct) e retorne um inteiro representando a diferença (em dias) entre as duas datas. Faça um programa em Linguagem C que demostre o uso desta função.
*/

#include <stdio.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

typedef struct Data Data;

int Bissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || ( ano % 400 == 0)){
        return 1;
    }
    return 0;
}

int diasAno(Data dia []){
    int dias = 0;

    int mesNormal[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    int mesBissexto[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    /* Porque esta dando erro?
    for (int i = 0; i < Data.mes - 1; i++)
    {
        if (Bissexto(Data.ano))
        {
            dias += mesBissexto[i];
        } else {
            dias += mesNormal[i];
        }
    } */
}



int main(){

    Data data1, data2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", data1.dia, data1.mes, data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", data2.dia, data2.mes, data2.ano);

    int diferenca;
    //diferenca = diferencaDias;
    printf("A diferenca em dias de uma data a outra é %d dias", diferenca);

    return 0;
}