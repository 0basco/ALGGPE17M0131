#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

int main() {
        setlocale(LC_ALL, "");
	float raio, area;

	printf("Registre o raio do c�rculo para obter a area : ");
	scanf("%f", &raio);

	// PI ser� convertido para o valor definido acima da main
	area = PI * raio * raio;

	printf("Area do c�rculo : %0.2f", area);

	return 0;
}
