#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    float volume, raio;

    printf("Valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4 * PI * pow(raio, 3)) / 3;

    printf("Valor do volume da esfera: %.1f", volume);
}
