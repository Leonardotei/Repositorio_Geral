#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
    char nome[30];
    int x, t, ca=0;
    FILE *f = fopen("nome_vogalA.txt", "w");
    printf("\n\t INFORME UM NOME : ");
    gets(nome);
    t=strlen(nome);
    for(x=0; x<=t-1; x++)
    {
        if (nome[x] == 'a' || nome[x] == 'A')
        ca++;
    }
    printf("\n O nome %s ", (nome));
    fprintf(f, "\nO nome informado foi: %s\n\n", (nome));
    printf("tem %d letras a.", ca);
    fprintf(f, "Este nome contem: %d letras 'a'", ca);
    printf("\n\n");

    fclose(f);
    printf("Nome gravado no arquivo!\n\n");
    system("pause");
    return 0;
}
