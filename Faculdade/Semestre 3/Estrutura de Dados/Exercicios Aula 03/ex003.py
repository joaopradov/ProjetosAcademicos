""" 3. Crie uma função chamada media_notas que receba uma quantidade variável de notas (usando *args) e retorne a média dos valores passados. """

def media_notas(*notas):
    if not notas:
        return 0
    return sum(notas) / len(notas)

media_notas(7, 8, 9)  # 8.0
print(f'A média das notas é: {media_notas(7, 8, 9)}')