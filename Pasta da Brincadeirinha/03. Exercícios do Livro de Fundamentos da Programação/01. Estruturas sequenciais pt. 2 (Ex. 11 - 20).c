#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

void exec11() {
	printf("\nExercício 11: Faça um programa que calcule e mostre a área de um losango em metros. \n");

		float D, d, area;
		
		printf("\nInforme os seguintes valores do losango em metros! \n");
		printf("Diagonal maior: ");
		scanf("%f", &D);
		printf("Diagonal menor: ");
		scanf("%f", &d);
		
		area = (D * d) / 2;
		
		printf("ÁREA DO LOSANGO = %.2f m²", area);
}
void exec12() {
	printf("\nExercício 12: Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário ganha. \n");
	
		float salario_minimo, salario, ganha;
		
		printf("\nInforme o valor do salário mínimo atual: ");
		scanf("%f", &salario_minimo);
		printf("Agora, infome seu salário: ");
		scanf("%f", &salario);
		
		ganha = salario / salario_minimo;
		
		printf("\nVocê ganha %.2f salários mínimos!", ganha); 
}
void exec13() {
	printf("\nExercício 13: Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. \n");

		int valor;
		
		printf("\nDigite o número que quer ver a tabuada: ");
		scanf("%d", &valor);
		
		printf("\n%d * 0 = %d", valor, valor * 0);
		printf("\n%d * 1 = %d", valor, valor * 1);
		printf("\n%d * 2 = %d", valor, valor * 2);
		printf("\n%d * 3 = %d", valor, valor * 3);
		printf("\n%d * 4 = %d", valor, valor * 4);
		printf("\n%d * 5 = %d", valor, valor * 5);
		printf("\n%d * 6 = %d", valor, valor * 6);
		printf("\n%d * 7 = %d", valor, valor * 7);
		printf("\n%d * 8 = %d", valor, valor * 8);
		printf("\n%d * 9 = %d", valor, valor * 9);
		printf("\n%d * 10 = %d", valor, valor * 10);
}
void exec14() {
	printf("\nExercício 14: Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: \na) A idade dessa pessoa em anos;");
	printf("\nb) A idade dessa pessoa em meses; \nc) A idade dessa pessoa em dias; \nd) A idade dessa pessoa em semanas. \n");
	
		int ano_atual, ano_nasc, anos, meses, dias, semanas;
		
		printf("\nInforme o ano atual: ");
		scanf("%d", &ano_atual);
		printf("Informe o seu ano de nascimento: ");
		scanf("%d", &ano_nasc);
		
		anos = ano_atual - ano_nasc;
		meses = anos * 12;
		dias = anos * 365;
		semanas = dias / 7;
		
		printf("\nIDADE EM ANOS = %d", anos);
		printf("\nIDADE EM MESES = %d", meses);
		printf("\nIDADE EM SEMANAS = %d", semanas);
		printf("\nIDADE EM DIAS = %d", dias); 	
}
void exec15() {
	printf("\nExercício 15: João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar a multa de 2%% sobre cada conta. ");
	printf("Faça um programa que calcule e mostre quanto restará do salário de João. \n");

		float salario, resta, conta1, conta2, multa1, multa2;
		
		printf("\nInfome o salário de João em R$: ");
		scanf("%f", &salario);
		printf("Agora informe o valor das duas contas atrasadas! \n");
		printf("Conta 1: ");
		scanf("%f", &conta1);
		printf("Conta 2: ");
		scanf("%f", &conta2);
		
		multa1 = conta1 * 0.02;
		multa2 = conta2 * 0.02;
		resta = salario - (multa1 + multa2);
		
		printf("\nMULTA DA CONTA 1 = %.2f R$", multa1);
		printf("\nMULTA DA CONTA 2 = %.2f R$", multa2);
		printf("\nSALÁRIO FINAL DE JOÃO = %.2f R$", resta); 
}
void exec16() {
	printf("\nExercício 16: Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. \n");

		float CAT1, CAT2, HIP;
		
		printf("\nInforme os valores dos dois catetos do triângulo! \n");
		printf("Cateto 1: ");
		scanf("%f", &CAT1);
		printf("Cateto 2: ");
		scanf("%f", &CAT2);
		
		HIP = sqrt(pow(CAT1, 2) + pow(CAT2, 2));
	 
	 	printf("\nHIPOTENUSA = %.2f", HIP);
}
void exec17() {
	printf("\nExercício 17: Faça um programa que receba o raio, calcule e mostre: \na) O comprimento de uma esfera; \nb) A área de uma esfera; \nc) O volume de uma esfera. \n");

		float raio, comp, area, volume;
		
		printf("\nInforme o valor do raio da esfera: ");
		scanf("%f", &raio);
		
		comp = 2 * PI * raio;
		area = PI * pow(raio, 2);
		volume = (3.0 / 4.0) * PI * pow(raio, 3);
		
		printf("\nCOMPRIMENTO = %.2f", comp);
		printf("\nÁREA = %.2f", area);
		printf("\nVOLUME = %.2f", volume);
}
void exec18() {
	printf("\nExercício 18: Faça um programa que receba um temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit. \n");

		int celsius, fahrenhait;
		
		printf("\nInforme a temperatura em Celsius para a conversão: ");
		scanf("%d", &celsius);
		
		fahrenhait = 180 * (celsius + 32) / 100;
		
		printf("\nA temperatura %d°C = %d°F", celsius, fahrenhait);
}
void exec19() {
	printf("\nExercício 19: Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m², deve-se usar 18 W de potência. Faça um programa que receba ");
	printf("as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m²) e a potência de iluminação que deverá ser utilizada. \n");

		float largura, altura, area, potencia;
		
		printf("\nInforme as duas dimenções do cômodo em metros! \n");
		printf("Largura: ");
		scanf("%f", &largura);
		printf("Altura: ");
		scanf("%f", &altura);
		
		area = largura * altura;
		potencia = area * 18;
		
		printf("\nÁREA DO CÔMODO = %.2f m²", area);
		printf("\nPOTÊNCIA DA ILUMINAÇÃO QUE DEVERÁ USAR = %.2f W", potencia);
}
void exec20() {
	printf("\nExercício 20: Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule ");
	printf("e mostre a medida da escada para que se possa alcançar sua ponta. \n");
	
		int HIP, CAT_AD, angulo;
		
		printf("\nInforme a medida do ângulo: ");
		scanf("%d", &angulo);
		printf("Informe a distância da escada até a parede: ");
		scanf("%d", &CAT_AD);
		
		HIP = CAT_AD / cos(angulo * PI / 180.0);
		
		printf("\nCOMPRIMENTO DA ESCADA = %d", HIP);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	do {
		printf("\n\nLEGENDA EXERCÍCIOS! \n");
		printf("11 - Área de um losango qualquer! \n");
		printf("12 - Quantidade de salários mínimos! \n");
		printf("13 - Tabuada do valor informado! \n");
		printf("14 - Idade em anos, meses, dias e semanas! \n");
		printf("15 - Salário com desconto de 2 contas atrasadas! \n");
		printf("16 - Hipotenusa triângulo! \n");
		printf("17 - Comprimento, área e volume de uma esfera! \n");
		printf("18- Conversão de Celsius para Fahrenheit! \n");
		printf("19 - Potência e área de um cômodo! \n");
		printf("20 - Medida da hipotenusa de um triângulo informando 1 cateto e o ângulo formado entre ele e a hipotenusa! \n");
		printf("0 - Sair \n");
		
		printf("\nInfome o exercício que deseja ver: ");
		scanf("%d", &op);
		
		switch(op) {
			case 11:
				exec11();
				break;
			case 12:
				exec12();
				break;
			case 13:
				exec13();
				break;
			case 14:
				exec14();
				break;
			case 15:
				exec15();
				break;
			case 16:
				exec16();
				break;
			case 17:
				exec17();
				break;
			case 18:
				exec18();
				break;
			case 19:
				exec19();
				break;
			case 20:
				exec20();
				break;
			case 0:
				printf("\nPrograma finalizado!");
				break;
			default:
				printf("\nOpção inválida! Tente novamente!");
				break;	
		} 
	} while(op != 0);	
	
	return 0;
}
