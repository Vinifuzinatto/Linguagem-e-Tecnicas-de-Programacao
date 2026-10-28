#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vet[10]; //10 é o literal
	
	printf("Informe os valores! \n");
	printf("Primeiro: ");
	scanf("%d%*c", &vet[0]);
	printf("Segundo: ");
	scanf("%d%*c", &vet[1]);
	printf("Terceiro: ");
	scanf("%d%*c", &vet[2]);
	printf("Quarto: ");
	scanf("%d%*c", &vet[3]);
	printf("Quinto: ");
	scanf("%d%*c", &vet[4]);
	printf("Sexto: ");
	scanf("%d%*c", &vet[5]);
	printf("Setimo: ");
	scanf("%d%*c", &vet[6]);
	printf("Oitavo: ");
	scanf("%d%*c", &vet[7]);
	printf("Nono: ");
	scanf("%d%*c", &vet[8]);
	printf("Decimo: ");
	scanf("%d%*c", &vet[9]);
	
	printf("\nVET ABERTO: |%d|%d|%d|%d|%d|%d|%d|%d|%d|%d| \n", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5], vet[6], vet[7], vet[8], vet[9]);
	printf("Posicao:     0 1 2 3 4 5 6 7 8 9");
	
	return 0;
}
