#include <stdio.h>

int main() {
    int m, valorKm, valorM;

    printf("Valor em m: ");
    scanf("%d", &m);

    valorM = m%1000;
    valorKm = (m - valorM) / 1000;

    printf("%dm equivale(m) a %dkm e %dm", m, valorKm, valorM);
}
