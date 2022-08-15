#include <stdio.h>

int main() {
    float km, m;

    printf("Valor em km: ");
    scanf("%f", &km);

    m = km*1000;

    printf("%.1fkm equivale(m) a %.1fm", km, m);
}
