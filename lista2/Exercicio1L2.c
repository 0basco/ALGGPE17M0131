#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL, "");

int ddd;

    printf("Entre com o DDD que deseja saber.");
     scanf("%i", &ddd);

    switch(ddd){

        case 61:
        printf("Bras�lia");
        break;

        case 71:
        printf("Salvador");
        break;

        case 11:
        printf("S�o Paulo");
        break;

        case 21:
        printf("Rio de Janeiro");
        break;

        case 32:
        printf("Juiz de Fora");
        break;

        case 19:
        printf("Campinas");
        break;

        case 27:
        printf("Vit�ria");
        break;

        case 31:
        printf("Belo Horizonte");
        break;

        default:
        printf("DDD inv�lido");
        break;

    }

}
