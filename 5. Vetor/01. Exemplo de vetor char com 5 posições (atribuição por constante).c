#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main() {
	
	char vet[TAM];
	
	printf("Informe os valores! \n");
	printf("Primeiro: ");
	scanf("%c", &vet[0]);
	printf("Segundo: ");
	scanf(" %c", &vet[1]);
	printf("Terceiro: ");
	scanf(" %c", &vet[2]);
	printf("Quarto: ");
	scanf(" %c", &vet[3]);
	printf("Quinto: ");
	scanf(" %c", &vet[4]);
	
	printf("\nVET ABERTO: |%c|%c|%c|%c|%c| \n", vet[0], vet[1], vet[2], vet[3], vet[4]);
	printf("Posicao:     0 1 2 3 4");	
	
	return 0;
}
