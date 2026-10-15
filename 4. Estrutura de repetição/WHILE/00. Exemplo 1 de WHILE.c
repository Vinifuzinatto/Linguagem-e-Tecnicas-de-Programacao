#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x = 0;
	
	while (x != 5) {
		printf("Valor de X = %d \n", x);
		x += 1;
	}
	printf("\nValor de X depois que sair da estrutura = %d", x);
	
	return 0;
}
