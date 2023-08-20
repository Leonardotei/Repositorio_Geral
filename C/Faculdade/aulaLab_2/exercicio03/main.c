#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont, apres;

    apres = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    cont = 1;
    while(cont <= n){
        printf("%d", apres);
        apres = apres + 2;
        cont++;
    }
    return 0;
}
