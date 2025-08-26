""" Exercício 2: Números Pares com for e continue
Crie um programa que percorra os números de 1 a 20 e:

Imprima apenas os números pares.
Se o número for ímpar, use o continue para ignorar a impressão.
2
4
6
8
...
20 """

for i in range(1, 21):
    if i % 2 != 0:
        continue
    print(i)