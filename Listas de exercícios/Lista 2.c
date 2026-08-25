#include <stdio.h>
#include <stdlib.h>

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

	float temp_celsius, temp_fahrenheit;
	
	printf("Insira a temperatura em celsius a ser convertida: ");
	scanf("%f", &temp_celsius);
	
	temp_fahrenheit = (temp_celsius * 9.0 / 5.0) + 32.0;
	
	printf("\nA temperatura %0.2f°C = %0.2f°F", temp_celsius, temp_fahrenheit);


	
	return 0;
}
