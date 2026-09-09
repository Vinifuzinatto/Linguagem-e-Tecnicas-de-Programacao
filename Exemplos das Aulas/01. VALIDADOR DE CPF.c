#include <stdio.h>
#include <stdlib.h>

int multDigito(int dig, int valor) { //aq a gente tá criando uma função que nem a pow(n, e) ou sqrt(v) ...
	return dig * valor; // RETURN = Toda função tem que retornar um valor se vc inserir um! (a void n precisa)
}

int main() {
	
	printf("VALIDADOR DE CPF! \n");
	
	int cpf, dig_1, dig_2, dig_3, dig_4, dig_5, dig_6, dig_7, dig_8, dig_9, dig_v, dig_v2, soma, resto, restoII;
	
	printf("\nInforme seu número de CPF no formato X X X . X X X . X X X - X X: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &dig_1, &dig_2, &dig_3, &dig_4, &dig_5, &dig_6, &dig_7, &dig_8, &dig_9, &dig_v, &dig_v2);
	
	//1º Digito
	soma = multDigito(dig_1, 10) + multDigito(dig_2, 9) + multDigito(dig_3, 8) +
			multDigito(dig_4, 7) + multDigito(dig_5, 6) + multDigito(dig_6, 5) +
			multDigito(dig_7, 4) + multDigito(dig_8, 3) + multDigito(dig_9, 2);
	soma *= 10;
	resto = soma % 11;
	
	if (resto == 10) resto = 0;
	printf("\nPrimeiro digito apos o traco: %d", resto);
	
	//2º Digito
	soma = multDigito(dig_1, 11) + multDigito(dig_2, 10) + multDigito(dig_3, 9) +
		multDigito(dig_4, 8) + multDigito(dig_5, 7) + multDigito(dig_6, 6) +
		multDigito(dig_7, 5) + multDigito(dig_8, 4) + multDigito(dig_9, 3) + multDigito(dig_v, 2);
	soma *= 10;
	restoII = soma % 11;
	
	if (restoII == 10) resto = 0;
	printf("\nSegundo digito apos o traco: %d", restoII);
	
	return 0;
}
