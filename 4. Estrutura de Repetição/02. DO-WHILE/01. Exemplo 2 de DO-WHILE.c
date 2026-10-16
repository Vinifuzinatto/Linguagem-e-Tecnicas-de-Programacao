#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x = 1;
	int y = 10;
	
	do {
		printf("Valor de Y = %d \n", y);
		y -= 2;
	} while(y > x);
	
	printf("\nValor de Y depois que sair da estrutura = %d", y);
	
	return 0;
}
