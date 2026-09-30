#include <stdio.h>
#include <stdlib.h>

int verificar(int n) {
	if (n % 2 == 1) 		//Se o valor inserido der no resto da divisão por 2, qualquer número q não seja 0 ==) Essa é verdadeira
		if (n % 5 == 0)		//E se, o valor inserido no resto da divisão por 5 for igual a 0 ==) Essa também é verdadeira
			return 1;		//Ent, retorna verdadeiro
	else return 0; 			//Senão, retorna falso?	
}

int main() {
	
	int n1, n2, n3, n4;
	
	printf("Informe os quatro numeros inteiros");
	printf("\nPrimeiro: ");
	scanf("%d", &n1);
	printf("Segundo: ");
	scanf("%d", &n2);
	printf("Terceiro: ");
	scanf("%d", &n3);
	printf("Quarto: ");
	scanf("%d", &n4);
	
	if (verificar(n1)) printf("\nO numero %d e impar e multiplo de 5", n1);
	if (verificar(n2)) printf("\nO numero %d e impar e multiplo de 5", n2);
	if (verificar(n3)) printf("\nO numero %d e impar e multiplo de 5", n3);
	if (verificar(n4)) printf("\nO numero %d e impar e multiplo de 5", n4);
	if (n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0 && n4 % 2 == 0 || n1 != 5 && n2 != 5 && n3 != 5 && n4 != 5) printf("\nNenhum dos numeros inseridos sao impares e multiplos de 5 ao mesmo tempo!");
	
	return 0;
}
