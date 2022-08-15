#include <stdio.h>

int main() {
    float area, lado;

    printf("Valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado*lado;

    printf("Valor da area do quadrado: %.1f", area);
}
