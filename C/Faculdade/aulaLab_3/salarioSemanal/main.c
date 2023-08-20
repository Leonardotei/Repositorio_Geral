#include <stdio.h>
#include <stdlib.h>

int main()
{
    float totalReceber, horaExtra50, horaExtra100, valorHora;
    int horasTrabalhadas;

    printf("Informe quanto voce recebe por hora trabalhada: ");
    scanf("%f", &valorHora);
    printf("Informe quantas horas voce trabalhou nesta semana: ");
    scanf("%d", &horasTrabalhadas);

    if(horasTrabalhadas<=40){
        totalReceber = horasTrabalhadas * valorHora;
        printf("\nVoce trabalhou %d horas, e recebera R$%.2f \n\n", horasTrabalhadas, totalReceber);
    }
    if(horasTrabalhadas >40 && horasTrabalhadas<=60){
        horaExtra50 = ((horasTrabalhadas - 40) * valorHora) * 0.5;
        totalReceber = (horasTrabalhadas * valorHora) + horaExtra50;
        printf("\nVoce trabalhou %d horas, e recebera R$%.2f \n\n", horasTrabalhadas, totalReceber);
    }
    if(horasTrabalhadas >60){
        horaExtra50 = (20 * valorHora) * 0.5;
        horaExtra100 = ((horasTrabalhadas - 60) * valorHora) * 2;
        totalReceber = (horasTrabalhadas * valorHora) + horaExtra50 + horaExtra100;
        printf("\nVoce trabalhou %d horas, e recebera R$%.2f. \n\n", horasTrabalhadas, totalReceber);
    }
    system("pause");
    system("cls || clear");
    return main();
}

