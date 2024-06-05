#include <stdio.h>
#include <stdlib.h>

int main()
{
    int velocMaxima, velocMotor, diferenca, multa;

    velocMaxima = 70;

    printf("Digite sua velocidade (km/h): ");
    scanf("%d", &velocMotor);

    diferenca = velocMotor - velocMaxima;

    if (diferenca > 0){
        multa = diferenca * 5;
        printf("Voce ultrapassou a velocidade em %d km/h, e devera pagar multa de R$ %d,00 \n\n", diferenca, multa);
        system ("pause");
        system("cls || clear");
        return main();
    }else{
        printf("Voce esta dentro da velocidade permitida. \n\n");
        system ("pause");
        system("cls || clear");
        return main();
           }
    return 0;
}
