#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipo;
    float quant, pagar;

    printf("1-Alcool / 2-Disel / 3-Gasolina: \n");
    printf("Qual o tipo de combustivel: \n");
    scanf("%d", &tipo);

    printf("Digite a quantidade em litros \n");
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
            printf("Entrada incorreta do tipo de combustivel ");
    }
    printf("O valor a ser pago: %f \n", pagar);
    return 0;
}
