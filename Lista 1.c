#include <stdio.h>
#include <stdlib.h>
	
int main() {
	
//Exercício 1 (pt.2): Agora faça sem mexer na ordem de leitura e impressão.
	
	int primeiro, segundo, aux; // aux: variável auxiliar(guarda um valor específico para não se perder na memória
		
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
		
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
		
	printf("%d \n%d", segundo, primeiro);
	
//Exercício 2 (pt. 2): Agora faça sem usar a formatação da linguagem. (não finalizado)

	double valor_tipo_double;
	
	printf("\nInsira um valor: ");
	scanf("%lf", &valor_tipo_double);
	
//Exercício 5: Elabore um programa que peça ao usuário para digitar 4 valores e mostre na tela a soma, a média e o produtório desses valores.

	float valor_1, valor_2, valor_3, valor_4, soma, media, produtorio;
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &valor_1);
	printf("Insira o segundo valor: ");
	scanf("%f", &valor_2);
	printf("Insira o terceiro valor: ");
	scanf("%f", &valor_3);
	printf("Insira o quarto valor: ");
	scanf("%f", &valor_4);
	
	soma = valor_1 + valor_2 + valor_3 + valor_4;
	media = (valor_1 + valor_2 + valor_3 + valor_4) / 4;
	produtorio = valor_1 * valor_2 * valor_3 * valor_4;
	
	printf("A soma, media e o produtorio desses valores sao: \nsoma = %f \nmedia = %f \nproduto = %f", soma, media, produtorio);
	
	return 0;
}
