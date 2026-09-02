#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exercício 3: Leia um número e, se ele for um quadrado perfeito, informe sua raiz.

int main() {
	
	float n, raiz;
	
	printf("Insira um numero: ");
	scanf("%f", &n);
	
	if (raiz == (int)raiz){
		raiz = sqrt(n);
		printf("\nRaiz = %0.2f", raiz);
	}
	else {
		printf("\nO numero nao e um quadrado perfeito.");
	}
	return 0;
}
