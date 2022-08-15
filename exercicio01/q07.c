#include <stdio.h>

int main() {
    float valor_real, porcentagem;

    printf("Valor em real: ");
    scanf("%f", &valor_real);

    porcentagem = valor_real * 70/100;

    printf("70 porcento de R$ %.2f equivale a R$ %.2f", valor_real, porcentagem);
}
