#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

int main() {
        setlocale(LC_ALL, "");
	float raio, area;

	printf("Registre o raio do círculo para obter a area : ");
	scanf("%f", &raio);

	// PI será convertido para o valor definido acima da main
	area = PI * raio * raio;

	printf("Area do círculo : %0.2f", area);

	return 0;
}
