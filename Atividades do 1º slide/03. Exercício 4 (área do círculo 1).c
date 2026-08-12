#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main() {
	
	float area, raio;
	
	printf("Insira o valor do raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * (raio * raio);
	
	printf("A area do circulo equivale a %f", area);
	
	return 0;
}
