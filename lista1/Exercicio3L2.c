#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
        setlocale(LC_ALL,"");

   float num1, num2, num3;

   printf("Digite o primeiro n�mero: ");
   scanf("%f", &num1);

   printf("Digite o segundo n�mero: ");
   scanf("%f", &num2);

   printf("Digite o terceiro n�mero: ");
   scanf("%f", &num3);

   if(num1 == num2 && num1 == num3) {
      printf("N�meros iguais\n");
   } else {
      float maior, menor;

      maior = num1;
      if(num2 > maior) {
         maior = num2;
      }
      if(num3 > maior) {
         maior = num3;
      }

      menor = num1;
      if(num2 < menor) {
         menor = num2;
      }
      if(num3 < menor) {
         menor = num3;
      }

      printf("Maior n�mero: %.2f\n", maior);
      printf("Menor n�mero: %.2f\n", menor);
   }

   return 0;
}
