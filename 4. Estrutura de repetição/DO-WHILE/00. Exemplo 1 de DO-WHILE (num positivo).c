#include <stdio.h>
#include <stdlib.h>

//Repetir até o usuário digitar um número positivo

int main() {
	
	int num;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &num);
	} while(num <= 0);
	
	printf("\nNumero aceito: %d", num);
	
	return 0;
}
