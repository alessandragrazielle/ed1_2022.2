#include <stdio.h>

int main() {
    float n1, n2, n3, p1, p2, p3, media;

    printf("Nota 1 e peso 1, respectivamente: ");
    scanf("%f %f",&n1, &p1);

    printf("Nota 2 e peso 2, respectivamente: ");
    scanf("%f %f", &n2, &p2);

    printf("Nota 3 e peso 3, respectivamente: ");
    scanf("%f %f", &n3, &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

    printf("Valor da media ponderada: %.1f", media);
}
