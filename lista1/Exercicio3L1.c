#include <stdio.h>
#include <math.h>

#define litrosDaLata 2.0
#define consumoDeTintaPorM2 0.3

int main() {
    double largura, altura, area, quantidadeDeTinta, quantidadeDeLatas;

    printf("Informe a largura da parede em metros: ");
     scanf("%lf", &largura);

    printf("Informe a altura da parede em metros: ");
     scanf("%lf", &altura);

        area = largura * altura;
        quantidadeDeTinta = area * consumoDeTintaPorM2;
        quantidadeDeLatas = ceil(quantidadeDeTinta / litrosDaLata);

    printf("Serão necessárias %.0lf latas de tinta para pintar a parede.\n", quantidadeDeLatas);

    return 0;
}
