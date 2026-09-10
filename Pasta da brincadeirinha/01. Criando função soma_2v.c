#include <stdio.h>
#include <stdlib.h>

int soma_2v(int x, int y) {
	return x + y;
}

/*
OBS.: EX.: int soma_2v(float x, float y)
- int: Tipo do valor que a função DEVOLVE
- float x e y: Tipo do valor que a função RECEBE
- ENTÃO: A função soma_2v recebe dois float e retorna um int.

Exemplo de soma: x = 7.5 ; y = 9.2

- A soma seria = 7.5 + 9.2 <==> soma = 16.7
- Porém, ele retornará um inteiro no printf final, ficando assim: Soma final = 16 (A parte decimal é descartada, não arredondada)
*/

int main() {
	
	printf("SOMA DE DOIS VALORES COM CONDICOES! \n");
	
		int valor1, valor2, soma;
		
		printf("\nInsira dois valores para a soma: ");
		scanf("%d %d", &valor1, &valor2);
		
		soma = soma_2v(valor1, valor2);
		
		if (soma < 0){
			printf("\nA soma e um valor NEGATIVO e igual a %d!", soma);
		}
		else if (soma > 0){
			printf("\nA soma e um valor POSITIVO e igual a %d!", soma);
		}
		else {
			printf("\nA soma e ZERO!");
		}
	
	return 0;
}
