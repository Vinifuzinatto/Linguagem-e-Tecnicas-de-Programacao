#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

int main() {
	
	float area, raio;
	
	printf("Insira o valor do raio do circulo: ");
	scanf("%f", &raio);
	
	area = M_PI* pow(raio,2);
	
	printf("A area do circulo e %f", area);
	
	return 0;
}
