#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia 10 números, mostre o maior entre os 5 primeiros e o menor entre os restantes

int compara_maior(int a, int b) {
	if(a > b) return a;
	else return b;
}
int compara_menor(int a, int b) {
	if(a > b) return b;
	else return a;
}

int main() {
	
	int valores[10];
	int i, maior, menor;
	
	for(i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &valores[i]);
	}
	for(i = 1, maior = valores[0]; i < 5; i += 2) {
		int temp = compara_maior(valores[i], valores[i + 1]);
		maior = compara_maior(maior, temp);
	}	
	for(i = 6, menor = valores[5]; i < 10; i += 2) {
		int temp = compara_menor(valores[i], valores[i + 1]);
		menor = compara_menor(menor, temp);
	}
		
	printf("\nMaior entre os 5 primeiros = %d", maior);
	printf("\nMenor entre os 5 ultimos = %d", menor);
	
	return 0;
}
