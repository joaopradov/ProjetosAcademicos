function exibirTextoNaTela(tag, texto) {
  let campo = document.querySelector(tag);
  if (campo) {
    campo.innerHTML = texto;
  }
}

function abrirFormulario() {
  // Remove fundo do jogo se tiver
  document.body.classList.remove("fundo-jogo");

  document.getElementById("conteudo").innerHTML = `
    <h2>Formulário de Valores</h2>
    <form id="formulario">
      ${[1, 2, 3, 4, 5].map(i => `
        <label for="valor${i}">Valor ${i}:</label>
        <input type="text" id="valor${i}" required><br>
      `).join('')}
      <button type="submit">Salvar em TXT</button>
    </form>
  `;

  document.getElementById("formulario").addEventListener("submit", function (e) {
    e.preventDefault();

    const valores = [];
    for (let i = 1; i <= 5; i++) {
      const valor = document.getElementById(`valor${i}`).value.trim();
      if (valor === "") {
        alert(`O campo Valor ${i} está vazio.`);
        return;
      }
      valores.push(valor);
    }

    const conteudo = valores.map((v, i) => `Valor ${i + 1}: ${v}`).join("\n");
    const blob = new Blob([conteudo], { type: "text/plain;charset=utf-8" });
    const link = document.createElement("a");
    link.href = URL.createObjectURL(blob);
    link.download = "valores.txt";
    link.click();
  });
}

let frutas = [];

function abrirFrutas() {
  // Remove fundo do jogo se tiver
  document.body.classList.remove("fundo-jogo");

  document.getElementById("conteudo").innerHTML = `
    <h2>Manipulando Frutas</h2>
    <input type="text" id="frutaInput" placeholder="Digite uma fruta" />
    <button onclick="adicionarFruta()">Adicionar</button>

    <h3>Frutas:</h3>
    <p id="listaFrutas">[ ]</p>

    <div class="botoes">
      <button onclick="metodo('push')">Push</button>
      <button onclick="metodo('pop')">Pop</button>
      <button onclick="metodo('shift')">Shift</button>
      <button onclick="metodo('unshift')">Unshift</button>
      <button onclick="verificarBanana()">Includes('banana')</button>
      <button onclick="mostrarIndex('uva')">IndexOf('uva')</button>
      <button onclick="mostrarJoin()">Join(', ')</button>
      <button onclick="mostrarSlice()">Slice(1, 3)</button>
      <button onclick="fazerSplice()">Splice(1, 1)</button>
      <button onclick="mapMaiusculas()">Map (MAIÚSCULAS)</button>
      <button onclick="filtrarGrandes()">Filter (>4 letras)</button>
    </div>

    <pre id="saida"></pre>
  `;
  atualizarLista();
}

function atualizarLista() {
  document.getElementById('listaFrutas').textContent = JSON.stringify(frutas);
}

function adicionarFruta() {
  const input = document.getElementById('frutaInput');
  const valor = input.value.trim();
  if (valor) {
    frutas.push(valor);
    input.value = "";
    atualizarLista();
  }
}

function metodo(acao) {
  if (acao === 'push') {
    const fruta = prompt("Adicionar ao final:");
    if (fruta) frutas.push(fruta);
  } else if (acao === 'pop') {
    frutas.pop();
  } else if (acao === 'shift') {
    frutas.shift();
  } else if (acao === 'unshift') {
    const fruta = prompt("Adicionar ao início:");
    if (fruta) frutas.unshift(fruta);
  }
  atualizarLista();
}

function verificarBanana() {
  const msg = frutas.includes('banana') ? "🍌 Banana está no array!" : "🚫 Banana NÃO está no array.";
  document.getElementById('saida').textContent = msg;
}

function mostrarIndex(fruta) {
  const index = frutas.indexOf(fruta);
  const msg = index !== -1
    ? `'${fruta}' está na posição ${index}.`
    : `'${fruta}' não foi encontrada.`;
  document.getElementById('saida').textContent = msg;
}

function mostrarJoin() {
  document.getElementById('saida').textContent = "join(', '): " + frutas.join(', ');
}

function mostrarSlice() {
  const fatiado = frutas.slice(1, 3);
  document.getElementById('saida').textContent = "slice(1, 3): " + JSON.stringify(fatiado);
}

function fazerSplice() {
  frutas.splice(1, 1);
  atualizarLista();
  document.getElementById('saida').textContent = "splice(1, 1) aplicado.";
}

function mapMaiusculas() {
  const maiusculas = frutas.map(f => f.toUpperCase());
  document.getElementById('saida').textContent = "map: " + JSON.stringify(maiusculas);
}

function filtrarGrandes() {
  const grandes = frutas.filter(f => f.length > 4);
  document.getElementById('saida').textContent = "filter (>4 letras): " + JSON.stringify(grandes);
}

let listaDeNumerosSorteados = [];
let numeroLimite = 10;
let numeroSecreto = gerarNumeroAleatorio();
let tentativas = 1;

function abrirJogo() {
  // Adiciona fundo do jogo
  document.body.classList.add("fundo-jogo");

  document.getElementById("conteudo").innerHTML = `
    <div class="container__conteudo">
      <div class="container__informacoes">
        <div class="container__texto">
          <h2>Adivinhe o <span class="container__texto-azul">número secreto</span></h2>
          <p class="texto__paragrafo">Escolha um número entre 1 a 10</p>
        </div>
        <input type="number" min="1" max="10" class="container__input">
        <div class="chute container__botoes">
          <button onclick="verificarChute()" class="container__botao">Chutar</button>
          <button onclick="reiniciarJogo()" id="reiniciar" class="container__botao" disabled>Novo jogo</button>
        </div>
      </div>
      <div class="container__imagem">
        <img src="ia.png" alt="Pessoa olhando para a IA" class="container__imagem-pessoa" />
      </div>
    </div>
  `;
  exibirMensagemInicial();
}

function exibirMensagemInicial() {
  exibirTextoNaTela('h2', 'Jogo do número secreto');
  exibirTextoNaTela('p', 'Escolha um número entre 1 e 10');
}

function verificarChute() {
  let chute = document.querySelector('input').value;
  if (chute == numeroSecreto) {
    exibirTextoNaTela('h2', 'Acertou!');
    let palavraTentativa = tentativas > 1 ? 'tentativas' : 'tentativa';
    exibirTextoNaTela('p', `Você descobriu o número secreto com ${tentativas} ${palavraTentativa}!`);
    document.getElementById('reiniciar').removeAttribute('disabled');
  } else {
    exibirTextoNaTela('p', chute > numeroSecreto ? 'O número é menor' : 'O número é maior');
    tentativas++;
    limparCampo();
  }
}

function gerarNumeroAleatorio() {
  let numeroEscolhido = parseInt(Math.random() * numeroLimite + 1);
  if (listaDeNumerosSorteados.length == numeroLimite) listaDeNumerosSorteados = [];
  if (listaDeNumerosSorteados.includes(numeroEscolhido)) {
    return gerarNumeroAleatorio();
  } else {
    listaDeNumerosSorteados.push(numeroEscolhido);
    return numeroEscolhido;
  }
}

function limparCampo() {
  let chute = document.querySelector('input');
  chute.value = '';
}

function reiniciarJogo() {
  numeroSecreto = gerarNumeroAleatorio();
  limparCampo();
  tentativas = 1;
  exibirMensagemInicial();
  document.getElementById('reiniciar').setAttribute('disabled', true);
}
