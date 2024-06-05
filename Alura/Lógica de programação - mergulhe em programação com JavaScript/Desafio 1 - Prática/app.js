alert('1 - Mostre um alerta com a mensagem "Boas vindas ao nosso site!".');
alert('Boas vindas ao nosso site!');

alert('2 - Declare uma variável chamada nome e atribua a ela o valor "Lua".');
let nome = 'Lua';
console.log(`nome = ${nome}`);

alert('3 - Crie uma variável chamada idade e atribua a ela o valor 25.');
let idade = 25;
console.log(`idade = ${idade}`);

alert('4 - Defina uma variável numeroDeVendas e atribua a ela o valor 50.');
let numeroDeVendas = 50;
console.log(`numeroDeVendas = ${numeroDeVendas}`);

alert('5 - Defina uma variável saldoDisponivel e atribua a ela o valor 1000.');
let saldoDisponivel = 1000;
console.log(`saldoDisponivel = ${saldoDisponivel}`);

alert('6 - Exiba um alerta com o texto "Erro! Preencha todos os campos".');
alert('Erro! Preencha todos os campos');

alert('7 - Declare uma variável chamada mensagemDeErro e atribua a ela o valor "Erro! Preencha todos os campos" \nAgora exiba um alerta com o valor da variável mensagemDeErro.');
let mensagemDeErro = 'Erro! Preencha todos os campos';
console.log(`mensagemDeErro = ${mensagemDeErro}`);
alert(mensagemDeErro);

alert('8 - Use um prompt para perguntar o nome do usuário e armazená-lo na variável nome.');
let nomePrompt = prompt('Informe seu nome:');
console.log(`nomePrompt = ${nomePrompt}`);

alert('9 - Peça ao usuário para digitar sua idade usando um prompt e armazene-a na variável idade.');
let idadePrompt = prompt('Informe sua idade:');
console.log(`idadePrompt = ${idadePrompt}`);

alert('10 - Agora, caso a idade seja maior ou igual que 18, exiba um alerta com a mensagem "Pode tirar a habilitação!".');
if (idadePrompt > 18){
    alert('Já pode tirar habilitação');
}else{
    alert('Melhor ficar longe do volante');
}