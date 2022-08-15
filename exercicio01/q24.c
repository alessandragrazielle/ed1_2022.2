#include <stdio.h>

int main() {
    int idade, anos, meses, dias;

    printf("Digite sua idade em anos, meses e dias, respectivamente, separados por virgula: ");
    scanf("%d, %d, %d", &anos, &meses, &dias);

    idade = (anos*365) + (meses*30) + dias; // considerando um ano com 365 dias e um mes com 30 dias

    printf("Sua idade corresponde a %d dias", idade);
}
