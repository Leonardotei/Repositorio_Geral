//  1 - Crie uma função que calcule o índice de massa corporal (IMC) de uma pessoa, a partir de sua altura, em metros, e peso, em quilogramas, que serão recebidos como parâmetro.
function massaCorporal(altura, peso){
  let IMC = peso / Math.pow(altura, 2);
  return IMC;
}

let desafio1 = massaCorporal(1.7, 53);
console.log(desafio1);

//  2 - Crie uma função que calcule o valor do fatorial de um número passado como parâmetro.
function valorFatorial(numeroFatorial){
  if (numeroFatorial === 0 || numeroFatorial === 1) {
    return 1;
  }

  let fatorial = 1;
  for (let i = 2; i <= numeroFatorial; i++) {
    fatorial *= i;
  }
  return fatorial;
}

let desafio2 = valorFatorial(13);
console.log(desafio2);


//  3 - Crie uma função que converte um valor em dólar, passado como parâmetro, e retorna o valor equivalente em reais. Para isso, considere a cotação do dólar igual a R$4,80.
function converterReal(valorDolar){
  converte = valorDolar * 4.80;
  return converte.toFixed(2);
}

let desafio3 = converterReal(36);
console.log(desafio3);

//  4 - Crie uma função que mostre na tela a área e o perímetro de uma sala retangular, utilizando altura e largura que serão dadas como parâmetro.
function calcularAreaPerimetroSalaRetangular(altura, largura) {
  let area = altura * largura;
  let perimetro = 2 * (altura + largura);
  
  console.log(`Área da sala: ${area} metros quadrados`);
  console.log(`Perímetro da sala: ${perimetro} metros`);
}

// Exemplo de uso
let altura = 3; // em metros
let largura = 5; // em metros
calcularAreaPerimetroSalaRetangular(altura, largura);


//  5 - Crie uma função que mostre na tela a área e o perímetro de uma sala circular, utilizando seu raio que será fornecido como parâmetro. Considere Pi = 3,14.
function calcularAreaPerimetroSalaCircular(raio) {
  let area = Math.PI * raio * raio;
  let perimetro = 2 * Math.PI * raio;
  
  console.log(`Área da sala circular: ${area.toFixed(2)} metros quadrados`);
  console.log(`Perímetro da sala circular: ${perimetro.toFixed(2)} metros`);
}

// Exemplo de uso
let raio = 4; // em metros
calcularAreaPerimetroSalaCircular(raio);


//  6 - Crie uma função que mostre na tela a tabuada de um número dado como parâmetro.
function mostrarTabuada(numero) {
  for (let i = 1; i <= 10; i++) {
    let resultado = numero * i;
    console.log(`${numero} x ${i} = ${resultado}`);
  }
}

// Exemplo de uso
let numero = 7;
mostrarTabuada(numero);