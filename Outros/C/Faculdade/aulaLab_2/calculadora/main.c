#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float valor1, valor2;
    int operacao, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Escolha qual opera��o matem�tica deseja realizar: \n\n");
    printf("1.Adi��o\n2.Subitra��o\n3.Multiplica��o\n4.Divis�o\n");
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
        printf("Entrada inv�lida!");
        system("pause");
        return(main());
    }
    printf("O resultado �: %d", resultado);
    return 0;
}
