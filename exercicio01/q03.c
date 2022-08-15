#include <stdio.h>
#include <stdlib.h>

main(){
	float v_kmh, v_ms;
	
	printf("Digite uma velocidade em km/h: ");
	scanf("%f", &v_kmh);
	
	v_ms = v_kmh / 3.6;
	
	printf("%0.2f km/h equivalem a %0.2f m/s", v_kmh, v_ms);
	
	system("PAUSE");
}
