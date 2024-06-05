#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, soma=0;

    printf("Digite um numero positivo: \n");
    scanf("%d", &num);

    //Exemplo: num = -> 1+2+3+4+5 = 15

    //inicio, final e passo
    for(cont=1; cont<=num; cont++){
        soma=soma+cont;
    }
    printf("A soma de todos os numeros de 1 a %d - %d", num, soma);

    return 0;
}
