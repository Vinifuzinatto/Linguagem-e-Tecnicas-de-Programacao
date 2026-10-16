#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define pi 3.141592

void exec1() {
	
	printf("\nEXERCÍCIO 1: Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual. \n");
	
		int idade, ano_atual;
		
		printf("\nEscreva sua idade e o ano em que se encontra: ");
		scanf("%d %d", &idade, &ano_atual);
	
		printf("\nSeu ano de nascimento é %d!", (ano_atual - idade));
	
}

void exec2() {
	
	printf("\nEXERCÍCIO 2: Leia uma velocidade em km/h (quuilômetros por hora) e a apresente convertida em m/s (metros por segundo). \n");

		float velocidade_1, velocidade_2;
		//velocidade_1 = km/h
		//velocidade_2 = m/s
		
		printf("\nInsira a velocidade em km/h a ser convertida: ");
		scanf("%f", &velocidade_1);
		
		printf("\nA velocidade %0.2f km/h = %0.2f m/s", velocidade_1, (velocidade_1 / 3.6));
}

void exec3() {
	
	printf("\nEXERCÍCIO 3: Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares. \n");

		float reais, cotacao;
		
		printf("\nInsira a cotacão do dolar e o valor em reais a ser convertido: ");
		scanf("%f %f", &cotacao, &reais);
		
		printf("\nO valor %0.2f R$ = %0.2f $", reais, (reais / cotacao));
}

void exec4() {
	
	printf("\nEXERCÍCIO 4: Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.");

		float temp_celsius, temp_fahrenheit;
		
		printf("\nInsira a temperatura em celsius a ser convertida: ");
		scanf("%f", &temp_celsius);
		
		temp_fahrenheit = (temp_celsius * 9.0 / 5.0) + 32.0;
		
		printf("\nA temperatura %0.2f°C = %0.2f°F", temp_celsius, temp_fahrenheit);
 }
	
void exec5() {
	
	printf("\nEXERCÍCIO 5: Leia um ângulo em graus e apresente-o convertido em radianos. \n");

	float angulo, radianos;
	
	printf("\nInsira o valor do ângulo a ser convertido: ");
	scanf("%f", &angulo);
	
	radianos = angulo * pi / 180;
	
	printf("\nO ângulo %0.2f = %0.2f em pi radianos!!!", angulo, radianos);
}
	
void exec6() {
	
	printf("\nEXERCÍCIO 6: Faça um programa que leia um número inteiro e retorne seu antecessor e sucessor. \n");
	
		int num;
	
		printf("\nInsira um número qualquer: ");
		scanf("%d", &num);
		
		printf("\nAntecessor = %d \nSucessor = %d", (num - 1), (num + 1));
}

void exec7() {
	
	printf("\nEXERCÍCIO 7 (pt.1): O importante valor de R$780.000,00 R$ será dividido entre três ganhadores de um concurso, sendo que: \n- O primeiro receberá 46 porcento do total; \n- O segundo receberá 32 porcento do total; \n- O terceiro receberá o restante; \nCalcule e imprima a quantia recebida por cada um dos ganhadores.");

	 	float primeiro, segundo, terceiro;
	 	
	 	primeiro = 780000.00 * 46 / 100;
	 	segundo = 780000.00 * 32 / 100;
	 	terceiro = 780000.00 - primeiro - segundo;
	 	
	 	printf("\n\nOs três ganhadores do concurso receberão: \n\nPrimeiro lugar = %0.2f R$ \nSegundo lugar = %0.2f R$ \nTerceiro lugar = %0.2f R$", primeiro, segundo, terceiro);
}

void exec75() {
	
	printf("\nEXERCÍCIO 7 (pt.2): O importante valor de R$780.000,00 R$ será dividido entre três ganhadores de um concurso, sendo que: \n- O primeiro receberá 46 porcento do total; \n- O segundo receberá 32 porcento do total; \n- O terceiro receberá o restante; \nCalcule e imprima a quantia recebida por cada um dos ganhadores. \n");
	
		float primeiro = 1, segundo = 2, terceiro = 3, posicao;
	
		printf("\nInsira sua posição no concurso: ");
		scanf("%f", &posicao);
		
		if (posicao == primeiro){
			primeiro = 780000.00 * 46 / 100;
			printf("\nVocê recebeu o prêmio de %0.2f R$", primeiro);
		} 
		else if (posicao == segundo){
			segundo = 780000.00 * 32 / 100;
			printf("\nVocê recebeu o prêmio de %0.2f R$", segundo);
		}
		else if (posicao == terceiro){
			terceiro = 780000.00 * 22 / 100;
			printf("\nVocê recebeu o prêmio de %0.2f R$", terceiro);
		}
		else {
			printf("\nBoa sorte no próximo concurso!!!");	
		}
}

