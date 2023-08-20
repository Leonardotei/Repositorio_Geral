#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int continuar=1;

    do{
    printf("Menu de exercicios de programação!!\n\n");
    printf("1.Cálculo do combustível.\n2.Aprovação de alunos.\n3.Quantidade de números naturais.\n");
    printf("4.Relação de idade / sexo.\n5.Ano bissexto.\n6.Soma de números.\n");
    printf("7.Números pares.\n8.Dia da semana.\n9.CALCULADORA.\n\n0.Finalizar programa.\n\n");

    printf("Selecione qual função quer execultar:");
    scanf("%d", &continuar);
    system("cls || clear");

    switch(continuar){

    case 1:
        exercicio1();
        break;
    case 2:
        exercicio2();
        break;
    case 3:
        exercicio3();
        break;
    case 4:
        exercicio4();
        break;
    case 5:
        exercicio5();
        break;
    case 6:
        exercicio6();
        break;
    case 7:
        exercicio7();
        break;
    case 8:
        exercicio8();
        break;
    case 9:
        calculadora();
        break;
    case 0:
        encerrar();
        break;
    default:
        printf("INVALIDO");
        break;
        }
    }while(continuar);
}

void exercicio1()
{
int tipo;
    float quant, pagar;

    printf("\t1-Alcool / 2-Disel / 3-Gasolina \n\n");
    printf("Qual o tipo de combustivel:");
    scanf("%d", &tipo);

    printf("Digite a quantidade em litros:");
    scanf("%f", &quant);

    switch(tipo){
        case 1:
            pagar = quant * 1.7997;
            break;
        case 2:
            pagar = quant * 0.9798;
            break;
        case 3:
            pagar = quant * 2.1009;
            break;
        default:
            printf("Entrada incorreta do tipo de combustivel.");
    }
    printf("\nO valor a ser pago: %f\n\n", pagar);
    encerrar();
}

void exercicio2()
{
    int qtde_alunos, contador;
    float nota1, nota2, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtde_alunos);

        contador = 1;
        while(contador<=qtde_alunos){

        printf("Digite as notas do aluno %d \n", contador);

        printf("Digite a nota1:");
        scanf("%f", &nota1);

        printf("Digite a nota2:");
        scanf("%f", &nota2);

        media = (nota1+nota2)/2;

            if(media>=5){
                printf("Aprovado \n");
            }else{
            printf("Reprovado \n");
            }
            contador++;
        }
    encerrar();
}

void exercicio3()
{
    int n, cont, apres;

    apres = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("\n");

    cont = 1;
    while(cont <= n){
        printf("%d, ", apres);
        apres = apres + 2;
        cont++;
    }
    printf("\n\n");
    encerrar();
}

void exercicio4()
{
    int idade, maior;
    float contf=0, cont_intervalo=0, perc11_f_intervalo=0;
    char sexo;
    printf("Digite -1 para finalizar.\n\n");
    printf("Digite a idade: ");
    scanf("%d", &idade);

    maior = idade;

    while(idade != -1){
        setbuf(stdin, NULL);
        printf("Digite o sexo: (f-feminino/m-masculino):");
        scanf("%c", &sexo);

        if (sexo=='f'){
            contf++;
        }
        if (sexo=='f' && (idade >= 18 && idade <=35)){
            cont_intervalo++;
        }

        printf("Digite a Idade: ");
        scanf("%d", &idade);

        if (idade > maior){
            maior = idade;
        }
    }
    perc11_f_intervalo = (cont_intervalo/contf)*100;

    printf("Programa finalizado! \n");
    printf("A maior idade digitada: %d \n", maior);
    printf("A quantidade de feminino: %.0f \n", contf);
    printf("A quantidade de feminino no inter 18-35: %.0f \n", cont_intervalo);
    printf("O percentual solicitado: %.2f \n", perc11_f_intervalo);

    encerrar();
}

void exercicio5()
{
    int anoNasc, valida;

    do{
        printf("Digite o ano de nascimento: \n");
        scanf("%d", &anoNasc);
    }while(anoNasc < 1890 || anoNasc > 2020);

    valida = anoNasc % 4;

    if (valida == 0){
        printf("Ano Bissexto");
    }else{
    printf("Ano Não Bissexto");
    }
    encerrar();
}

void exercicio6()
{
    int num,cont, soma=0;

    printf("Digite um número positivo: ");
    scanf("%d", &num);

    cont = 1;

    do{
        soma=soma+cont;
        cont++;
    }while(cont <= num);

    printf("A soma de todos os numeros de 1 a %d - %d\n\n", num, soma);

    encerrar();
}

void exercicio7()
{
    int num, cont, soma=0;

    printf("Digite um número positivo: ");
    scanf("%d", &num);

    for(cont=1; cont<=num; cont++){
        soma=soma+cont;
    }

    printf("\nA soma de todos os números de 1 a %d - %d\n\n", num, soma);
    encerrar();
}

void exercicio8()
{
    int num;

    printf("Digite um número para informar o dia  da semana:");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("Domingo \n");
            break;
        case 2:
            printf("Segunda-feira \n");
            break;
        case 3:
            printf("Terça-feira \n");
            break;
        case 4:
            printf("Quarta-feira \n");
            break;
        case 5:
            printf("Quinta-feira \n");
            break;
        case 6:
            printf("Sexta-feira \n");
            break;
        case 7:
            printf("Sábado \n");
            break;
        default:
/**<  */            printf("Digito inválido.\n");
            exercicio8();
            break;
    }
    encerrar();
}

void calculadora()
{
    float valor1, valor2;
    int operacao, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Escolha qual operação matemática deseja realizar: \n\n");
    printf("1.Adição\n2.Subitração\n3.Multiplicação\n4.Divisão\n");
    scanf("%d", &operacao);

    switch(operacao){
    case 1:
        resultado = valor1 + valor2;
        break;
    case 2:
        resultado = valor1 - valor2;
        break;
    case 3:
        resultado = valor1 * valor2;
        break;
    case 4:
        resultado = valor1 / valor2;
        break;
    default:
        printf("Entrada inválida!");
        system("pause");
        system("cls || clear");
        return(calculadora());
    }
    printf("O resultado é: %d\n\n", resultado);
    encerrar();
}
void encerrar()
{
    system("pause");
    system("cls || clear");
    return 0;
}
