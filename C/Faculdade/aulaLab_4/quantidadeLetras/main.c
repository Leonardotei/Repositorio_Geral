#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

main()
{
    int x, tam;
    char nome[30];
    FILE *f = fopen("relatorioNomes.txt", "w");
    fputs("Os nomes digitados foram: \n", f);
    for (x=1; x <= 3; x++)
    {
        printf("Digite um nome: ");
        gets(nome);
        tam = strlen(nome);
        printf("\nEsse nome tem %d\ letras.\n\n", tam);
        fputs("\n", f);
        fputs(nome, f);
    }
    fclose(f);
    printf("\n\n");
    system("relatorioNomes.txt");
    system("pause");
    return 0;
}
