#include <stdio.h>
 
main(){
	float v_ms, v_kmh;
	
	printf("Velocidade em m/s: ");
	scanf("%f", &v_ms);
	
	v_kmh = v_ms * 3.6;
	
	printf("%0.2fm/s correspondem a %0.2fkm/h", v_ms, v_kmh);
	
	system("PAUSE");
}
