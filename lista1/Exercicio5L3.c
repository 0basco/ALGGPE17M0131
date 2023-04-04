#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"");
    int num, soma = 0;

    printf("Digite números até que a soma seja pelo menos 30:\n");

    while (soma < 30) {
        printf("Número: ");
        scanf("%d", &num);

        soma += num;
    }

    printf("Soma dos números: %d\n", soma);

    return 0;
}
