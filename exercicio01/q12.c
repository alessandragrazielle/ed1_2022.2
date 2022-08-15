#include <stdio.h>
#define PI 3.14

int main() {
    float comprimento, raio;

    printf("Valor do raio da circunferencia: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    printf("Valor do comprimento da circunferencia: %.1f", comprimento);
}
