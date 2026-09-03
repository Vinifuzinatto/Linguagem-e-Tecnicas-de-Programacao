#include <stdio.h>
#include <stdlib.h>

/*
tipo nome (lista de parametros){
	comando 1;
	comando 2 ...;
}
*/

void exec3 (){ //Void = tipo da minha função |  exec = nome da função
		//Exercício 3: Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
		
		float reais, cota;
		
		printf("Insira a cotacao e o valor: ");
		scanf("%f %f", &cota, &reais);
		
		printf("Os %0.2f reais sao %0.2f trumps", reais, (reais/cota));
}

void exec4 (){
		//Exercício 4: Leia um valor que representa uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
		//Fórmula: F = C * (9.0/5.0) + 32.0

		float tempC, tempF;
	
		printf("\nInsira a temperatura a ser convertida: ");
		scanf("%f", &tempC);
	
		tempF = tempC * (9.0/5.0) + 32.0;
	
		printf("\nOs %0.2f C° sao %0.2f °F \n", tempC, tempF);
}

void exec8 (){
		//Exercício 8: Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em fábrica, e informe-o expresso no formato horas:minutos:segundos.
		
		int sec, horas, min;
		
		printf("Insira o tempo em segundos: ");
		scanf("%d", &sec);
		
		horas = sec/3600;
		min = (sec - (sec % 3600)) / 60;
		sec = sec - ((horas * 3600) + (min * 60));
		
		printf("\t %d:%d:%d", horas, min, sec);	
}

int main() {
	
	int op;
	
	printf("Insira qual exercicio quer resolver[3|4|8]: ");
	scanf("%d", &op);
	
	switch(op) {
	
	case 3:
		exec3();
	break;

	case 4:
		exec4();
	break;
	
	case 8:
		exec8();
	break;
	}
	
	return 0;
}
