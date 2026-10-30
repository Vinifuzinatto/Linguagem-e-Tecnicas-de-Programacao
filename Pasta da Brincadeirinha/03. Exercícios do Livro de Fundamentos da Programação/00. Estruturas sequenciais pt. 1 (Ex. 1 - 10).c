#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void exec1() {
	printf("\nExercício 1: Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo. \n");
	
		int x, y, sub;
		
		printf("\nInfome os dois números para o calculo! \n");
		printf("Primeiro: ");
		scanf("%d", &x);
		printf("Segundo: ");
		scanf("%d", &y);
		
		sub = x - y;
		
		printf("\nSUBTRAÇÃO = %d - %d = %d", x, y, sub);
}
void exec2() {
	printf("\nExercício 2: Faça um programa que receba três números, calcule e mostre a multiplicação desses números. \n");

		int x, y, z, mult;
		
		printf("\nInfome os três números para o calculo! \n");
		printf("Primeiro: ");
		scanf("%d", &x);
		printf("Segundo: ");
		scanf("%d", &y);
		printf("Terceiro: ");
		scanf("%d", &z);
	
		mult = x * y * z;
		
		printf("\nMULTIPLICAÇÃO = %d * %d * %d = %d", x, y, z, mult);
}
void exec3() {
	printf("\nExercício 3: Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar com validações. \n");

		float a, b, div;
		
		printf("\nInfome os dois números para o calculo! \n");
		printf("Primeiro: ");
		scanf("%f", &a);
		printf("Segundo: ");
		scanf("%f", &b);
		
		div = a / b;
		
		printf("\nDIVISÃO = %.2f / %.2f = %.2f", a, b, div);
}
void exec4() {
	printf("\nExercício 4: Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda. \n");

		float nota1, nota2, media;
		
		printf("\nInfome a primeira nota: ");
		scanf("%f", &nota1);
		printf("Informe a segunda nota: ");
		scanf("%f", &nota2);
		
		media = ((nota1 * 2) + (nota2 * 3)) / 5;
		
		printf("\nMÉDIA = %.2f", media);
}
void exec5() {
	printf("\nExercício 5: Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo que este sofreu um desconto de 10%%. \n");

		float valor, desconto, valor_final;
		
		printf("\n==========LOJA ABC========== \n");
		printf("Informe o valor do produto: ");
		scanf("%f", &valor);
		
		desconto = valor * 0.10;
		valor_final = valor - desconto;
		
		printf("\nDesconto de 10%% sobre o produto = %.2f", desconto);
		printf("\nValor final do produto = %.2f", valor_final);
}
void exec6() {
	printf("\nExercício 6: Um funcionario recebe um salário fixo mais 4%% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final. \n");

		float salario, vendas, comissao, salario_final;
		
		printf("\nInforme seu salário fixo mensal: ");
		scanf("%f", &salario);
		printf("Informe o valor total de suas vendas no mês: ");
		scanf("%f", &vendas);
		
		comissao = vendas * 0.04;
		salario_final = salario + comissao;
		
		printf("\nComissão referente suas vendas no mês = %.2f", comissao);
		printf("\nSalário final = %.2f", salario_final);
}
void exec7() {
	printf("\nExercício 7: Faça um programa que receba o peso de uma pessoa, calcule e mostre: \na) O novo peso, se a pessoa engordar 15%% sobre o peso digitado; \nb) O novo peso, se a pessoa emagrecer 20%% sobre o peso digitado. \n");

		float peso, engordar, emagrecer, peso_final1, peso_final2;
		
		printf("\nInforme seu peso em kg: ");
		scanf("%f", &peso);
		
		engordar = peso * 0.15;
		emagrecer = peso * 0.20;
		peso_final1 = peso + engordar;
		peso_final2 = peso - emagrecer;
		
		printf("\nPeso final caso engorde 15%% = %.2f Kg (Engordou %.2f Kg)", peso_final1, engordar);
		printf("\nPeso final caso emagreça 20%% = %.2f Kg (Emagreceu %.2f Kg)", peso_final2, emagrecer);
}
void exec8() {
	printf("\nExercício 8: Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre em peso em gramas. \n");

		float peso, gramas;
		
		printf("\nInforme seu peso em Kg para a conversão: ");
		scanf("%f", &peso);
		
		gramas = peso * 1000;
	
		printf("\nSeu peso em gramas é: %.2f gramas", gramas);
}
void exec9() {
	printf("\nExercício 9: Faça um programa que calcule e mostre a área de um trapézio em metros. \n");

		float b_maior, b_menor, altura, area;
		
		printf("\nInfome os dados do trapézio! \n");
		printf("Valor da base maior: ");
		scanf("%f", &b_maior);
		printf("Valor da base menor: ");
		scanf("%f", &b_menor);
		printf("Altura relativa a base: ");
		scanf("%f", &altura);
		
		area = (b_maior + b_menor) * altura / 2;
		
		printf("\nÁREA DO TRAPÉZIO = %.2f m²", area);
}
void exec10() {
	printf("\nExercício 10: Faça um programa que calcule e mostre a área de um quadrado em metros. \n");

		float lado, area;
		
		printf("\nInforme o valor do lado do quadrado: ");
		scanf("%f", &lado);
	
		area = pow(lado, 2); //Área = lado * lado
		
		printf("\nÁrea do Quadrado = %.2f m²", area); 
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	printf("LENGENDA DOS EXERCÍCIOS! \n");
	printf("1 - Subtração de 2 números! \n");
	printf("2 - Multiplicaçaõ de 3 números! \n");
	printf("3 - Divisão de 2 números ignorando validações! \n");
	printf("4 - Média ponderada entre 2 notas! \n");
	printf("5 - Desconto de 10%% sobre produto! \n");
	printf("6 - Salário com comissão de 4%%! \n");
	printf("7 - Mostrar peso(engordar 15%%/emagrecer 20%%)! \n");
	printf("8 - Conversão do peso de Kg para g! \n");
	printf("9 - Área de um trapézio qualquer! \n");
	printf("10 - Área de um quadrado qualquer! \n");
	
	printf("\nEscolha o exercício que deseja ver(1|2|3|4|5|6|7|8|9|10): ");
	scanf("%d", &op);
	
	switch(op) {
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
		case 8:
			exec8();
			break;
		case 9:
			exec9();
			break;
		case 10:
			exec10();
			break;
		default:
			printf("\nOPÇÃO INVÁLIDA! TENTE NOVAMENTE!");
	}

	return 0;
}
