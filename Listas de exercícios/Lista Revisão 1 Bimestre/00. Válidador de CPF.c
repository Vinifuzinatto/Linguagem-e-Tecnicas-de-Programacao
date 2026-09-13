#include <stdio.h>
#include <stdlib.h>

int calc_cpf(int dig, int valor) {
	return dig * valor;
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
		
	return 0;
}
