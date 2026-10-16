#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int comparar_maior(int x, int y) {
	if(x > y) return x;
	else return y;
}
int comparar_menor(int x, int y) {
	if(x > y) return y;
	else return x;
}

void exec0() {
	printf("\nExercício 0: Um legendário precisa organizar seus equipamentos para uma viagem utilizando mochilas de capacidade idêntica. Dadas: \n-A quantidade total de itens a serem transportados;");
	printf("\n-A capacidade máxima de itens que cabem em cada mochila. \nInforme ao legendário o número de mochilas que serão totalmente preenchidas pelos itens e, na linha abaixo, ");
	printf("a quantidade de itens que sobraram(que não preenchem uma mochila inteira) \n");

		int qtde_itens, cap_max, mochilas, sobra;
		
		printf("\nInforme a quantidade total de itens a serem transportados: ");
		scanf("%d", &qtde_itens);
		printf("Agora, informe a capacidade máxima de itens que cabem em cada mochila: ");
		scanf("%d", &cap_max);
		
		mochilas = qtde_itens / cap_max;
		sobra = qtde_itens % cap_max;
	
		printf("\nTotal de mochilas utilizadas com 100%% do espaço = %d", mochilas);
		printf("\nQuantidade de itens que sobraram = %d", sobra);
}
void exec1() {
	printf("\nExercício 1: Faça um programa que receba três números inteiros a, b, c entrados pelo usuário. Se algum dos números for igual a outro, imprima a mensagem 'Os números têm que ser distintos!'. Caso contrário, ");
    printf("imprima eles em uma mesma linha em ordem crescente. \n");

		int a, b, c, maior, maior_temp, menor, menor_temp, meio;
		
		printf("\nInsira três números inteiros!");
		printf("\nPrimeiro: ");
		scanf("%d", &a);
		printf("Segundo: ");
		scanf("%d", &b);
		printf("Terceiro: ");
		scanf("%d", &c);
		
		if(a == b || a == c || b == c) printf("\nOs números têm que ser distintos!");
		
		
		else {
			//maior valor
			maior_temp = comparar_maior(a, b);
			maior = comparar_maior(maior_temp, c);
			
			//menor valor
			menor_temp = comparar_menor(a, b);
			menor = comparar_menor(menor_temp, c);
			
			//valor do meio
			meio = (a + b + c) - maior - menor;
			
			printf("\nNúmeros inseridos em ordem crescente: %d - %d - %d", menor, meio, maior);
		} 
} 
void exec2() {
	printf("\nExercício 2: Operações são essenciais na computação, o seu programa recebe do usuário 3 valores, sendo eles: ");
    printf("\n-Dois operandos numéricos; \n-Um código identificador da operação relacional a ser realizada entre o primeiro e o segundo valor. \n");

		int n1, n2, operacao;
		
		printf("\nInforme os dois valores a serem verificados!");
		printf("\nPrimeiro: ");
		scanf("%d", &n1);
		printf("Segundo: ");
		scanf("%d", &n2);
		
		printf("\n==========OPERAÇÕES==========\n");
		printf("1- Maior que (>); \n");
		printf("2- Menor que (<); \n");
		printf("3- Igual a (==); \n");
		printf("4- Diferente de (!=). \n");
		
		printf("\nAgora, Informe a operação que deseja realizar: ");
		scanf("%d", &operacao);
		
		switch(operacao) {
			case 1:
				if(n1 > n2) printf("\nVerdadeiro! %d > %d", n1, n2);
				else printf("\nFalso! %d < %d", n1, n2);
				break;
			case 2:
				if(n1 < n2) printf("\nVerdadeiro! %d < %d", n1, n2);
				else printf("\nFalso! %d > %d", n1, n2);
				break;
			case 3:
				if(n1 == n2) printf("\nVerdadeiro! %d == %d", n1, n2);
				else printf("\nFalso! %d != %d", n1, n2);
				break;
			case 4:
				if(n1 != n2) printf("\nVerdadeiro! %d != %d", n1, n2);
				else printf("\nFalso! %d == %d", n1, n2);
				break;
			default:
				printf("\nOperação inválido!");
		}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	printf("Exercício 0: Capacidade máxima de mochila + resto! \n");
	printf("Exercício 1: 3 números em ordem crescente! \n");
	printf("Exercício 2: Verificar operação! \n");
	
	printf("\nInforme o exercício que deseja ver(0|1|2): ");
	scanf("%d", &op);
	
	switch(op) {
		case 0:
			exec0();
			break;
		case 1:
			exec1();
			break;
		case 2:
			exec2();
			break;
		default:
			printf("\nOpcão inválida! Tente novamente!");
	}
	
	return 0;
}
