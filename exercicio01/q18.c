#include <stdio.h>

int main() {
    float m, cm;

    printf("Valor em m: ");
    scanf("%f", &m);

    cm = m*100;

    printf("%.1fm equivale(m) a %.1fcm", m, cm);
}