void exec8() {
	
	printf("\nEXERCÍCIO 8: Leia um valor inteiro que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos. \n");	

		int valor_int, segundos, minutos, horas, resto;
		
		printf("\nInsira o tempo de duração de um evento que aconteceu na fábrica em segundos: ");
		scanf("%d", &valor_int);
		
		horas = valor_int / 3600; //1h = 3600s
		resto = valor_int % 3600;
		
		minutos = resto / 60; //1min = 60s
		
		segundos = resto % 60;
	
		printf("\nA duração desse evento foi de %dh:%dmin:%ds", horas, minutos, segundos);
		
}

void exec9() {
	
	printf("\nEXERCÍCIO 9: Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa.");
	printf(" Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários.");
	printf(" Mostre o valor com 3 casas decimais após o ponto. \n");

		float tempo_gasto, velocidade_media, distancia, litros_necessarios;
		
		printf("\nInsira o tempo gasto na viagem em horas: ");
		scanf("%f", &tempo_gasto);
		printf("Insira a velocidade média da viagem: ");
		scanf("%f", &velocidade_media);
		
		distancia = velocidade_media * tempo_gasto;
		litros_necessarios = distancia / 12;
		
		printf("\nVocê ira precisar de %0.3f litros para completar essa viagem!", litros_necessarios);
}

void exec10() {
	
	printf("\nEXERCÍCIO 10 (pt.1): Faça um programa que leia três valores e apresente o maior dos três lidos seguido da mensagem 'eh o maior'. \n");

		float a, b, c, maior_temporario, maior;
		
		printf("\nInsira três valores para a comparação: ");
		scanf("%f %f %f", &a, &b, &c);
		
		maior_temporario = (a + b+ abs(a-b)) / 2;
		maior = (maior_temporario + c + abs(maior_temporario - c)) / 2;
		
		printf("\nO maior entre |%0.0f|%0.0f|%0.0f| = %0.0f", a, b, c, maior);
}

void exec103(){
	
	printf("\nEXERCÍCIO 10 (pt.2): Faça para quatro valores agora. \n");

		int A, B, C, D, maior_temp_1, maior_temp_2, MAIOR;
		
		printf("\nInsira os quatro valores para a comparação: ");
		scanf("%d %d %d %d", &A, &B, &C, &D);
		
		maior_temp_1 = (A + B + abs(A - B)) / 2;
		maior_temp_2 = (C + D + abs(C - D)) / 2;
		MAIOR = (maior_temp_1 + maior_temp_2 + abs(maior_temp_1 - maior_temp_2)) / 2;
		
		printf("\nO maior entre |%d|%d|%d|%d| = %d \n", A, B, C, D, MAIOR);
}

void exec105(){
	
	printf("\nEXERCÍCIO 10 (pt.3): Faça o exercício utilizando as condicionais necessarias agora. \n");
	
		float valor_1, valor_2, valor_3;
		
		printf("\nInsira os três valores a serem comparados: ");
		scanf("%f %f %f", &valor_1, &valor_2, &valor_3);
		
		if ((valor_1 > valor_2) && (valor_1 > valor_3)){
			printf("\nO maior valor é %0.2f", valor_1);
		}
		else if ((valor_1 < valor_2) && (valor_2 > valor_3)){
			printf("\nO maior valor é %0.2f", valor_2);
		}
		else{
			printf("\nO maior valor é %0.2f", valor_3);
		}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	printf("Insira qual exercício quer ver (1|2|3|4|5|6|7|75|8|9|10|103|105): ");
	scanf("%d", &opcao);
	
	switch (opcao) {
		
		case 1:
			exec1();
		break;
		
		case 2:
			exec2();
		break;
		
		case 3:
			exec3();
		break;
		
		case 4:
			exec4();
		break;
		
		case 5:
			exec5();
		break;
		
		case 6:
			exec6();
		break;
		
		case 7:
			exec7();
		break;
		
		case 75:
			exec75();
		break;
		
		case 8:
			exec8();
		break;
		
		case 9:
			exec9();
		break;
		
		case 10:
			exec10();
		break;
		
		case 103:
			exec103();
		break;
		
		case 105:
			exec105();
		break;
		
		default:
			printf("\nOpção inválida! Tente novamente!");
	}
	return 0;
}
