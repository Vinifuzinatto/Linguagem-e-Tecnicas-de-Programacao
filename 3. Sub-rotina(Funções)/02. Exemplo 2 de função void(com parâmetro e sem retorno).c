#include <stdio.h>
#include <stdlib.h>

void soma(int x, int y) {
	int s;
	s = x + y;
	printf("\nSOMA = %d", s);
}

int main() {
	
	int a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d%*c", &a);
	printf("Digite o segundo numero: ");
	scanf("%d%*c", &b);
	
	soma(a, b); //copia a variável a em x (x = a) e copia a variável b em y (y = b)
	
	return 0;
}
