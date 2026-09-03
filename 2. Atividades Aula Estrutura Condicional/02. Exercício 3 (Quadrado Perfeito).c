#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exercício 3: Leia um número e, se ele for um quadrado perfeito, informe sua raiz.

int main() {
	
	float n, raiz;
	
	printf("Insira um numero: ");
	scanf("%f", &n);

	raiz = sqrt(n);
	
	if (raiz == (int)raiz) { //Compara a raiz feita anteriormente, com a variável n, tirando sua parte decimal. Se a raiz n for igual a raiz n só com a parte inteira, logo, o número é um quadrado perfeito.
							 //Exemplo 1: número = 4; Raiz = 2, (int)Raiz = 2 =) VERDADEIRO (Pois Raiz == (int)Raiz) [2 = 2]
							 //Exemplo 2: número = 3; Raiz = 1.7, (int)Raiz = 1 =) Falso (Pois Raiz != (int)Raiz) [1.7 != 1]
		printf("\nRaiz = %0.2f", raiz);
	}
	else {
		printf("\nO numero nao e um quadrado perfeito.");
	}
	return 0;
}
