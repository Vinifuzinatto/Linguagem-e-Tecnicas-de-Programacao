#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salario_fixo, total_vendas, comissao, salario_total;
	
	printf("Insira seu salario fixo: ");
	scanf("%f", &salario_fixo);
	printf("Insira o total de vendas do mes: ");
	scanf("%f", &total_vendas);
	
	comissao = total_vendas * 15 / 100;
	salario_total = salario_fixo + comissao;
	
	printf("\nO total a receber no final do mes e %.2f R$", salario_total); // %.n f/d/lf/...: o .n significa quantas casas decimais dps da virgula aparecerá no console
	
	return 0;
}
