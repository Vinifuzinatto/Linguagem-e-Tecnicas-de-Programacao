#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x = 1;
	int y = 10;
	
	while(y > x) {
		printf("Valor de Y = %d \n", y);
		y -= 2;
	}
	printf("\nValor de Y depois que sair do loop = %d", y);
	
	return 0;
}
