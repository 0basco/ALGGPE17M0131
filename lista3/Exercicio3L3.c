#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"");

int i;
int n;

    printf("insira um número: ");
     scanf("%i", &n);

    for (i = n; i >= 0; i--) {
        printf("%d\n", i);
    }

}
