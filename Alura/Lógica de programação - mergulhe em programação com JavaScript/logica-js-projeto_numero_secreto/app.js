alert('Boas vindas ao jogo do número secreto');

let numeroSecreto = 8;

let chute = prompt('Escolha um número entre 1 e 10');
console.log('O número do chute é: ' + chute)

console.log('Resultado da comparação:', chute == numeroSecreto);

if (chute == numeroSecreto){
    alert(`Isso ai! Você descobriu o número secreto: ${numeroSecreto}`);
}else{
    alert('Você errou :(')
    console.log('O número secreto é: ' + numeroSecreto);
}