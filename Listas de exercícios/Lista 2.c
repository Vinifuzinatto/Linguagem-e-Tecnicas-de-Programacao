#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

int main() {
	
/*Exercício 1: Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual. */

	/*int idade, ano_atual, ano_nascimento;
	
	printf("Escreva sua idade: ");
	scanf("%d", &idade);
	printf("Escreva o ano em que esta: ");
	scanf("%d", &ano_atual);
	
	ano_nascimento = ano_atual - idade;
	
	printf("\nSeu ano de nascimento e %d", ano_nascimento);
	
	
	
/*Exercício 2: Leia uma velocidade em km/h (quuilômetros por hora) e apresente convertida em m/s (metros por segundo). */

	/*float velocidade_1, velocidade_2;
	//velocidade_1 = km/h
	//velocidade_2 = m/s
	
	printf("Insira a velocidade em km/h a ser convertida: ");
	scanf("%f", &velocidade_1);
	
	velocidade_2 = velocidade_1 / 3.6;
	
	printf("\nA velocidade %f km/h = %f m/s", velocidade_1, velocidade_2);
	
	
	
/*Exercício 3: Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares. */

	/*float valor_reais, cotacao_dolar, valor_dolar;
	
	printf("Insira o valor a ser convertido de reais para dolares: ");
	scanf("%f", &valor_reais);
	printf("Insira a cotacao do dolar atual: ");
	scanf("%f", &cotacao_dolar);
	
	valor_dolar = valor_reais / cotacao_dolar;
	
	printf("\nO valor %0.2f R$ = %0.2f em dolares!", valor_reais, valor_dolar);
	
	
	
/*Exercício 4: Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. */

	/*float temp_celsius, temp_fahrenheit;
	
	printf("Insira a temperatura em celsius a ser convertida: ");
	scanf("%f", &temp_celsius);
	
	temp_fahrenheit = (temp_celsius * 9.0 / 5.0) + 32.0;
	
	printf("\nA temperatura %0.2f°C = %0.2f°F", temp_celsius, temp_fahrenheit);


	
/*Exercício 5: Leia um ângulo em graus e apresente-o convertido em radianos. */

	/*float angulo, radianos;
	
	printf("Insira o valor do angulo a ser convertido: ");
	scanf("%f", &angulo);
	
	radianos = angulo * pi / 180;
	
	printf("\nO angulo %0.2f = %0.2f em pi radianos!!!", angulo, radianos);
	
	
	
/*Exercício 6: Faça um programa que leia um número inteiro e retorne seu antecessor e sucessor. */

	/*int num, antecessor, sucessor;
	
	printf("Insira um valor qualquer: ");
	scanf("%d", &num);
	
	antecessor = num - 1;
	sucessor = num + 1;
	
	printf("\nSucessor = %d \nAntecessor = %d", sucessor, antecessor);
	
	
	
/*Exercício 7: A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
- O primeiro receberá 46% do total;
- O segundo receberá 32% do total;
- O terceiro receberá o restante;
Calcule e imprima a quantia recebida por cada um dos ganhadores. */

 	/*float primeiro, segundo, terceiro;
 	
 	primeiro = 780000.00 * 46 / 100;
 	segundo = 780000.00 * 32 / 100;
 	terceiro = 780000.00 - primeiro - segundo;
 	
 	printf("Os tres ganhadores do concurso receberao: \n\nPrimeiro lugar = %0.2f \nSegundo lugar = %0.2f \nTerceiro lugar = %0.2f", primeiro, segundo, terceiro);
 	
 	
 	
/*Exercício 8: Leia um valor inteiro que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos. */

	/*int valor_int, segundos, minutos, horas, resto;
	
	printf("Insira o tempo de duracao de um evento que aconteceu na fabrica em segundos: ");
	scanf("%d", &valor_int);
	
	horas = valor_int / 3600; //1h = 3600s
	resto = valor_int % 3600;
	
	minutos = resto / 60; //1min = 60s
	
	segundos = resto % 60;

	printf("\nA duracao desse evento foi de %dh %dmin %ds", horas, minutos, segundos);
	
	
	
/*Exercício 9: Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa. 
Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários.
Mostre o valor com 3 casas decimais após o ponto. */

	/*float tempo_gasto, velocidade_media, distancia, litros_necessarios;
	
	printf("Insira o tempo gasto na viagem em horas: ");
	scanf("%f", &tempo_gasto);
	printf("Insira a velocidade media da viagem: ");
	scanf("%f", &velocidade_media);
	
	distancia = velocidade_media * tempo_gasto;
	litros_necessarios = distancia / 12;
	
	printf("\nVoce ira precisar de %0.3f litros para completar essa viagem!", litros_necessarios);
	
	
	
/*Exercício 10 (pt.1): Faça um programa que leia três valores e apresente o maior dos três lidos seguido da mensagem "eh o maior". */

	/*float a, b, c, maior_temporario, maior;
	
	printf("Insira tres valores para a comparacao: ");
	scanf("%f %f %f", &a, &b, &c);
	
	maior_temporario = (a + b+ abs(a-b)) / 2; //unsigned int abs = valor é transfomado em sem sinal
	maior = (maior_temporario + c + abs(maior_temporario - c)) / 2;
	
	printf("\nO maior entre |%0.0f|%0.0f|%0.0f| = %0.0f \n", a, b, c, maior);
	
	
	
/*Exercício 10 (pt.2): Faça para quatro valores agora. */

	int A, B, C, D, maior_temp_1, maior_temp_2, MAIOR;
	
	printf("Insira os quatro valores para a comparacao: ");
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	maior_temp_1 = (A + B + abs(A - B)) / 2;
	maior_temp_2 = (C + D + abs(C - D)) / 2;
	MAIOR = (maior_temp_1 + maior_temp_2 + abs(maior_temp_1 - maior_temp_2)) / 2;
	
	printf("\nO maior entre |%d|%d|%d|%d| = %d \n", A, B, C, D, MAIOR);
	
	return 0;
}
