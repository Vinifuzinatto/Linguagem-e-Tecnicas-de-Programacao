#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
/*printf("\nExercício 21: Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas, ");
printf("calcule e mostre o salário a receber, de acordo com as regras a seguir: \na) A hora trabalhada vale 1/8 do salário mínimo; \nb) A hora extra vale 1/4 do salário mínimo;");
printf("\nc) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor de hora trabalhada; \nd) A quantidade a receber pelas horas extras equivale ao número de ");
printf("horas extras trabalhadas multiplicado pelo valor da hora extra; \ne) O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras. \n");
	
	float h_trabalhadas, sal_minimo, horas_extras, sal_bruto, sal_receber;
	float valor_h_trab, valor_h_extra, qtde_extras;
	
	printf("\nInforme o número de horas trabalhadas: ");
	scanf("%f", &h_trabalhadas);
	printf("Informe o valor do salário mínimo em R$: ");
	scanf("%f", &sal_minimo);
	printf("Agora, informe o número de horas extras trabalhadas: ");
	scanf("%f", &horas_extras);
	
	valor_h_trab = sal_minimo * 0.125;
	valor_h_extra = sal_minimo * 0.25;
	sal_bruto = h_trabalhadas * valor_h_trab;
	qtde_extras = horas_extras * valor_h_extra;
	sal_receber = sal_bruto + qtde_extras;
	
	printf("\nSalário bruto = %.2f R$", sal_bruto);
	printf("\nQantidade a receber por horas extras = %.2f R$", qtde_extras);
	printf("\nSalário a receber = %.2f R$", sal_receber); 
	
	
printf("\nExercício 22: Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono. \n");

	int nd, n;
	
	printf("\nInforme o número de lados do polígono: ");
	scanf("%d", &n);
	
	nd = n * (n - 3) / 2;
	
	printf("\nNúmero de diagonais do polígono = %d", nd);
	
	
printf("\nExercício 23: Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. \n");

	int alfa, beta, teta;
	
	printf("\nDigite o valor do primeiro ângulo: ");
	scanf("%d", &alfa);
	printf("Digite o valor do segundo ângulo: ");
	scanf("%d", &beta);
	
	teta = 180 - (alfa + beta);
	
	printf("\nTerceiro ângulo = %d°", teta);
	
	
printf("\nExercício 24: Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa vai viajar possui. Ela vai passar por vários países e precisa converter seu ");
printf("dinheiro em dólares, marco alemão e libra esterlina. Sabe-se que as cotações valem: \n-Dolar = 1,80 R$ \n-Marco alemão = 2,00 R$ \n-Libra esterlina = 3,57 R$");
printf("\nO programa deve fazer as conversões e mostrá-las! \n");

	float reais, conversao;
	
	printf("\nInforme quantos reais possui: ");
	scanf("%f", &reais);
	
	conversao = reais * 1.80;
	printf("\n%.2f R$ = %.2f Dolar(es)", reais, conversao);
	
	conversao = 0;
	conversao = reais * 2.00;
	printf("\n%.2f R$ = %.2f Marco alemão", reais, conversao);
	
	conversao = 0;
	conversao = reais * 3.57;
	printf("\n%.2f R$ = %.2f Libras", reais, conversao); */
	
	
printf("Exercício 25: Faça um programa que receba um hora(uma variável para hora e outra para minutos), calcule e mostre: \na) A hora digitada convrtida em minutos;");
printf("\nb) O total dos minutos, ou seja, os minutos digitados mais a coversão anterior; \nc) O total dos minutos convertidos em segundos. \n");

	int hora, min, min_total, minutos, seg;
	
	printf("\nDigite a hora(Formato: XX:XX): ");
	scanf("%d%*c:%d%*c", &hora, &min);
	
	minutos = (hora * 60);
	min_total = minutos + min;
	seg = min_total * 60;
	
	
	printf("\n%d horas = %d Minutos", hora, minutos);
	printf("\nTotal de minutos = %d", min_total);
	printf("\n%d Total de minutos = %d Segundos", min_total, seg);
	 
	return 0;
}
