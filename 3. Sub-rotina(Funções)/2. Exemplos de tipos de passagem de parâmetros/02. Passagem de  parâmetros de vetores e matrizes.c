#include <stdio.h>
#include <stdlib.h>

void soma_linhas(float m[] [5], float v[]) {
	int i, j;
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 5; j++) v[i] = v[i] + m[i] [j];
	}
}

int main() {
	
	int i, j;
	float mat[3] [5], vet[3];
	
	for(i = 0; i < 3; i++) {
		vet[i] = 0;
		for(j = 0; j < 5; j++) {
			printf("Digite o elemento da posição %d - %d: ", i, j);
			scanf("%f%*c", &mat[i] [j]);
		}
	}
	
	soma_linhas(mat, vet);
	
	for(i = 0; i < 3; i++) printf("\nSoma da linha %d = %.2f", i, vet[i]);
	
	return 0;
}
