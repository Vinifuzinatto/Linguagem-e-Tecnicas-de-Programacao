#include <stdio.h>

int main() {
	
	float x[10] [6];
	int i, j;
		
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 6; j++) {
			printf("Informe o numero da posicao %d - %d: ", i + 1, j + 1);
			scanf("%f", &x[i] [j]);
		}
	}
	
	printf("\n=====MATIZ===== \n\n");
	
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 6; j++)
			printf("|%.2f", x[i] [j]);
			
		printf("| \n");
	}
	
	return 0;
}
