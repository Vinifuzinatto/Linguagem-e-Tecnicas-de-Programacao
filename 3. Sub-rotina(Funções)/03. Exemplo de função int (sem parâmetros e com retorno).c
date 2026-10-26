#include <stdio.h>
#include <stdlib.h>

int soma() {
	int a, b, resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%d%*c", &a);
	printf("Digite o segundo numero: ");
	scanf("%d%*c", &b);
	
	resultado = a + b;
	return resultado;
}

int main() {
	
	int s;
	
	s = soma();
	printf("\nSOMA = %d", s);
	
	return 0;
}
