#include <stdio.h>
#include <stdlib.h>

//Exercício 2: Faça um programa que calcule a área de um triangulo retângulo, dados os valores de sua base e altura.
int main() {
	
	float cat_1, cat_2, area;
	
	printf("Insira o valor do primeiro cateto do triangulo retangulo: ");
	scanf("%f", &cat_1);
	printf("Insira o valor do segundo cateto do triangulo retangulo: ");
	scanf("%f", &cat_2)	;
	
	area = cat_1 * cat_2 / 2;
	
	printf("\nA area do triangulo retangulo e: %f", area);
	return 0;
}
