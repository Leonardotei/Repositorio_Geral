//  1 - Criar uma função que exibe "Olá, mundo!" no console.
function exibirOlaMundo(){
    console.log('Olá, mundo!');
}
exibirOlaMundo();


//  2 - Criar uma função que recebe um nome como parâmetro e exibe "Olá, [nome]!" no console.
function exibirOlaNome(nome){
    console.log(`Olá, ${nome}!`);
}
exibirOlaNome('Leonardo');


//  3 - Criar uma função que recebe um número como parâmetro e retorna o dobro desse número.
function dobraNumero(numero){
    console.log(numero * 2);
}
dobraNumero(6);

/*Exemplo alura
function calcularDobro(numero) {
  return numero * 2;
}

let resultadoDobro = calcularDobro(5);
console.log(resultadoDobro);*/


//  4 - Criar uma função que recebe três números como parâmetros e retorna a média deles.
function calcularMedia(valor1, valor2, valor3){
    media = (valor1 + valor2 + valor3) / 3;
}

calcularMedia(2, 3, 7);
console.log(media);

/*Exemplo Alura
function calcularMedia(a, b, c) {
  return (a + b + c) / 3;
}

let media = calcularMedia(4, 7, 10);
console.log(media);*/


//  5 - Criar uma função que recebe dois números como parâmetros e retorna o maior deles.
function encontrarMaior(numero1, numero2) {
    return numero1 > numero2 ? numero1 : numero2;
  }
  
  let maiorNumero = encontrarMaior(15, 9);
  console.log(maiorNumero);


//  6 - Criar uma função que recebe um número como parâmetro e retorna o resultado da multiplicação desse número por ele mesmo.
function quadrado(valor){
    return valor * valor;
}

let dobro = quadrado(3);
console.log(dobro);