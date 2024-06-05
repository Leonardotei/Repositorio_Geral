#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char FRASE[40]; int x, tam;
    FILE *f= fopen("frase.txt", "w");
    printf("\nDIGITE UMA FRASE: ");
    gets(FRASE);
    tam=strlen(FRASE);
    while(tam>40)
    {
        printf("\nTAMANHO INVALIDO. MAXIMO 40 LETRAS");
        printf("\nDIGITE NOVAMENTE");
        gets(FRASE); tam=strlen(FRASE);
    }
    printf("\n\n");
    for(x=0; x<=tam;x++)
        printf("\n%c", FRASE[x]);
        printf("\n\n");
        fputs(FRASE, f);
        fclose(f);
        system("pause");
        return 0;
}
