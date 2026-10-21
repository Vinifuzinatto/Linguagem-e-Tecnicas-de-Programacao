#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifica_maior(int x, int y) {
	if(x > y) return x;
	else if(x = y) return x;
	else return y;
}
int verifica_menor(int x, int y) {
	if(x > y) return y;
	else if(x = y) return y;
	else return x;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
/*printf("\nExercício 1: Faça um programa que leia 100 números inteiros e depois os imprima na ordem inversa em que eles foram lidos, e ordenados do maior para o menor. \n\n");

	int num = 1, i, maior, menor, temp;
	
	for(i = 0; i < 5; i++) {
		printf("Informe o número: ");
		scanf("%d", &num);
		
		
	} */

printf("\nExercício 3: Implemente um programa que leia um número n (com n positivo e n <= 64) e mostre na tela o seu valor em base binária(bits). \n");

	int n, resto, resultado;
	
	printf("\nInforme o número: ");
	scanf("%d", &n);
	
	if(n > 0 && n <= 64) {
		while(n >= 1) {
			n /= 2;
			
		}
	}

	else printf("\nO número informado não respeita o intervalo válido!"); 
	

	
	
	return 0;
}
