#include <stdio.h>
#include <stdlib.h>

void alterar(int *x) {
	*x = 100;
}

int main() {
	
	int num = 10;
	
	alterar(&num); //Precisa mandar o endereço de memória de num, e não a própria variável num.
	
	printf("Valor da variavel num = %d", num);
	
	return 0;
}
