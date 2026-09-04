#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Exercício extra: Construa um programa que receba dois valores e verifique se eles são positivos ou negativos.
	- Caso sejam positivos, verifique se são menores que 10, caso sejam, verifique se são primos e mostre a área e hipotenusa do triângulo formado por eles.
	- Caso não sejam primos, mostre as operações básicas entre eles.
	- Caso sejam maiores que 10, mostre se são multiplos um pelo outro.
	- Caso não sejam positivos, mostre seus inversos. */

int main() {
	
	int a, b, A, H, som, sub, mult, div;
	//A = Área do triângulo
	//H = Hipotenusa do triângulo
	
	printf("Insira dois valores: ");
	scanf("%d %d", &a, &b);
	
	if (a > 0 && b > 0){
		if (a < 10 && b < 10){
			if ((a == 2 || a == 3 || a == 5 || a == 7) && (b == 2 || b == 3 || b == 5 || b == 7)){
				A = (a * b) / 2;
				H = sqrt(pow(a, 2) + pow(b, 2));
				
				printf("\nArea do triangulo formado pelos valores = %d \nHipotenusa desse triangulo = %d", A, H);
			} else {
				som = a + b;
				sub = a - b;
				mult = a * b;
				div = a / b;
				
				printf("\nAs operacoes basicas entre esses valores sao: \nSoma = %d \nSubtracao = %d \nMultiplicacao = %d \nDivisao = %d", som, sub, mult, div);
			}
		} else {
			if ((a % b == 0) || (b % a == 0)) {
				printf("\nSao multiplos!!!");
			} else {
				printf("\nNao sao multiplos!!!");
			}
		}
	} else {
		a = a * -1;
		b = b * -1;
		
		printf("\nSeus inversos sao: %d e %d", a, b);
	}
	return 0;
}
