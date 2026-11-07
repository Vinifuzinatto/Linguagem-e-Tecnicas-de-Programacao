#include <stdio.h>
#include <stdlib.h>

int soma_dobro(int *a, int *b) {
	int soma;
	
	*a = (*a) * 2;
	*b = (*b) * 2;
	
	soma = *a + *b;
	return soma;
}

int main() {
	
	int x, y, resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	resultado = soma_dobro(&x, &y);
	
	printf("\nA soma dos numeros %d e %d = %d", x, y, resultado);
	
	return 0;
}
