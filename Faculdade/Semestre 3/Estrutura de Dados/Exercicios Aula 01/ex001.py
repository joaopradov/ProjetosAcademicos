""" Exercício 1: Cadastro de Usuário (entrada de dados, tipos, print e f-string)
Crie um script Python que:

Solicite ao usuário:
O nome (string).
A idade (inteiro).
A altura (float).
Depois, exiba uma mensagem formatada com as informações coletadas, usando f-strings.
Exemplo de execução:

Digite seu nome: Ana
Digite sua idade: 25
Digite sua altura: 1.65

Olá, Ana! Você tem 25 anos e mede 1.65 metros. """

nome = input('Digite seu nome: ')
idade = int(input('Digite sua idade: '))
altura = float(input('Digite sua altura: '))

print(f'Olá, {nome}! Você tem {idade} anos e mede {altura} metros.')