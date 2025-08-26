""" Exercício 4: Jogo de Adivinhação com while, if, break e pass
Crie um jogo de adivinhação onde:

O programa escolhe um número secreto (7, por exemplo).
O usuário tenta adivinhar o número.
Se acertar, mostra a mensagem "Parabéns! Você acertou!" e sai com break.
Se errar, mostra "Tente novamente!".
Se o usuário digitar 0, o jogo encerra com a mensagem "Jogo encerrado.".
Se o número for menor que zero, use pass para ignorar (não exibir mensagem nenhuma).
Exemplo de execução:

Digite um número: -1
Digite um número: 5
Tente novamente!
Digite um número: 7
Parabéns! Você acertou! """

import random

numero_secreto = random.randint(1, 10)
while True:
    palpite = int(input("Digite um número entre 1 e 10 (ou 0 para sair): "))
    if palpite == 0:
        print("Jogo encerrado.")
        break
    if palpite < 0:
        pass
    elif palpite == numero_secreto:
        print("Parabéns! Você acertou!")
        break
    else:
        print("Tente novamente!")