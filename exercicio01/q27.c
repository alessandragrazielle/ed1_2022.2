#include <stdio.h>

int main() {
    float custoFabrica, percentagemDistribuidor, impostos, custoConsumidor;

    printf("Custo de fabrica do carro: ");
    scanf("%f", &custoFabrica); // o custo de fabrica é de 27%

    custoConsumidor = (custoFabrica*100) / 27;

    printf("O custo ao consumidor sera de R$%.2f", custoConsumidor);
}
