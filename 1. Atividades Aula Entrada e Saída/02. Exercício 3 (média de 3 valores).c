#include <stdio.h>
#include <stdlib.h>

//Eexercício 3: Faça um programa que calcule a média aritmética entre três valores informados. Mostre a média na tela

int main() {
	
	float a, b, c, M;
	//a = Valor 1
	//b = Valor 2
	//c = Valor 3
	//M = Média desses valores
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &a);
	printf("Insira o segundo valor: ");
	scanf("%f", &b);
	printf("Insira o terceiro valor: ");
	scanf("%f", &c);
	
	M = (a + b + c) / 3;
	
	printf("\nA media dos respectivos valores e: %f", M);
	return 0;
}
