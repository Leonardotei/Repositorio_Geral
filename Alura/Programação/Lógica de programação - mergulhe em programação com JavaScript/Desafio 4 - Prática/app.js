alert('1 - Crie um programa que utilize o console.log para exibir uma mensagem de boas-vindas.');

console.log('Boas-vindas!');


alert('2 - Crie uma variável chamada "nome" e atribua a ela o seu nome. Em seguida, utilize o console.log para exibir a mensagem "Olá, [seu nome]!" no console do navegador.');

let nome = 'Leonardo';
console.log(`Olá, ${nome}!`);


alert('3 - Crie uma variável chamada "nome" e atribua a ela o seu nome. Em seguida, utilize o alert para exibir a mensagem "Olá, [seu nome]!".');

alert(`Olá, ${nome}!`);


alert('4 - Utilize o prompt e faça a seguinte pergunta: Qual a linguagem de programação que você mais gosta?. Em seguida, armazene a resposta em uma variável e mostre no console do navegador.');

let linguagemFavorita = prompt('Qual a linguagem de programação que você mais gosta?');
console.log(linguagemFavorita);


alert('5 - Crie uma variável chamada "valor1" e outra chamada "valor2", atribuindo a elas valores numéricos de sua escolha. \nEm seguida, realize a soma desses dois valores e armazene o resultado em uma terceira variável chamada "resultado". \nUtilize o console.log para mostrar a mensagem "A soma de [valor1] e [valor2] é igual a [resultado]." no console.');

let valor1 = 5, valor2 = 10;
let resultado = valor1 + valor2;

console.log(`A soma de ${valor1} e ${valor2} é igual a ${resultado}.`);


alert('6 - Crie uma variável chamada "valor1" e outra chamada "valor2", atribuindo a elas valores numéricos de sua escolha. Em seguida, realize a subtração desses dois valores e armazene o resultado em uma terceira variável chamada "resultado". Utilize o console.log para mostrar a mensagem "A diferença entre [valor1] e [valor2] é igual a [resultado]." no console.');

valor1 = 20, valor2 =15;
resultado = valor1 - valor2;

console.log(`A diferença entre ${valor1} e ${valor2} é igual a ${resultado}.`);


alert('7 - Peça ao usuário para inserir sua idade com prompt. Com base na idade inserida, utilize um if para verificar se a pessoa é maior ou menor de idade, exibindo uma mensagem apropriada no console.');

let idade = prompt('Informe sua idade:');
if(idade >= 18){
    console.log('Maior de idade.');
}else{
    console.log('Menor de idade.');
}


alert('8 - Crie uma variável "numero" e peça um valor com prompt verifique se é positivo, negativo ou zero. Use if-else para imprimir a respectiva mensagem.');

let numeroPrompt = prompt('Informe um número:');
if(numeroPrompt < 0){
    console.log('Negativo');
}else if(numeroPrompt > 0){
    console.log('Positivo');
}else{
    console.log('Zero');
}


alert('9 - Use um loop while para imprimir os números de 1 a 10 no console.');

let numeroLoop = 0;

while(numeroLoop < 10){
    numeroLoop ++;
    console.log(numeroLoop);
}



alert('10 - Crie uma variável "nota" e atribua um valor numérico a ela. Use if-else para determinar se a nota é maior ou igual a 7 e exiba "Aprovado" ou "Reprovado" no console.');

let nota = 8;
if(nota >= 7){
    console.log('Aprovado');
}else{
    console.log('Reprovado');
}


alert('11 - Use o Math.random para gerar qualquer número aleatório e exiba esse número no console.');

let numeroAleatorio = Math.random();
console.log(numeroAleatorio);


alert('12 - Use o Math.random para gerar um número inteiro entre 1 e 10 e exiba esse número no console.');

let aleatorio1a10 = parseInt(Math.random() * 10) + 1;
console.log(aleatorio1a10);


alert('13 - Use o Math.random para gerar um número inteiro entre 1 e 1000 e exiba esse número no console.');

let aleatorio1a1000 = parseInt(Math.random() * 1000) + 1;
console.log(aleatorio1a1000);