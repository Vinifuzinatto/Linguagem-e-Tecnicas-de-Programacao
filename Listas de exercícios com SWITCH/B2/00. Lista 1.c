#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exec1() {
	printf("\nExercício 1: Elabore um programa que permita a entrada de 3 valores. Conte o primeiro valor inserido, até o segundo valor, com o passo da contagem dado pelo terceiro valor. \n");
	printf("Exemplo: 1, 8, 2 ==) Contar de 1 a 8, com passo 2(1, 3, 5, 7). \n");

		//num1 > num2 -
		//num1 < num2 +

		int num1, num2, num3; //Inicialização
		
		printf("\nInsira 3 números!");
		printf("\nPrimeiro: ");
		scanf("%d", &num1);
		printf("Segundo: ");
		scanf("%d", &num2);
		printf("Terceiro: ");
		scanf("%d", &num3); printf("\n");
		
		if(num1 <= num2) {
			while(num1 <= num2) { //Condição
		 	printf("Valor da contagem = %d \n", num1); //Começa no num 1
		 	num1 += num3; //Incremento
			}
			printf("\nValor da contagem quando sair da estrutura = %d", num1);	
		}
		else {
			while(num1 >= num2) {
			printf("Valor da contagem = %d \n", num1);
		 	num1 -= num3; //Decremento
			}
			printf("\nValor da contagem quando sair da estrutura = %d", num1);	
		}
	
}
void exec2() {
	printf("\nExercício 2: Faça um programa que receba um número n e realize a soma dos n primeiros termos da sequência definida como: S = 1/2 + 1/4 + 1/8 + 1/16 + ... + n \n");

		int n, i;
		float soma = 0, termo = 1.0 / 2.0;
		
		printf("\nInsira o número: ");
		scanf("%d", &n);
		
		for(i = 1; i <= n; i++) {
			soma = soma + termo;
			termo /= 2.0;
		}
		printf("\nSoma = %.2f", soma);
}
void exec3() {
	printf("\nExercício 3: Crie um programa que exiba na tela o triângulo de Pascal. \n");

		double valor = 1;
		int linhas, i, j;
		//i = linhas
		//j = colunas
	
		printf("\nQuantas linhas deseja ver do triângulo de Pascal?: ");
		scanf("%d", &linhas);
		
		for(i = 1; i <= linhas; i++) {
			printf("\n");
			valor = 1;
			
			for(j = 1; j <= i; j++) {
				printf("%.0lf ", valor);
				valor = valor * (i - j) / j;
			}
		}
		//linha 1: 1					
		//linha 2: 1 1					2^1 = 2
		//linha 3: 1 2 1				2^2 = 4
		//linha 4: 1 3 3 1				2^3 = 8
		//linha 5: 1 4 6 4 1			2^4 = 16
		//linha 6: 1 5 10 10 5 1		2^5 = 32
		//linha 7: 1 6 15 20 15 6 1		2^6 = 64
		//...							infinito
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	printf("Exercício 1: Contagem de 2 valores usando o terceiro! \n");
	printf("Exercício 2: Soma dos n primeiros números! \n");
	printf("Exercício 3: Triângulo de Pascal \n");
	
	printf("\nInforme o exercício que deseja ver(1|2|3): ");
	scanf("%d", &op);
	
	switch(op) {
		case 1:
			exec1();
			break;
		case 2:
			exec2();
			break;
		case 3:
			exec3();
			break;
		default:
			printf("\nOpção inválida!");
	}
	return 0;
}
