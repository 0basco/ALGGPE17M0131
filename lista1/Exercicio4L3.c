#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"");

    int idades[5], i, soma = 0, contador = 0;
    float media;

    printf("Digite a idade de at� 5 pessoas:\n");

    for (i = 0; i < 5; i++) {
        printf("Pessoa %d: ", i+1);
        scanf("%d", &idades[i]);

        soma += idades[i];
        contador++;

        if (idades[i] > 18) {
            printf("%d � maior que 18 anos\n", idades[i]);
        }
    }

    media = (float) soma / contador;

    printf("M�dia de idades: %.2f\n", media);

    return 0;
}
