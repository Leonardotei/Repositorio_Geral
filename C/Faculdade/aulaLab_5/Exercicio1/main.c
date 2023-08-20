#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include "cabecalho.h"

int main(){
    montarCabecalho();
    setlocale(LC_ALL, "");

    char login[10];
    char senha[5];
    int s;

    printf("\nDigite seu Usuário: ");
    scanf("%s", login);

    printf("\n\nDigite sua senha: ");
    for (s=0;s<5;s++) {
        senha[s]=getch();
        putchar ('*');
    }
    printf("\nObrigado por digitar as informações solicitadas!\n");
    system("pause");
}
