#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vet[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o valor: ");
		scanf("%d%*c", &vet[i]);
	}
	
	i = 0;
	while(i < 5) {
		printf("\nVALOR DE VET NA POSICAO %d = %d", i, vet[i]);
		i++;
	} 
		
	return 0;
}
