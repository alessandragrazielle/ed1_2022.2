#include <stdio.h>
#include <stdlib.h>

main(){
	int a, b, resto, quo;
	
	printf("Valor de a:");
	scanf("%d", &a);
	printf("Valor de b:");
	scanf("%d", &b);
	
	quo = a / b;
	resto = a % b;
	
	printf("Quociente: %0.1f \nResto: %d", quo, resto);
}
