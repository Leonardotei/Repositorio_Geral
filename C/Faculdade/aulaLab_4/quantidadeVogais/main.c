#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char nome[20],M;
    int x, t, soma=0;
    float percent, t2=0;

    printf("Digite um nome: ");
    gets(nome);
    t=strlen(nome);

    for(x=0;x<=t;x++)
        if(nome[x]=='a' || nome[x]=='A' || nome[x]=='e' || nome[x]=='E' || nome[x]=='i' || nome[x]=='I' || nome[x]=='o' || nome[x]=='O' || nome[x]=='u' || nome[x]=='U')
           soma++;
           FILE *f=fopen("vogais.txt", "w");
           printf("\n O nome tem %d caracteres", t);
           printf("\n O nome tem %d vogais", soma);
           fputs(t, f);
           fputs(soma, f);

           for(x=0;x<=t2;x++)
           {
               t2=strlen(nome);
               percent=soma*100/t2;
           }
           printf("\n %f porcento do nome %s sao vogais", percent, nome);
           printf("\n\n");
           //fputs(percent, f);
           fclose(f);
           system("pause");
           return 0;
}
