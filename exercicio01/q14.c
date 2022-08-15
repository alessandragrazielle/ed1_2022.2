#include <stdio.h>

int main() {
    float tc, tf;
    
    printf("Temperatura em : ");
    scanf("%f", &tc);

    tf = (9 * tc + 160) / 5;

    printf("%.1f graus Celsius equivale a %.1f graus Fahrenheit", tc, tf);
}
