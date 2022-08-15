#include <stdio.h>

int main() {
    int valorProduto, prestracoes, entrada;

    printf("Valor da mercadoria: ");
    scanf("%d", &valorProduto);

    prestracoes = (valorProduto - valorProduto%3) / 3;
    entrada = valorProduto - prestracoes*2;

    printf("Valor da entrada R$%d,00 \nValor das prestracoes: R$%d,00", entrada, prestracoes);
}
