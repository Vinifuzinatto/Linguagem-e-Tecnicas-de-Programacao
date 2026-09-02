#include <stdio.h>
#include <stdlib.h>

//Exercício 2: Leia um número e informe se ele é par ou ímpar.

int main() {
	
	int n;
	
	printf("Insira um numero: ");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("\nEste numero e PAR!!!");
	}
	else {
		printf("\nEste numero e IMPAR!!!");
	}
	return 0;
}
