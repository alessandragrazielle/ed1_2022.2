#include <stdio.h>

int main() {
    int anosFumando, cigarrosDia, qtdCigarros;
    float gasto, precoCarteira;

    printf("Numero de anos fumando: ");
    scanf("%d", &anosFumando);

    printf("Numero de cigarros fumados por dia: ");
    scanf("%d", &cigarrosDia);

    printf("Preco de uma carteira de cigarros: ");
    scanf("%d", &precoCarteira);

    qtdCigarros = cigarrosDia * 365 * anosFumando;

    gasto = (qtdCigarros - (qtdCigarros%20)) / 20;

    printf("O preco total gasto foi de, aproximadamente R$%.2f", gasto);
}
