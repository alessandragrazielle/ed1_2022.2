#include <stdio.h>

int main() {
    int m, meses, anos;

    printf("Quantidade de meses: ");
    scanf("%d", &m);

    meses = m%12;
    anos = (m - meses) / 12;

    printf("%d correspeonde(m) a %d ano(s) e %d mes(es).", m, anos, meses);
}
