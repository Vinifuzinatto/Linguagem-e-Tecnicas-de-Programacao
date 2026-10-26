#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y) {
	return x + y;
}

int main() {
	
	int a, b, s;
	
	printf("Digite o primeiro numero: ");
	scanf("%d%*c", &a);
	printf("Digite o segundo numero: ");
	scanf("%d%*c", &b);
	
	s = soma(a, b);
	
	printf("\nSOMA = %d", s);
	
	return 0;
}
