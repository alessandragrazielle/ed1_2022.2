#include <stdio.h>

int main() {
    float qtdLatao, zinco, cobre;

    printf("Quantidade de latao epm kg: ");
    scanf("%f", &qtdLatao);

    cobre = qtdLatao * 70/100;
    zinco = qtdLatao - cobre;

    printf("Em %.2fkg de latao, tem %.2fkg de cobre e %.2fkg de zinco", qtdLatao, cobre, zinco);
}
