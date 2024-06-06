alert('1 - Pergunte ao usuário qual é o dia da semana. \nSe a resposta for "Sábado" ou "Domingo", mostre "Bom fim de semana!". \nCaso contrário, mostre "Boa semana!".');

let diaSemana = prompt('Qual é o dia da semana?');

if (diaSemana == 'Sábado' || diaSemana == 'Domingo'){
    alert('Bom fim de semana!');
}else{
    alert('Boa semana!');
}


alert('2 - Verifique se um número digitado pelo usuário é positivo ou negativo. \nMostre um alerta informando.');
let numero = prompt('Informe um número: ');

if (numero >= 0){
    alert('O número é positivo!');
}else{
    alert('O número é negativo!');
}


alert('3 - Crie um sistema de pontuação para um jogo. \nSe a pontuação for maior ou igual a 100, mostre "Parabéns, você venceu!". \nCaso contrário, mostre "Tente novamente para ganhar.".');
let pontuacao = prompt('Informe sua pontuação:');
if (pontuacao >= 100){
    console.log('Parabéns, você venceu!');
}else{
    console.log('Tente novamente para ganhar.');
}


alert('4 - Crie uma mensagem que informa o usuário sobre o saldo da conta, usando uma template string para incluir o valor do saldo.');
let saldoConta = 750;
alert(`Seu saldo é de R$${saldoConta}.`);


alert('5 - Peça ao usuário para inserir seu nome usando prompt. Em seguida, mostre um alerta de boas-vindas usando esse nome.');
let nomeUsuario = prompt('Informe seu nome:');
alert(`Boas vindas ${nomeUsuario}`);