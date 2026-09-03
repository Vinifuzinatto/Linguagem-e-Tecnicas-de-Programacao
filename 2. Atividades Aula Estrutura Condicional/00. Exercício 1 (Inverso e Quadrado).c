#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exercício 1: Leia um número inteiro e, se ele for positivo, informe seu inverso. Caso contrário, informe o seu quadrado.

int main() {
	
	int num_inteiro, inverso, quadrado;
	
	printf("Insira um numero: ");
	scanf("%d", &num_inteiro);
	
	if (num_inteiro > 0){
		inverso = num_inteiro * -1;
		printf("\nInverso = %d", inverso);
	}
	else {
		quadrado = pow(num_inteiro, 2);
		printf("\nSeu quadrado = %d", quadrado);
	}
	return 0;
}
