#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtde_alunos, contador;
    float nota1, nota2, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtde_alunos);

    contador = 1;
    while(contador<=qtde_alunos){

        printf("Digite as notas do aluno %d \n", contador);

        printf("Digite a nota1:");
        scanf("%f", &nota1);

        printf("Digite a nota2:");
        scanf("%f", &nota2);

        media = (nota1+nota2)/2;

        if(media>=5){
            printf("Aprovado \n");
        }else{
        printf("Reprovado \n");
        }
        contador++;
    }
    return 0;
}
