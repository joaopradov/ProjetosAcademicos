""" Exercício 3: Verificação de Idade (condicional simples e booleano)
Crie um código que:

Peça ao usuário a idade (int).
Verifique se ele é maior de idade (idade >= 18).
Guarde o resultado da verificação em uma variável booleana.
Mostre no final:
Se é maior ou menor de idade.
O valor da variável booleana.
Exemplo de execução:

Digite sua idade: 20
Você é maior de idade? True """

idade = int(input('Digite sua idade: '))
maior_de_idade = idade >= 18
print(f'Você é maior de idade? {maior_de_idade}')