#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"");

int i;

    for (i = 15; i >= 1; i--) {
        printf("%d\n", i);
    }

}
