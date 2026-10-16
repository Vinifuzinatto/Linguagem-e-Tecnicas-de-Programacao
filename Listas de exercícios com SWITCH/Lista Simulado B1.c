#include <stdio.h>
#include <stdlib.h>

void exec1() {
	printf("\nExercicio 1: Faca um programa que leia 4 valores numericos naturais do teclado, em ordem A, B, C, D e realize a permutacao entre estes respectvos valores para a ordem C, A, D, B e apresente na tela. \n");
	
		int n1, n2, n3, n4, aux;
		
		printf("\nInsira o primeiro valor natural: ");
		scanf("%d", &n1);
		printf("Insira o segundo valor natural: ");
		scanf("%d", &n2);
		printf("Insira o terceiro valor natural: ");
		scanf("%d", &n3);
		printf("Insira o quarto valor natural: ");
		scanf("%d", &n4);
		
		aux = n1;
		
		n1 = n3;
		n3 = n4;
		n4 = n2;
		n2 = aux;
		
		printf("\nA troca dos 4 valores sao = %d %d %d %d", n1, n2, n3, n4);
}
void exec2() {
	printf("\nExercicio 2: VPA e P/VP ! \n");
	
		float v_patrimonial, qtde_acoes, preco_acao, vpa, pvp;
		
		printf("\nInforme o valor patrimonial da empresa: ");
		scanf("%f", &v_patrimonial);
		printf("Infome a quantidade total de acoes disponiveis: ");
		scanf("%f", &qtde_acoes);
		printf("Informe o preco atual das acoes: ");
		scanf("%f", &preco_acao);
		
		vpa = v_patrimonial / qtde_acoes;
		pvp = preco_acao / vpa;
		
		if (pvp < 0.0) printf("\nClassificacao PESSIMA!");
		else if (pvp < 0.8) printf("\nClassificacao OTIMA!");
		else if (pvp <= 1.2) printf("\nClassificacao INDIFERENTE!");
		else if (pvp <= 2.0) printf("\nClassificacao BOA!");
		else printf("\nClassificacao RUIM!");
}

int main() {
	
	int op;
	
	printf("Escolha o exercicio(1|2): ");
	scanf("%d", &op);
	
	switch(op) {
		case 1:
			exec1();
		break;
		
		case 2:
			exec2();
		break;
		
		default:
			printf("\nNumero invalido! Tente novamente!");
	}
	return 0;
}
