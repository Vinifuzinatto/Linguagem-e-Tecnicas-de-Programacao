#include <stdio.h>
#include <stdlib.h>

int a, b, s; //Variáveis globais

void soma() {
	
	printf("Digite o primeiro numero: ");
	scanf("%d%*c", &a);
	printf("Digite o segundo numero: ");
	scanf("%d%*c", &b);
	
	s = a + b;
	
	printf("\nSOMA = %d", s);
}

int main() {
	
	soma();
	
	return 0;
}
