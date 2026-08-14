#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

//Exercício 4: Faça um programa que receba o raio de um círculo, calcule e mostre sua área na tela.

int main() {
	
	float area, raio;
	
	printf("Insira o valor do raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * (raio * raio);
	
	printf("A area do circulo equivale a %f", area);
	
	return 0;
}
