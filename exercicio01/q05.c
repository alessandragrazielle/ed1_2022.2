#include <stdio.h>

int main() {
    int numero, inverso, unidade, dezena, centena;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    unidade = (numero - numero%100) / 100; // transforma a centena em unidade
    dezena = (numero-unidade*100) - (numero-unidade*100) % 10;
    centena = (numero%10) * 100; // transforma a unidade em centena

    inverso = centena + dezena + unidade;

    printf("O inverso de %d e %d", numero, inverso);
}
