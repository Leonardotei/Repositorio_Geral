#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salarioBase, salarioReajuste, aumento50, aumento30, novoSalario;

   printf("CONSULTE SEU SALARIO.\n\nDigite seu salario atual: ");
   scanf("%d", &salarioBase);


   if (salarioBase <= 300)
   {
    aumento50 = salarioBase * 0.5;
    novoSalario = salarioBase + aumento50;
    printf("\nSeu salario aumentou R$ %d, e passou a ser R$ %d.\n\n", aumento50, novoSalario);
    system("pause");
    system("cls || clear");
   }else{
   aumento30 = salarioBase * 0.3;
   novoSalario = salarioBase + aumento30;
   printf("\nSeu salario aumentou R$ %d, e passou a ser R$ %d.\n\n", aumento30, novoSalario);
   system("pause");
   system("cls || clear");
   }
   return main();
}
