""" Exercício 1: Validador de Senha com while e break
Crie um programa que simule a entrada de uma senha correta.

O programa deve solicitar que o usuário digite a senha.
Enquanto a senha digitada for incorreta, ele deve continuar pedindo a senha.
Se a senha for correta ("1234"), o programa deve exibir a mensagem "Acesso permitido" e parar com break.
Digite a senha: 1111
Senha incorreta!
Digite a senha: 0000
Senha incorreta!
Digite a senha: 1234
Acesso permitido """

senha = '1234'
while True:
    entrada = input('Digite a senha: ')
    if entrada == senha:
        print('Acesso permitido')
        break
    else:
        print('Senha incorreta!')