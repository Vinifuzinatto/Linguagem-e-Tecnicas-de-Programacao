#include <stdio.h>
#include <stdlib.h>

/*Exercício: Elabere um programa que peça ao usuário para digitar 10 números que sejam
inteiros positivos, e ignorando os negativos. Depois, mostre na tela o resultado da
soma e a média desses valores. 

OBS.: Não precisa usar vetor, usem os laços da aula de hoje (while e do... while) */

int main() {
	
	int valor, soma, i;
	float media;
	
	i = 0;
	while(i < 10) {
		printf("Insira o valor positivo: ");
		scanf("%d", &valor);
		if(valor > 0) {
			soma += valor;
			i++;
			media = soma / 10;	
		}
	}
	printf("\nSOMA = %d \nMedia = %.2f", soma, media);
	
	return 0;
}
