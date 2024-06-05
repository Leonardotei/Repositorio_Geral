#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char pRef[30], p1[30], p2[30];
    printf("\t--------------------------------\n");
    printf("\t|   COMPARADOR DE PALAVRAS     |\n");
    printf("\t--------------------------------\n");
    printf("\nInforme uma palavra de referência: ");
    gets(pRef);
    if(strcmp(pRef, "0")==0)
    {
        printf("\n\nObrigado por ultilzar o programa!\n\n");
        sleep(3);
        return 0;
    }
    printf("\nInforme palavra 1: ");
    gets(p1);
    printf("informe palavra 2: ");
    gets(p2);

    if(strcmp(p1,p2)==0)
    {
        printf("\n-Palavra '%s' e '%s' são iguais.\n", p1, p2);
    }else{
        printf("\n-Palavra '%s' e '%s' são diferentes.\n", p1, p2);
    }
    if(strcmp(p1,pRef)==0)
    {
        printf("\n- Palavra 1 '%s' é igual a palavra de referência (%s).\n", p1, pRef);
    }else{
        printf("\n- Palavra 1 '%s' é diferente de '%s'.\n",p1, pRef);
    }
    if(strcmp(p2,pRef)==0)
    {
        printf("\n- Palavra 2 '%s' é igual a palavra de referência (%s).\n\n", p2, pRef);
    }else{
        printf("\n- Palavra 2 '%s' é diferente da palavra de referência (%s).\n\n", p2, pRef);
    }
    printf("\nDigite o número '0' na palavra referência, para finalizar o programa.\n\n");
    system("pause");
    system("clear || cls");
    return main();
}
