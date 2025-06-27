function calcularMedia() {
    let quantidade = parseInt(prompt("Quantos números vai digitar?"));
    if (quantidade <= 0) {
        console.log("Digite uma quantidade válida!");
        return;
    }

    let soma = 0;
    for (let i = 0; i < quantidade; i++) {
        const numero = parseFloat(prompt(`Digite o ${i + 1}º número`));
        if (numero < 0) {
            console.log("Digite um número válido");
            return;
        }
        soma += numero;
    }

    let media = soma / quantidade;
    console.log(`A média do(s) ${quantidade} número(s) digitado(s) é: ${media}`);
}

calcularMedia();
