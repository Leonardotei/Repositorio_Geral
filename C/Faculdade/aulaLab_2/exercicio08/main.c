#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero para informar o dia da semana:");
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
            printf("Sabado \n");
            break;
        default:
            printf("Entrada incorreta");
    }
    return 0;
}
