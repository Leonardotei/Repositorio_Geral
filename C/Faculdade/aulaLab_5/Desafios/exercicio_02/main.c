#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int opcao, sigla;

    cabecalho();
    printf("1-Norte\n2-Nordeste\n3-Centro-Oeste\n");
    printf("4-Sul\n5-Suldeste\n\n6-Persolalizar\n0-Sair\n\n");
    printf("Escolha uma regi�o do Brasil: ");
    scanf("%i", &opcao);

    switch(opcao)
    {
        case 1:
        system("clear || cls");
        norte();
        break;
        case 2:
        system("clear || cls");
        nordeste();
        break;
        case 3:
        system("clear || cls");
        centro();
        case 4:
        system("clear || cls");
        suldeste();
        case 5:
        system("clear || cls");
        sul();
        case 6:
        system("clear || cls");
        personalizar();
        break;
        break;
        case 0:
        printf("\nObrigado por ultilizar o programa!\n");
        exit (0);
        default:
        printf("\nOp��o inv�lida\n\n");
        system("pause");
        system("clear || cls");
        return main();
    }
    printf("\n");
    system("pause");
    return 0;
}
void norte(opcao)
{
    cabecalho();
    printf("\t\t**Regi�o Norte**\n\n");
    printf("1-Amazonas (AM)\n2-Roraima (RR)\n3-Amap� (AP)\n");
    printf("4-Par� (PA)\n5-Tocantins (TO)\n6-Rond�nia (RO)\n");
    printf("7-Acre (AC)\n\n0-Voltar\n\n");
    printf("Escolha um estado: ");
    scanf("%d", &opcao);
    switch(opcao)
    {
    case 1:
        printf("\n\tAmazonense\n\n");
        limpar();
        break;
    case 2:
        printf("\n\tRoraimense\n\n");
        limpar();
        break;
    case 3:
        printf("\n\tAmapaense\n\n");
        limpar();
        break;
    case 4:
        printf("\n\tParaense\n\n");
        limpar();
        break;
    case 5:
        printf("\n\tTocantinense\n\n");
        limpar();
        break;
    case 6:
        printf("\n\tRondoniense\n\n");
        limpar();
        break;
    case 7:
        printf("\n\tAcriano\n\n");
        limpar();
        break;
    case 0:
        voltar();
    default:
        printf("\nOp��o inv�lida\n\n");
        system("pause");
        system("clear || cls");
        return norte(opcao);
    }
    return main();
}

void nordeste(opcao)
{
    cabecalho();
        printf("\t\t**Regi�o Nordeste**\n\n");
    printf("1-Maranh�o (MA))\n2-Piau� (PI)\n3-Cear� (CE)\n");
    printf("4-Rio Grande do Norte (RN)\n5-Pernambuco (PE)\n6-Para�ba (PB)\n");
    printf("7-Sergipe (SE)\n8-Alagoas (AL)\n9-Bahia (BA)\n\n0-Voltar\n\n");
    printf("Escolha um estado: ");
    scanf("%i", &opcao);
    switch(opcao)
    {
    case 1:
        printf("\n\tMaranhense\n\n");
        limpar();
        break;
    case 2:
        printf("\n\tPiauiense\n\n");
        limpar();
        break;
    case 3:
        printf("\n\tCearense\n\n");
        limpar();
        break;
    case 4:
        printf("\n\tPotiguar\n\n");
        limpar();
        break;
    case 5:
        printf("\n\tPernambucano\n\n");
        limpar();
        break;
    case 6:
        printf("\n\tParaibano\n\n");
        limpar();
        break;
    case 7:
        printf("\n\tSergipano\n\n");
        limpar();
        break;
    case 8:
        printf("\n\tAlagoano\n\n");
        limpar();
        break;
    case 9:
        printf("\n\tBaiano\n\n");
        limpar();
        break;
    case 0:
        voltar();
    default:
        printf("\nOp��o inv�lida\n\n");
        system("pause");
        system("clear || cls");
        return nordeste(opcao);
    }
    return main();
}

void centro(opcao)
{
    cabecalho();
    printf("\t\t**Regi�o Centro-Oeste**\n\n");
    printf("1-Mato Grosso (MT)\n2-Mato Grosso do Sul (MS)\n");
    printf("3-Goi�s (GO)\n4-Distrito Federal (DF)\n\n0-Voltar\n\n");
    printf("Escolha um estado: ");
    scanf("%i", &opcao);
    switch(opcao)
    {
    case 1:
        printf("\n\tMato-grossense\n\n");
        limpar();
        break;
    case 2:
        printf("\n\tSul-mato-grossense\n\n");
        limpar();
        break;
    case 3:
        printf("\n\tGoiano\n\n");
        limpar();
        break;
    case 4:
        printf("\n\tBrasiliense\n\n");
        limpar();
        break;
    case 0:
        voltar();
    default:
        printf("\nOp��o inv�lida\n\n");
        system("pause");
        system("clear || cls");
        return centro(opcao);
    }
    return main();
}

void suldeste(opcao)
{
    cabecalho();
    printf("\t\t**Regi�o Suldeste**\n\n");
    printf("1-S�o Paulo (SP)\n2-Rio de Janeiro (RJ)\n");
    printf("3-Esp�rito Santo (ES)\n4-Minas Gerais (MG)\n\n0-Voltar\n\n");
    printf("Escolha um estado: ");
    scanf("%i", &opcao);
    switch(opcao)
    {
    case 1:
        printf("\n\tPaulista\n\n");
        limpar();
        break;
    case 2:
        printf("\n\tCarioca\n\n");
        limpar();
        break;
    case 3:
        printf("\n\tCapixaba\n\n");
        limpar();
        break;
    case 4:
        printf("\n\tMineiro\n\n");
        limpar();
        break;
    case 0:
        voltar();
    default:
        printf("\nOp��o inv�lida\n\n");
        system("pause");
        system("clear || cls");
        return suldeste(opcao);
    }
    return main();
}

void sul(opcao)
{
    cabecalho();
    printf("\t\t**Regi�o Sul**\n\n");
    printf("1-Paran� (PR)\n2-Rio Grande do Sul (RS)\n");
    printf("3-Santa Catarina (SC)\n\n0-Voltar\n\n");
    printf("Escolha um estado: ");
    scanf("%i", &opcao);
    switch(opcao)
    {
    case 1:
        printf("\n\tParanaense\n\n");
        limpar();
        break;
    case 2:
        printf("\n\tGa�cho\n\n");
        limpar();
        break;
    case 3:
        printf("\n\tCatarinense\n\n");
        limpar();
        break;
    case 0:
        voltar();
    default:
        printf("\nOp��o inv�lida\n\n");
        system("pause");
        system("clear || cls");
        return sul(opcao);
    }
    return main();
}

void cabecalho()
{
    printf("\t--------------------------------\n");
    printf("\t|     Adjetivos Gent�licos     |\n");
    printf("\t--------------------------------\n\n");
}
void voltar()
{
    system("clear || cls");
    return main();
}
void limpar()
{
    system("pause");
    system("clear || cls");
}

void personalizar(opcao)
{
    printf("Escolha um tema:\n\n1. azul\n2. verde\n3. amarelo\n\n");
    scanf("%i", &opcao);
    switch(opcao){
        case 1:
        system("color 1F");
        system("clear || cls");
        break;
        case 2:
        system("color 2F");
        system("clear || cls");
        break;
        case 3:
        system("color 60");
        system("clear || cls");
        break;
        default:
            printf("Digito invalido");
    }
    return main();
}
