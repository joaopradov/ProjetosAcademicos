""" 4. Função para Calcular Média
Crie uma função calcular_media() que receba três notas e retorne a média aritmética delas. """

def calcular_media(nota1, nota2, nota3):
    return (nota1 + nota2 + nota3) / 3

n1 = float(input('Primeira nota: '))
n2 = float(input('Segunda nota: '))
n3 = float(input('Terceira nota: '))

media = calcular_media(n1, n2, n3)
print(f'A média é: {media:.2f}')