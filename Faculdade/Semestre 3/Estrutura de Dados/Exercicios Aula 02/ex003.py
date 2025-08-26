""" Exercício 3: Menu de Opções com while, if, elif, else e break
Monte um menu simples que funcione até o usuário decidir sair.

As opções devem ser:

1 - Mostrar mensagem "Bem-vindo!"
2 - Mostrar mensagem "Ajuda solicitada..."
3 - Sair

O menu deve ficar se repetindo até o usuário escolher a opção 3.
Se o usuário escolher uma opção inválida, exiba "Opção inválida!".
Exemplo de execução:

1 - Mostrar mensagem "Bem-vindo!"
2 - Mostrar mensagem "Ajuda solicitada..."
3 - Sair
Digite uma opção: 1
Bem-vindo!
Digite uma opção: 2
Ajuda solicitada...
Digite uma opção: 5
Opção inválida!
Digite uma opção: 3
Encerrando... """

while True:
    print("1 - Mostrar mensagem 'Bem-vindo!'")
    print("2 - Mostrar mensagem 'Ajuda solicitada...'")
    print("3 - Sair")
    opcao = input("Digite uma opção: ")
    
    if opcao == '1':
        print("Bem-vindo!")
    elif opcao == '2':
        print("Ajuda solicitada...")
    elif opcao == '3':
        print("Encerrando...")
        break
    else:
        print("Opção inválida!")