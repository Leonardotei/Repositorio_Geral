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
        return(main());
    }
    printf("O resultado é: %d", resultado);
    return 0;
}
