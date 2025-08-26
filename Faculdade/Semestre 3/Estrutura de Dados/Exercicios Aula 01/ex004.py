""" Exercício 4: Comparação de Números (entrada, comparação e f-string)
Escreva um programa que:

Peça ao usuário dois números inteiros.
Compare os números e informe:
Qual número é maior, menor ou se são iguais.
Exiba a mensagem com f-string.
Exemplo de execução:

Digite o primeiro número: 7
Digite o segundo número: 10
O número 10 é maior que 7. """

valor1 = int(input('Digite o primeiro número: '))
valor2 = int(input('Digite o segundo número: '))
if valor1 > valor2:
    print(f'O número {valor1} é maior que {valor2}.')
elif valor1 < valor2:
    print(f'O número {valor2} é maior que {valor1}.')
else:
    print(f'Os números {valor1} e {valor2} são iguais.')