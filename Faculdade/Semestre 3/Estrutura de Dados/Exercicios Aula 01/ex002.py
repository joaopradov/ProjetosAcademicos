""" Exercício 2: Calculadora Simples (operações básicas e tipos)
Faça um programa que:

Solicite dois números decimais (tipo float) ao usuário.
Realize as seguintes operações:
Soma
Subtração
Multiplicação
Divisão
Mostre os resultados de todas as operações, usando f-strings.
Exemplo de execução:

Digite o primeiro número: 8.5
Digite o segundo número: 2.0

Soma: 10.5
Subtração: 6.5
Multiplicação: 17.0
Divisão: 4.25 """

valor1 = float(input('Digite o primeiro número: '))
valor2 = float(input('Digite o segundo número: '))

soma = valor1 + valor2
subtracao = valor1 - valor2
multiplicacao = valor1 * valor2
divisao = valor1 / valor2

print(f'\nSoma: {soma}')
print(f'Subtração: {subtracao}')
print(f'Multiplicação: {multiplicacao}')
print(f'Divisão: {divisao}')