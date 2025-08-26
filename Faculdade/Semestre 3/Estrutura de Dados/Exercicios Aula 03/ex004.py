""" 4. Crie uma função chamada contar_vogais que receba uma string como parâmetro e retorne a quantidade de vogais (a, e, i, o, u) presentes na string. Desconsidere letras maiúsculas e acentos.

Exemplo de uso:

contar_vogais("Programação")  # 5 """

def contar_vogais(texto):
    texto = texto.lower()
    vogais = "aeiou"
    contador = 0
    for letra in texto:
        if letra in vogais:
            contador += 1
    return contador

palavra = input("Digite uma palavra: ")
print(f"A quantidade de vogais em '{palavra}' é: {contar_vogais(palavra)}")