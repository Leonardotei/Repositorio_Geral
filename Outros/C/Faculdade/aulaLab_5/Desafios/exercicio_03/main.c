#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i; char palavras[3][30];
    FILE *f= fopen("palavraOrdemInv.txt", "w");
    printf("\t--------------------------------\n");
    printf("\t|     Inversor de palavras     |\n");
    printf("\t--------------------------------\n\n");
    for (i=0;i<3;i++)
    {
        printf("Informe palavra %d: ", i+1);
        gets(palavras[i]);
    }
    printf("\n::: Palavras em ordem inversa :::\n\n");
    fputs("::: Palavras em ordem inversa :::\n\n", f);
    for(i=2;i>=0;i--)
    {
        printf("%s\n", palavras[i]);
        fprintf(f, "%s\n", palavras[i]);
    }
    fclose(f);
    printf("\nOrdem inversa gravada em arquivo!\n\n");
    system("pause");
    return 0;
}
