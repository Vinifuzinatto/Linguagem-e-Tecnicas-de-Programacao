#include <stdio.h>
#include <stdlib.h>


//Exercício 1 (pt.1): Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidas

int main() {	
	
	int primeiro, segundo;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
	
	printf("%d \n%d", segundo, primeiro);
	
//Exercício 2 (pt.1): Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.

	double valor_tipo_double;
	
	printf("\nInsira um valor: ");
	scanf("%lf", &valor_tipo_double);
	
	printf("Resultado em notacao cientifica: %E\n", valor_tipo_double);



	return 0;
}
