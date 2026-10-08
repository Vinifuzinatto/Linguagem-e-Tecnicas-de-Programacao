#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("CONDICAO EM UM CONTADOR! \n\n");
	
	int i, num;
	int CONT = 0;
	
	for(i = 1; i <= 5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num > 5) CONT = CONT + 1;
	}
	printf("\nQuantidade de numero(s) maior(es) que 5 = %d", CONT);
	
	return 0;
}
