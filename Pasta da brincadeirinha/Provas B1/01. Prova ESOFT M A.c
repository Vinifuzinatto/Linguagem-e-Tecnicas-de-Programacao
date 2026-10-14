#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exec0() {
	printf("\nExercício 0: Faça um programa que receba 4 números inteiros do teclado, verifique quais dos números inseridos são ímpares, e mostre os que forem múltiplos de 5. \n");

		int v1, v2, v3, v4;
		
		printf("\nInforme os quatro valores! \n");
		printf("Primeiro: ");
		scanf("%d", &v1);
		printf("Segundo: ");
		scanf("%d", &v2);
		printf("Terceiro: ");
		scanf("%d", &v3);
		printf("Quarto: ");
		scanf("%d", &v4);
		
		if(v1 % 2 == 1){
			if(v1 % 5 == 0) printf("\n%d é ímpar e multiplo de 5 ao mesmo tempo!", v1);
		}
		if(v2 % 2 == 1){
			if(v2 % 5 == 0) printf("\n%d é ímpar e multiplo de 5 ao mesmo tempo!", v2);
		}
		if(v3 % 2 == 1){
			if(v3 % 5 == 0) printf("\n%d é ímpar e multiplo de 5 ao mesmo tempo!", v3);
		}
		if(v4 % 2 == 1){
			if(v4 % 5 == 0) printf("\n%d é ímpar e multiplo de 5 ao mesmo tempo!", v4);
		}
		if (v1 % 2 == 0 && v2 % 2 == 0 && v3 % 2 == 0 && v4 % 2 == 0 || v1 != 5 && v2 != 5 && v3 != 5 && v4 != 5) printf("\nNenhum dos numeros inseridos sao impares e multiplos de 5 ao mesmo tempo!");
}
void exec1() {
	printf("\nExercício 1: Um legendário precisa organizar seus equipamentos para uma viagem utilizando mochilas de capacidade idêntica. Dado: \n-A quantidade total de itens a serem transportados; \n-A capacidade máxima da itens que cabem em cada mochila.");
	printf("\nInforme ao legendário o número de mochilas que serão totalmente preenchidas pelos seus itens. \n");
	
		int qtde_itens, cap_max, mochilas;
		
		printf("\nInsira as seguintes informações: ");
		printf("\nA quantidade total de itens que serão transportados: ");
		scanf("%d", &qtde_itens);
		printf("A capacidade máxima de cada mochila: ");
		scanf("%d", &cap_max);
		
		mochilas = qtde_itens / cap_max;
		
		printf("\nNúmero de mochilas totalmente preenchidas = %d", mochilas);
}
void exec2() {
	printf("\nExercício 2: A padronização e conversão de unidades são essenciais para integrar dados entre diferentes sistemas de medida. Crie um programa que sejam inseridos: \n-O valor a ser convertido e o código unidade de medida do respectivo valor conforme a tabela em anexo entrada;");
	printf("\n-O código unidade de medida de conversão; \n-Converta e exiba o valor; \n-Caso a unidade não exista no sistema, mostre uma mensagem de erro. \n");

		float valor, conversao;
		int codigo;
		char letra;
		
		printf("\nInforme o valor a ser convertido: ");
		scanf("%f", &valor);
		
		printf("\n============TEMPERATURA============");
		printf("\nConversão de Fahrenheit/Kelvin para celsius - 1");
		printf("\nConversão de Celsius para Fahrenheit - 2");
		printf("\nConversão de Celsius para Kelvin - 3");
		
		printf("\n============COMPRIMENTO============");
		printf("\nConversão de milha para metros - 4");
		printf("\nConversão de metros para milha - 5");
		
		printf("\n============MASSA============");
		printf("\nConversão de Libra para Quilograma - 8");
		printf("\nConversão de Quilograma para Libra - 9");
		
		printf("\n============VELOCIDADE============");
		printf("\nConversão de mph para km/h - 10");
		printf("\nConversão de km/h para mph - 11 \n");
		
		printf("\nAgora, informe o código da unidade de medida, conforme tabela acima: ");
		scanf("%d", &codigo);
	
		switch(codigo) {
			case 1:
				printf("\nA temperatura está em Kelvin ou Fahrenheit? \nUse, para responder, f/F para Fahrenheit e k/K para Kelvin: ");
				scanf(" %c", &letra);
				
				if(letra == 'f' || letra == 'F') {
					conversao = (valor - 32.0) / 1.8;
					printf("\nO valor %.2f°F = %.2f°C", valor, conversao);
				}
				else if(letra == 'k' || letra == 'K') {
					conversao = valor - 273.15;
					printf("\nO valor %.2f K = %.2f°C", valor, conversao);
				}
				else printf("\nVocê informou a letra errada! Tente novamente!");
			break;
			
			case 2:
				conversao = valor * 1.8 + 32.0;
				printf("\nO valor %.2f°C = %.2f°F", valor, conversao);
			break;
			
			case 3:
				conversao = valor + 273.15;
				printf("\nO valor %.2f°C = %.2f K", valor, conversao);
			break;
				
			case 4:
				conversao = valor * 1609.34;
				printf("\nO valor %.2f mi = %.2f m", valor, conversao);
			break;
				
			case 5:
				conversao = valor / 1609.34;
				printf("\nO valor %.2f m = %.2f mi", valor, conversao);
			break;
			
			case 8:
				conversao = valor / 2205.0;
				printf("\nO valor %.2f lb = %.2f kg", valor, conversao);
			break;
			
			case 9:
				conversao = valor * 2205.0;
				printf("\nO valor %.2f kg = %.2f lb", valor, conversao);	
			break;
			
			case 10:
				conversao = valor * 1609.0;
				printf("\nO valor %.2f mph = %.2f km/h", valor, conversao);
			break;
			
			case 11:
				conversao = valor / 1609.0;
				printf("\nO valor %.2f km/h = %.2f mph", valor, conversao);	
			break;
				
			default:
				printf("\nOpção inválida! Tente novamente!");
		}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	printf("Exercício 0: ímpares e multiplos de 5! \n");
	printf("Exercício 1: Capacidade máxima de mochila! \n");
	printf("Exercício 2: Conversão de unidades! \n");
	
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
			printf("\nOpção inválida! Tente novamente!");
	}
	return 0;
}
