#include <stdio.h>

main(){
	float valor_dolar, qtd_dolares, qtd_reais;
	
	printf("Valor do dolar: R$");
	scanf("%f", &valor_dolar);
	printf("Quantidade de dolares: $");
	scanf("%f", &qtd_dolares);
	
	qtd_reais = valor_dolar * qtd_dolares;
	
	printf("$%0.2f equivalem a R$%0.2f", qtd_dolares, qtd_reais);
}
