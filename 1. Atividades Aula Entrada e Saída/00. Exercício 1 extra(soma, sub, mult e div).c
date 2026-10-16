#include <stdio.h>
#include <stdlib.h>

//Soma, subtração, multiplicação e divisão de 2 números

int main() {
	
	float a = 5;
	float b = 7;
	float soma, sub, mult, div;
		
	soma = a + b;
	sub = a - b;	 
	mult = a * b;
	div = a / b;
	
	printf("As operacoes entre %.2f e %.2f sao: \n\nSOMA = %.2f \nSUBTRACAO = %.2f \nMULTIPLICACAO = %.2f \nDivisao = %.2f", a, b, soma, sub, mult, div);
	
	return 0;
}
