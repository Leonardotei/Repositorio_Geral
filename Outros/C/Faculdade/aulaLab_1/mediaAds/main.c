#include <stdio.h>
#include <stdlib.h>

int main()
{
    float np1, np2, pim, mediaAds, faltas;

    printf("Nota 1: ");
    scanf("%f", &np1);

    printf("Nota 2: ");
    scanf("%f", &np2);

    printf("Nota PIM: ");
    scanf("%f", &pim);

    printf("Número de faltas: ");
    scanf("%f", &faltas);

    mediaAds = (np1 * 0.4) + (np2 * 0.4) + (pim * 0.2);
    faltas = (faltas * 100) / 50;

    if ((mediaAds >= 5) && (faltas < 25))
    {
        printf("Aprovado!");
    }
    else
    {
        printf("Reprovado!");
    }
    return 0;
}
