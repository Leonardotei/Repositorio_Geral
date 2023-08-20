#include <stdio.h>
#include <stdlib.h>

int main()
{
     int idade, maior;
     float contf=0, cont_intervalo=0;
     float perc11_f_intervalo=0;
     char sexo;

     printf("Digite a idade: ");
     scanf("%d", &idade);

     maior = idade;

     while(idade != -1){
        setbuf(stdin, NULL);
        printf("Digite o sexo: (f-feminino/m-masculino):");
        scanf("%c", &sexo);

        if (sexo=='f'){
            contf++;
        }

       if (sexo=='f' && (idade >= 18 && idade <=35)){
        cont_intervalo++;
       }

       printf("Digite a idade: ");
       scanf("%d", &idade);

       if (idade > maior){
           maior = idade;
       }
     }
     perc11_f_intervalo = (cont_intervalo/contf)*100;

     printf("Programa finalizado! \n");
     printf("A maior idade digitada: %d \n", maior);
     printf("A quantidade de feminino: %.0f \n", contf);
     printf("A quantidade de feminino no inter 18-35: %.0f \n", cont_intervalo);
     printf("O percentual solicitado: %.2f \n", perc11_f_intervalo);

    return 0;
}
