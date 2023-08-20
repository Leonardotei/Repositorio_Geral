#include <stdio.h>
#include <stdlib.h>

int main()
{
    do{
        int lados, valorLado1, valorLado2, resultado;

        printf("CALCULE A AREA DE UM POLIGONO! \n\n\n Quantos lados tem o poligono? (3,4 ou 6): ");
        scanf("%d", &lados);
        system ("cls || clear");

    switch(lados){

    case 3:
        printf("E um triangulo.\n\nDigite as medidas dos lados.\n Lado 1: ");
        scanf("%d", &valorLado1);
        printf("Lado 2: ");
        scanf("%d", &valorLado2);

        resultado = (valorLado1 * valorLado2) * 1.73 / 4;

        printf("A area desse triangulo e %d \n\n" ,resultado);
        system("pause");
        system("cls || clear");
        break;

    case 4:
        printf("E um quadrado.\n\nDigite as medidas dos lados.\n Lado 1: ");
        scanf("%d", &valorLado1);
        printf("Lado 2: ");
        scanf("%d", &valorLado2);

        resultado = valorLado1 * valorLado2;

        printf("A area do quadrado e %d \n\n", resultado);
        system("pause");
        system("cls || clear");
        break;

    case 6:
        printf("\nE um hexagono.\n\nDigite as medidas dos lados.\n Lado 1: ");
        scanf("%d", &valorLado1);
        printf("Lado 2: ");
        scanf("%d", &valorLado2);

        resultado = 6 * valorLado1 * valorLado2 * 1.73 / 4;

        printf("A area do hexagono e %d \n\n", resultado);
        system("pause");
        system("cls || clear");
        break;

    default:
        printf("Nao sei calcular a area.\n");
        system ("pause");
        system("cls || clear");
        break;
        }
}while(main);
}



printf("Digite as horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    do{
        valorHora = horasTrabalhadas * 2;
        printf("Voce ira receber %d por %d horas trabalhadas", valorHora, horasTrabalhadas);
    }
    while(horasTrabalhadas>40);
    do{
        valorHora = horasTrabalhadas*2;
        horaExtra = valorHora * 0.5;
        printf("Voce ira receber %d por %d horas trabalhadas", horaExtra, horasTrabalhadas);
    }while(horasTrabalhadas >60);
