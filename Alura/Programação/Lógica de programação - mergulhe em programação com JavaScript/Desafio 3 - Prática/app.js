alert('1 - Crie um contador que comece em 1 e vá até 10 usando um loop while. Mostre cada número.');

let contador1 = 0;

while (contador1 < 10){
    contador1 ++;
    console.log(contador1);
}


alert('2 - Crie um contador que começa em 10 e vá até 0 usando um loop while. Mostre cada número.');
let contador2 = 10;

while (contador2 >= 0){
    console.log(contador2);
    contador2 --;
}


alert('3 - Crie um programa de contagem regressiva. Peça um número e conte deste número até 0, usando um loop while no console do navegador.');

let numeroRegressiva = prompt('Informe qual será o número para a contagem regressiva.');

while(numeroRegressiva >= 0){
    console.log(numeroRegressiva);
    numeroRegressiva--;
}
console.log('Fim da contagem!');


alert('4 - Crie um programa de contagem progressiva. Peça um número e conte de 0 até esse número, usando um loop while no console do navegador.');

let numeroProgressiva = prompt('Informe qual será o número para a contagem progressiva.');
let numeroInicial = 0;

while(numeroInicial <= numeroProgressiva){
    console.log(numeroInicial);
    numeroInicial++;
}
console.log('Fim da contagem!');