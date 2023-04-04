#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL, "");

     printf("=================================\n");
     printf("calculo da porcentagem de lucro\n");
     printf("=================================\n");

float custo, valor, despesas;

    printf("Insira o valor do custo do produto: ");
     scanf("%f", &custo);

             system("cls");

     printf("=================================\n");
     printf("calculo da porcentagem de lucro\n");
     printf("=================================\n");
     printf("custo: %2.f\n", custo);

    printf("Agora, insira o valor do frete somado despesas adcionais: ");
     scanf("%f", &despesas);

            system("cls");

float valorTotal;

    valorTotal = custo + despesas;

   printf("=================================\n");
   printf("calculo da porcentagem de lucro\n");
   printf("=================================\n");
   printf("valor do produto: %2.f\n", custo);
   printf("despesas: %2.f\n", despesas);

   printf("por favor, insira o custo de venda do produto: ");
    scanf("%f", &valor);

        system("cls");

float lucro;
float lucro2;

    lucro = (valor - valorTotal) / valor;
    lucro2 = lucro * 100;

   printf("=================================\n");
   printf("calculo da porcentagem de lucro\n");
   printf("=================================\n");
   printf("valor total do produto: %2.f\n", valorTotal);
   printf("valor de venda do produto: %2.f\n", valor);

    printf("a sua margem de lucro é de: %2.f porcento\n", lucro2);

    printf("=========================================================");
}
