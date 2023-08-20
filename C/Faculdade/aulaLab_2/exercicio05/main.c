#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nasc, valida;

    do{
        printf("Digite o ano de nascimento: \n");
        scanf("%d", &ano_nasc);
    }while(ano_nasc < 1890 || ano_nasc > 2020);

    valida = ano_nasc % 4;

    if (valida == 0){
        printf("Ano Bissexto");
    }else{
    printf("Ano Nao Bissexto");
    }
    return 0;
}
