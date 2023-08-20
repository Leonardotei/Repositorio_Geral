#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main(){
    int x, vet[3], num, achei=0;

    for(int x=0; x<3; x++){
        printf("\n[%d]Digite um numero: ",x);
        scanf("%d", &vet[x]);
    }
    printf("\n\nDigite um valor a ser pesquisado: ");
    scanf("%d", &num);
    for(int x=0;x<3;x++)

    if(vet[x]==num){
        printf("\n O numero %d esta na posicao %d", num,x);
        achei=1;
    }
    if(achei!=1){
        printf("\n Este numero nao existe");
    }
    printf("\n\n");
    system("pause");
    return(0);
}
