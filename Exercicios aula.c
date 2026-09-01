#include <stdio.h>
#include <stdlib.h>

int main() {

/*Exercício aula: Ler um número e informar se ele é par ou ímpar. */

	int numero;
	
	printf("Insira um valor: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("O numero e par!!!");
	}
	else
	printf("O numero e impar!!!");
	


/*Exercício aula 2: Faça um programa que leia do teclado um letra e imprima a sua correspondência no "Abecedário da Xuxa". */

	char letra;
	
	printf("Insira uma letra do alfabeto: ");
	scanf("%c", &letra);
	
/*Exercício: Construa um programa que receba dois valores e verifique se eles sao positivos ou negativos.
- Caso sejam positivos, verifique se são menores que 10, caso sejam, vefirique se são primos e mostre a área e hipotenusa do triângulo formado por eles.
- Caso não sejam primos, mostre as operações básicas entre eles.
- Caso sejam maiores que 10, mostre se são multiplos um pelo outro.
- Caso não sejam positivos, mostre seus inversos. */
	
	int a, b, c, r, h, mult, div, som, sub;
	
	printf("Entre com os valores de A e B: ");
	scanf("%d %d", &a, &b);
	
	if (a > 0 && b > 0){
		if (a < 10 && b < 10){
			if ((a == 2 || a == 3 || a == 5 || a == 7) && (b == 2 || b == 3 || b == 5 || b == 7)){
				r = (a * b) / 2;
				h = sqrt(pow(a, 2) + pow(b, 2));
				printf("\nArea do triangulo formado pelos valores = %d \nHipotenusa desse triangulo = %d", r, h);
			}else{
				som = a + b;
				sub = a - b;
				mult = a * b;
				div = a / b;
				printf("\nAs operacoes basicas entre eles sao: \nSoma = %d \nSubtracao = %d \\nMultiplicacao = %d \nDivisao = %d", som, sub, mult, div);
			}
		}else {
			if (a % b == 0) printf("\nSao multiplos!!!"); else printf("\nNao sao multiplos!!!");
		}
	}else{
		printf("\nO inverso deles sao: \nA = %d \nB = %d", (a * -1), (b * -1));
	}
	
	return 0;
}
