#include <stdio.h>
#include <stdlib.h>

//Exercício 5: Faça um programa que receba as bases de um trapézio, sua altura e calcule a área. Mostre na tela.

int main() {
	
	printf("CALCULO DA AREA DE UM TRAPEZIO QUALQUER \n \n");
	
	float base_maior, base_menor, altura, area;
	
	printf("Insira o valor da base maior do trapezio: ");
	scanf("%f", &base_maior);
	printf("Insira o valor da base menor do trapezio: ");
	scanf("%f", &base_menor);
	printf("Insira o valor da altura do trapezio: ");
	scanf("%f", &altura);
	
	area = ((base_maior + base_menor) * altura) / 2;
	
	printf("\nA area do trapezio equivale a: %f cm2", area);
	return 0;
}
