""" Exercício 5: Tabuada com for e while (Modo Automático e Manual)
Crie um programa que:

Pergunte ao usuário se ele quer:
1: Mostrar a tabuada de 1 a 10 (modo automático com for).
2: Mostrar a tabuada de um número específico (modo manual com while).
Se o usuário escolher a opção inválida, mostre "Opção inválida!".
Exemplo de execução:

Escolha uma opção:
1 - Tabuada completa
2 - Tabuada de um número específico

Opção: 1

1 x 1 = 1
1 x 2 = 2
...
10 x 10 = 100

# Ou no modo manual:

Opção: 2
Digite um número: 5
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50 """


print("Escolha uma opção:")
print("1 - Tabuada completa")
print("2 - Tabuada de um número específico")
opcao = input("\nOpção: ")

if opcao == "1":
    for i in range(1, 11):
        for j in range(1, 11):
            print(f"{i} x {j} = {i * j}")
        print()
elif opcao == "2":
    numero = int(input("Digite um número: "))
    contador = 1
    while contador <= 10:
        print(f"{numero} x {contador} = {numero * contador}")
        contador += 1
else:
    print("Opção inválida!")