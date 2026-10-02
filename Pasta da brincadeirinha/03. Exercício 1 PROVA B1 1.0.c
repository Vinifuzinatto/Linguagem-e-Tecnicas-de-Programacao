#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("Exercicio: Faca um programa que receba 4 numeros inteiros do teclado, verifique quais dos numeros sao impares, e mostre os que forem multiplos de 5. \n");
	
	int n1, n2, n3, n4;
	
	printf("\nInforme os quatro numeros inteiros");
	printf("\nPrimeiro: ");
	scanf("%d", &n1);
	printf("Segundo: ");
	scanf("%d", &n2);
	printf("Terceiro: ");
	scanf("%d", &n3);
	printf("Quarto: ");
	scanf("%d", &n4);

	// n % 2 != 0 (==) n % 2 == 1
	
	if (n1 % 2 != 0) {
		if (n1 % 5 == 0) printf("\nO numero %d e impar e multiplo de 5", n1);
	}
	if (n2 % 2 != 0) {
		if (n2 % 5 == 0) printf ("\nO numero %d e impar e multiplo de 5", n2);
	}
	if (n3 % 2 != 0) {
		if (n3 % 5 == 0) printf ("\nO numero %d e impar e multiplo de 5", n3);
	}
	if (n4 % 2 != 0) {
		if (n4 % 5 == 0) printf ("\nO numero %d e impar e multiplo de 5", n4);
	}
	if (n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0 && n4 % 2 == 0 || n1 != 5 && n2 != 5 && n3 != 5 && n4 != 5) printf("\nNenhum dos numeros inseridos sao impares e multiplos de 5 ao mesmo tempo!");
	
	return 0;
}
