""" 5. Crie uma função chamada substituir_negativos que receba uma lista de números inteiros e retorne uma nova lista onde todos os números negativos foram substituídos por 0.

Exemplo de uso:

substituir_negativos([3, -1, 4, -7, 0])  # Deve retornar [3, 0, 4, 0, 0] """

def substituir_negativos(numeros):
    for idx, numero in enumerate(numeros):
        if numero < 0:
            numeros[idx] = 0
    return numeros

valores = [3, -1, 4, -7, 0]
print(f'O vetor era: {valores}')
print(f'O vetor com negativos substituídos é: {substituir_negativos(valores)}')