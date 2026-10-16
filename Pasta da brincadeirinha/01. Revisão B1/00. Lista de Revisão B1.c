#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float CALC_IMC(float peso, float altura) {
	return peso / pow(altura, 2);
}
float PRECO_kWh(float energia) {
	if (energia <= 100.0) return energia * 0.5;
	else if (energia <= 200.0) return energia * 0.7;
	else return energia * 0.9;
}
float S_REAJUSTE(float salario) {
	if (salario <= 1500.00) return salario * 0.15;
	else if (salario <= 3000.00) return salario * 0.10;
	else return salario * 0.05;
}

void exec1() {
	printf("\nExercício 1: Leia três números inteiros A, B e C. Mostre-os originalmente na ordem A, B, C e depois faça a permutação para C, A, B. \n");
	
		int a, b, c, aux;
		
		printf("\nInsira o primeiro número: ");
		scanf("%d", &a);
		printf("Insira o segundo número: ");
		scanf("%d", &b);
		printf("Insira o terceiro número: ");
		scanf("%d", &c);
		
		aux = a;
		a = c;
		c = b;
		b = aux;
	
		printf("\nOs três números %d|%d|%d depois da troca ficam: %d|%d|%d", b, c, a, a, b, c);
}
void exec2() {
	printf("\nExercício 2: Leia uma temperatura em Celsius e calcule Fahrenheit, depois classifique: \n-Abaixo de 10°C -> Frio \n-De 10 até abaixo de 25°C -> Agradável \n-De 25 até 35°C -> Quente \n-Acima de 35°C -> Muito quente \n ");
	
		float celsius, fahrenheit;
		
		printf("\nInfome a temperatura em Celsius a ser convertida: ");
		scanf("%f", &celsius);
		
		fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
		
		if (celsius < 10.0) printf("\nA temperatura %.2f°C = %.2f°F e está FRIO!", celsius, fahrenheit);
		else if (celsius < 25.0) printf("\nA temperatura %.2f°C = %.2f°F e está AGRADÁVEL!", celsius, fahrenheit);
		else if (celsius <= 35) printf("\nA temperatura %.2f°C = %.2f°F e está QUENTE!", celsius, fahrenheit);
		else printf("\nA temperatura %.2f°C = %.2f°F e está MUITO QUENTE!", celsius, fahrenheit);
}
void exec3() {
	printf("\nExercício 3: Leia duas notas e a quantidade de faltas. Calcule a média e depois classifique: \n-Média >= 7 e faltas <= 10 -> Aprovado \n-Média >= 5 e < 7, com faltas <= 10 -> Recuperação \n-Caso contrário -> Reprovado \n");
	
		float nota1, nota2, faltas, media;
		
		printf("\nInforme a primeira nota: ");
		scanf("%f", &nota1);
		printf("Informe a segunda nota: ");
		scanf("%f", &nota2);
		printf("Por final, informe a quantidade de faltas: ");
		scanf("%f", &faltas);
		
		media = (nota1 + nota2) / 2;
		
		if (media >= 7.0 && faltas <= 10.0) printf("\nVocê está APROVADO!");
		else if (media >= 5.0 && faltas <= 10.0) printf("\nVocê está de RECUPERAÇÃO!");
		else printf("\nVocê está REPROVADO!");
}
void exec4() {
	printf("\nExercício 4: Leia peso e altura para fazer o IMC de unma pessoa e depois classifique: \n- < 18,5 -> Abaixo do peso \n- 18,5 até < 25 -> Peso normal\n- 25 até < 30 -> Sobrepeso \n- >= 30 -> Obesidade \n");
		
		float peso, altura, imc;
		
		printf("\nInforme seu peso: ");
		scanf("%f", &peso);
		printf("Informe sua altura: ");
		scanf("%f", &altura);
		
		imc = CALC_IMC(peso, altura);
		
		if (imc < 18.5) printf("\nSeu IMC é %.2f e você está ABAIXO DO PESO!", imc);
		else if (imc < 25.0) printf("\nSeu IMC é %.2f e você está no PESO NORMAL!", imc);
		else if (imc < 30.0) printf("\nSeu IMC é %.2f e você está com SOBREPESO!", imc);
		else printf("\nSeu IMC é %.2f e você está com OBESIDADE!", imc);
}
void exec5() {
	printf("\nExercício 5: Leia a quantidade de kWh consumidos. Calcule o valor da conta considerando: \n-Até 100 kWh -> R$ 0,50 por kWh \n-Acima de 100 até 200 -> R$ 0,70 por kWh \n-Acima de 200 -> R$ 0,90 por kWh \nDepois mostre consumo e valor da conta. \n");
		
		float cons_energia, preco;
		
		printf("\nInforme a quantidade de kWh consumido: ");
		scanf("%f", &cons_energia);
		
		if (cons_energia <= 100.0) {
			preco = 0.5 * cons_energia;
			printf ("\nConsumo é = %.2f R$ \nValor da conta = %.2f R$", cons_energia, preco);
		}
		else if (cons_energia <= 200.0) {
			preco = 0.7 * cons_energia;
			printf ("\nConsumo é = %.2f R$ \nValor da conta = %.2f R$", cons_energia, preco);
		}
		else {
			preco = 0.9 * cons_energia;
			printf ("\nConsumo é = %.2f R$ \nValor da conta = %.2f R$", cons_energia, preco);
		} 
}
void exec55() {
	printf("\nExercício 5.5(USE FUNÇÃO!): Leia a quantidade de kWh consumidos. Calcule o valor da conta considerando: \n-Até 100 kWh -> R$ 0,50 por kWh \n-Acima de 100 até 200 -> R$ 0,70 por kWh \n-Acima de 200 -> R$ 0,90 por kWh \nDepois mostre consumo e valor da conta. \n");
		
		float energia, conta;
		
		printf("\nInforme a quantidade de kWh consumido: ");
		scanf("%f", &energia);
		
		conta = PRECO_kWh(energia);
		
		printf ("\nConsumo é = %.2f R$ \nValor da conta = %.2f R$", energia, conta);
}
void exec6() {
	printf("\nExercício 6: Leia a velocidade de um carro e classifique: \n- < 40 -> Muito abaixo do limite \n- 40 até 60 -> Dentro do limite \n- 60 até 80 -> Acima do limite \n- 80 -> Infração grave \nSe estiver acima de 60 km/h, calcule também: EXCESSO = VELOCIDADE - 60 \n");
	
		int velocidade, excesso;
		
		printf("\nInforme a velocidade do carro: ");
		scanf("%d", &velocidade);
		
		 excesso = velocidade - 60;
		
		if (velocidade < 40) printf("\nA velocidade %d Km/h é classificada como MUITO ABAIXO DO LIMITE!", velocidade);
		else if (velocidade <= 60) printf("\nA velocidade %d Km/h é classificada como DENTRO DO LIMITE!", velocidade);
		else if (velocidade <= 80) printf("\nA velocidade %d Km/h é classificada como ACIMA DO LIMITE e o excesso é = %d Km/h", velocidade, excesso);
		else printf("\nA velocidade %d Km/h é classificada como INFRAÇÃO GRAVE e o excesso é = %d Km/h", velocidade, excesso); 
}
void exec7() {
	printf("\nExercício 7: Leia o salário de um funcionário e aplique: \n-Salário até R$ 1500 -> aumento de 15%% \n-Acima de R$ 1500 até R$ 3000 -> aumento de 10%% \n-Acima de R$ 3000 -> aumento de 5%% \nMostre: Salário original, Valor do aumento, Novo salário. \n");
		
		float s_original, s_novo, aumento;
		
		printf("\nInsira seu salário mensal: ");
		scanf("%f", &s_original);
		
		aumento = S_REAJUSTE(s_original);
		s_novo = s_original + aumento;
		
		printf("\n=====SALÁRIO COM REAJUSTE=====\n");
		printf("\nSalário original = %.2f R$", s_original);
		printf("\nValor do aumento = %.2f R$", aumento);
		printf("\nNovo salário = %.2f R$", s_novo);
}
void exec8() {
	printf("\nExercício 8: Investimento de um negócio - Leia: \nValor aplicado \nValor atual do investimento \nCalcule: RENTABILIDADE = ((VALOR ATUAL - VALOR APLICADO) / VALOR APLICADO) * 100 \nClassifique: \n- Rentabilidade < 0% -> Prejuízo \n- 0% até < 5% -> Baixo rendimento \n 5% até < 10% -> Bom rendimento \n- >= 10% -> Ótimo rendimento \n");
	
		float v_aplicado, v_atual, rentabilidade;
		
		printf("\nInforme o valor aplicado no investimento: ");
		scanf("%f", &v_aplicado); 
		printf("Infome o valor atual do investimento: ");
		scanf("%f", &v_atual);
		
		rentabilidade = ((v_atual - v_aplicado) / v_aplicado) * 100;
		
		if (rentabilidade < 0.0) printf("\nRentabilidade do investimento = %.2f%% \nClassificada como PREJUÍZO!", rentabilidade);
		else if (rentabilidade < 5.0) printf("\nRentabilidade do investimento = %.2f%% \nClassificada como BAIXO RENDIMENTO!", rentabilidade);
		else if (rentabilidade < 10.0) printf("\nRentabilidade do investimento = %.2f%% \nClassificada como BOM RENDIMENTO!", rentabilidade);
		else printf("\nRentabilidade do investimento = %.2f%% \nClassificada como ÓTIMO RENDIMENTO!", rentabilidade);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	printf("Escolha qual exercício quer ir (1|2|3|4|5|55|6|7|8): ");
	scanf("%d", &op);
	
	switch (op){
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
		
		case 55:
			exec55();
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
		
		default:
			printf("\nOPÇÃO INVÁLIDA! TENTE NOVAMENTE!");
	}
		
	return 0;
}
