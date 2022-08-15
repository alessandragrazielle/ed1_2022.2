#include <stdio.h>

int main() {
    int min, dias, horas, minutos;

    printf("Quantidade de minutos: ");
    scanf("%d", &min);

    dias = (min - (min%1440)) / 1440; // um dia tem 1440 minutos
    minutos = (min % 1440) % 60;
    horas = (min - dias*1440 - minutos) / 60;

    printf("%d minutos correseponde(m) a %d dia(s), %d hora(s) e %d minuto(s)",min, dias, horas, minutos);
}
