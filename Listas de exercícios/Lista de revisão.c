#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int calc_cpf(int num, int valor) {
	return num * valor;
}
float celcius_farenheit(float celsius) { //Função pra conversão de Celcius pra Farenheit
	return (celsius * 9.0 / 5.0) + 32.0;
}
float farenheit_celsius(float farenheit) { //Função pra conversão de Farenheit pra Celsius
	return (farenheit - 32.0) * 5.0 / 9.0;
}
float escolha(int opcao, float temp) { 
	switch (opcao){
		case 1: //Celcius pra Farenheit
			return (temp * 9.0 / 5.0) + 32.0;
		break;
		
		case 2: //Farenheit pra Celsius
			return (temp - 32.0) * 5.0 / 9.0;
		break;
		
		default:
			printf("Opcao invalida!");
		return 0;
	}
}
void cor(int cor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
}

int main() {
	
	printf("Exercicio 1: Validador de CPF! \n");
	
		int num1, num2, num3, num4, num5, num6, num7, num8, num9, num_v1, num_v2, soma1, soma2, resto1, resto2;
		
		printf("\nInforme seu CPF no formato X X X . X X X . X X X - X X: ");
		scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num_v1, &num_v2);
		
		//1º Digito
		
		soma1 = calc_cpf(num1, 10) + calc_cpf(num2, 9) + calc_cpf(num3, 8) +
		calc_cpf(num4, 7) + calc_cpf(num5, 6) + calc_cpf(num6, 5) +
		calc_cpf(num7, 4) + calc_cpf(num8, 3) + calc_cpf(num9, 2);
		
		soma1 *= 10;
		resto1 = soma1 % 11;
		
		if (resto1 == 10) resto1 = 0;
		
		printf("\nPrimeiro digito apos o traco: %d", resto1);
		
		//2º Digito
		
		soma2 = calc_cpf(num1, 11) + calc_cpf(num2, 10) + calc_cpf(num3, 9) +
		calc_cpf(num4, 8) + calc_cpf(num5, 7) + calc_cpf(num6, 6) +
		calc_cpf(num7, 5) + calc_cpf(num8, 4) + calc_cpf(num9, 3) + calc_cpf(num_v1, 2);
		
		soma2 *= 10;
		resto2 = soma2 % 11;
		
		if (resto2 == 10) resto2 = 0;
		
		printf("\nSegundo digito apos o traco: %d", resto2);
		
		if (resto1 != num_v1 || resto2 != num_v2) printf("\n\nCPF INVALIDO!");
		else printf("\n\nCPF VALIDO!");
		
		printf("\n\n");
		system ("pause");
		
	printf("\nExercicio 2: Conversor Dinamico! \n");
	
		float temp, conversao;
		char escala;
		
		printf("\nInfome a temperatura a ser convertida: ");
		scanf("%f", &temp);
		printf("Informe qual escala ela esta(F - Farenheit|C - Celsius): ");
		scanf(" %c", &escala);
		
		if (escala == 'F' || escala == 'f') {
			conversao = farenheit_celsius(temp);
			printf("\nA temperatura %0.2f F = %0.2f C", temp, conversao);
		} 
		else if (escala == 'C' || escala == 'c'){
			conversao = celcius_farenheit(temp);
			printf("\nA temperatura %0.2f C = %0.2f F", temp, conversao);
		}
		else {
			printf("\nEscala invalida! Tente novamente!");
		}
		
		printf("\n\n");
		system ("pause");
		
	printf("\nExercicio 2.5: Conversor Dinamico com case! \n");
		
		float temperatura, resultado;
		int opcao;
		
		printf("\n=====Conversor de temperatura! ===== \n");
		printf("\n1 - Celsius para Farenheit");
		printf("\n2 - Farenheit para Celsius \n");
		
		printf("\nQual conversao quer realizar?(1|2): ");
		scanf("%d", &opcao);
		printf("Agora, informe a temperatura a ser convertida: ");
		scanf("%f", &temperatura);
		
		resultado = escolha(opcao, temperatura);
		
		printf("\nTemperatura convertida = %0.2f", resultado);
		
		printf("\n\n");
		system ("pause");
		
	printf("\nExercicio 3: Media Escolar! \n");
	
		float media, n1, n2, n3, faltou;
		char nome[50];
		
		printf("\nEscreva seu primeiro nome: ");
		scanf("%s", nome);
		printf("\nInfome suas tres notas no modelo X.XX X.XX X.XX: ");
		scanf("%f %f %f", &n1, &n2, &n3);
		
		media = (n1 + n2 + n3) / 3;
		
		if (media >= 7.0 && media <= 10.0) {
			printf("\nAluno: %s", nome);
			printf("\nMedia final = %.2f", media);
			cor(9); // AZUL
			printf("\nVoce esta APROVADO!");
			cor(7); // VOLTA PARA BRANCO
		}
		else if (media >= 4.0 && media < 7.0) {
			faltou = 10.0 - media; 
			printf("\nAluno: %s", nome);
			printf("\nMedia final = %.2f", media);
			cor(10); // VERDE
			printf("\nVoce esta de EXAME!");
			cor(7); // VOLTA PARA BRANCO
			printf("\nFaltou %.2f pontos para voce atingir 10!!!", faltou);
		}
		else if (media < 4.0) {
			printf("\nAluno: %s", nome);
			printf("\nMedia final = %.2f", media);
			cor(12); // VERMELHO
			printf("\nVoce esta REPROVADO!");
			cor(7); // VOLTA PARA BRANCO
		}
		else printf("\nMedia invalida(passou do limite esperado)! Tente novamente!");
		
	return 0;
}
