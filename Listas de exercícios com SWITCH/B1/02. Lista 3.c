#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14
#define G 9.8
#define K 0.5

float calc_inss(float salario) { // calculo do desconto do INSS
	if (salario <= 1412.00) return salario * 0.075;
	else if (salario <= 2666.68) return salario * 0.09;
	else if (salario <= 4000.03) return salario * 0.12;
	else return salario * 0.14;
}
float calc_irpf(float sal_base) { //calculo do desconto do IRPF; salário base = salario - desconto do INSS
	if (sal_base <= 2259.20) return 0; //isento
	else if (sal_base <= 2826.65) return sal_base * 0.075 - 169.44;
	else if (sal_base <= 3751.05) return sal_base * 0.15 - 381.44;
	else if (sal_base <= 4664.68) return sal_base * 0.225 - 662.77;
	else return sal_base * 0.275 - 896.00;
}

void exec1() {
	printf("\nExercício 1: Terminal Infinite Cash! \n");
	
		int saque, nota1, nota2, nota3, nota4, nota5, nota6, resultado;
		//nota 1 = 100 R$
		//nota 2 = 50 R$
		//nota 3 = 10 R$
		//nota 4 = 5 R$
		//nota 5 = 2 R$
		//nota 6 = 1 R$
		
		printf("\nDigite o valor do saque: R$ ");
		scanf("%d", &saque); 
	
		nota1 = saque / 100; // nota 1 = 168 / 100 = 1
		resultado = saque % 100; // 168 % 100 (==) resto = 68
		
		nota2 = resultado / 50; // nota 2 = 68 / 50 = 1
		resultado = resultado % 50; // (68 % 50 (==) resto = 18
		
		nota3 = resultado / 10; // nota 3 = 18 / 10 = 1
		resultado = resultado % 10; // 18 % 10 (==) resto = 8
		
		nota4 = resultado / 5; // nota 4 = 8 / 5 = 1
		resultado = resultado % 5; // 8 % 5 (==) resto = 3
		
		nota5 = resultado / 2; // nota 5 = 3 / 2 = 1
		resultado = resultado % 2; // 3 % 2 (==) resto = 1
		
		nota6 = resultado / 1;
		resultado = resultado % 1;
		
		printf("\nNotas retiradas = %dx100, %dx50, %dx10, %dx5, %dx2, %dx1", nota1, nota2, nota3, nota4, nota5, nota6);
}
void exec2() {
	printf("\nExercício 2: Operação ENIAC - Trajetória! \n");
	
		float v_inicial, angulo, rad, tempo, alcance;
		
		printf("\nInfome a velocidade inicial e o angulo (em graus) do projétil: ");
		scanf("%f %f", &v_inicial, &angulo);
		
		rad = angulo * PI / 180;
		
		/*
		Calculo do tempo em um lançamento obliquo desconsiderando a resistência do ar:
		
		Sy = S0y + V0y . t - g . t² / 2 
		Sy = 0
		S0y = 0
		0 = V0y . t - g . t² / 2  
		g . t² / 2 = V0y . t // OBS.: V0y = V0 . sen(ANGULO)
		g . t² / 2 = V0 . sen(ANGULO) . t
		g . t / 2 = V0 . sen(ANGULO)
		
		t = 2 . V0 . sen(ANGULO) / g
		*/
		
		tempo = 2 * v_inicial * sin(angulo) / G;
		alcance = (v_inicial * cos(rad) / K) * (1 - exp(-K * tempo)); // exp(x) = e^x
		
		printf("\nTempo de voo = %0.2f s\nAlcance maxímo = %0.2f m", tempo, alcance);
}
void exec3() {
	printf("\nExercício 3: Cálculo de INSS! \n");
	
		float salario, des_inss;
		
		printf("\nInforme seu salário: ");
		scanf("%f", &salario);
		
		printf("\nDesconto do INSS em cima de %0.2f R$ = %0.2f R$", salario, des_inss = calc_inss(salario));
}
void exec4() {
	printf("\nExercício 4: Cálculo de IRPF! \n");
	
		float salario, des_irpf, sal_base;
		
		printf("\nInforme seu salário: ");
		scanf("%f", &salario);
		
		sal_base = salario - calc_inss(salario);
		des_irpf = calc_irpf(sal_base);
		
		printf("\nSalário base (Salário - desconto do INSS) = %0.2f R$\nDesconto do IRPF em cima desse salário = %0.2f R$", sal_base, des_irpf);
}
void exec5() {
	printf("\nExercício 5: Emissão de Contra-cheque! \n");
	
		float v_horas, q_horas, sal_bruto, sal_liquido, des_inss, des_irpf, sal_base, imposto;
		
		printf("\nInfome quantas horas você trabalha: ");
		scanf("%f", &v_horas);
		printf("informe a quantidade total de horas que você trabalha no mês: ");
		scanf("%f", &q_horas);
		
		sal_bruto = v_horas * q_horas;
		des_inss = calc_inss(sal_bruto);
		sal_base = sal_bruto - calc_inss(sal_bruto);
		des_irpf = calc_irpf(sal_base);
		imposto = calc_inss(sal_bruto) + calc_irpf(sal_base);
		sal_liquido = sal_bruto - imposto;
		
		printf("\n====================================================== \n    RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)    \n====================================================== \n");
		printf(" Salário Bruto (Horas x Valor):   R$ %0.2f", sal_bruto);
		printf("\n (-) Desconto INSS:               R$ %0.2f", des_inss);
		printf("\n (-) Desconto IRPF:               R$ %0.2f", des_irpf);
		printf("\n------------------------------------------------------");
		printf("\n LÍQUIDO A RECEBER:               R$ %0.2f", sal_liquido);
		printf("\n====================================================== \n");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	printf("Escolha qual exercício quer ir (1|2|3|4|5): ");
	scanf("%d", &opcao);
	
	switch (opcao) {
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
		
		default:
			printf("\nOpção inválida! Tente novamente!");
	}
	return 0;
}
