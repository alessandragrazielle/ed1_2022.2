#include <stdio.h>

int main() {
    int valor_inicial, valor, c50, c20, c10, c5, c2;

    printf("Valor: ");
    scanf("%d", &valor);
    
    valor_inicial = valor;

    c50 = valor / 50;
    valor = valor - (c50 * 50);
    
    c20 = valor / 20;
    valor = valor - (c20 * 20);
    
    c10 = valor / 10;
    valor = valor - (c10 * 10);
    
    c5 = valor / 5;
    valor = valor - (c5 * 5);
    
    c2 = valor / 2;

    printf("Para R$%d,00 eh necessario: \n%d cedulas de 50 \n%d cedulas de 20 \n%d cedulas de 10 \n%d cedulas de 5 \n%d cedulas de 2", valor_inicial, c50, c20, c10, c5, c2);
}
