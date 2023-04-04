#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"");

int i;

    printf("contagem progressiva\n");
    for(i = 0; i <= 10; i++){
        printf("contador = %i\n", i);


    }

    printf("contagem regressiva\n");
    for(i = 10; i >= 1; i--){
        printf("contador = %i\n", i);

    }

}
