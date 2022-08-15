#include <stdio.h>

int main() {
    float area, base, altura;

    printf("Valor da base e altura do retangulo: ");
    scanf("%f %f", &base, &altura);

    area = base*altura;

    printf("Valor da area do retangulo: %.1f", area);
}
