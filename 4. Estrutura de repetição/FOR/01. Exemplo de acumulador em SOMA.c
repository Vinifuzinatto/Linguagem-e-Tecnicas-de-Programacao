#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("SOMA POR ACUMULADOR! \n\n");
	
	int i, num;
	int SOMA = 0;
	
	for (i = 1; i <= 5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		SOMA = SOMA + num;
	}
	printf("\nSoma = %d", SOMA);
	
	return 0;
}
