""" 3. Função de Verificação de Número Par
Crie uma função eh_par() que receba um número e retorne True se ele for par, ou False caso contrário. """

def eh_par(numero):
    return numero % 2 == 0


n = int(input("Digite um número: "))

if eh_par(n):
    print(eh_par(n))
else:
    print(eh_par(n))
