#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    FILE *f= fopen("valoresInversos.txt", "w");
    int i, vetor[5];
    printf("\t--------------------------------\n");
    printf("\t|      Inversor de valores     |\n");
    printf("\t--------------------------------\n\n");
    for (i=0;i<5;i++)
    {
        printf("[%d] Valor inteiro= ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("\n::: Valores originais :::\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("\n::: Valores na ordem inversa :::\n");
    fputs("::: Valores na ordem inversa :::\n", f);
    for(i=4;i>=0;i--)
    {
        printf("%d\n", vetor[i]);
        fprintf(f,"%d\n",vetor[i]);
    }
    fclose(f);
    printf("\nValores gravados no arquivo.\n\n");
    system("pause");
    return 0;
}
