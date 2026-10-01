#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void ADS_N_A_0() {
	
	int n1, n2, n3, n4, n5;
	int consecutivo = 0;
	
	printf("\nInforme os 5 números inteiros");
	printf("\nPrimeiro: ");
	scanf("%d", &n1);
	printf("Segundo: ");
	scanf("%d", &n2);
	printf("Terceiro: ");
	scanf("%d", &n3);
	printf("Quarto: ");
	scanf("%d", &n4);
	printf("Quinto: ");
	scanf("%d", &n5);

	if (abs(n1 - n2) == 1) {
        printf("%d e %d são consecutivos\n", n1, n2);
        consecutivo = 1;
    }
    if (abs(n1 - n3) == 1) {
        printf("%d e %d são consecutivos\n", n1, n3);
        consecutivo = 1;
    }
    if (abs(n1 - n4) == 1) {
        printf("%d e %d são consecutivos\n", n1, n4);
        consecutivo = 1;
    }
    if (abs(n1 - n5) == 1) {
        printf("%d e %d são consecutivos\n", n1, n5);
        consecutivo = 1;
    }
    if (abs(n2 - n3) == 1) {
        printf("%d e %d são consecutivos\n", n2, n3);
        consecutivo = 1;
    }
    if (abs(n2 - n4) == 1) {
        printf("%d e %d são consecutivos\n", n2, n4);
        consecutivo = 1;
    }
    if (abs(n2 - n5) == 1) {
        printf("%d e %d são consecutivos\n", n2, n5);
        consecutivo = 1;
    }
    if (abs(n3 - n4) == 1) {
        printf("%d e %d são consecutivos\n", n3, n4);
        consecutivo = 1;
    }
    if (abs(n3 - n5) == 1) {
        printf("%d e %d são consecutivos\n", n3, n5);
        consecutivo = 1;
    }
    if (abs(n4 - n5) == 1) {
        printf("%d e %d são consecutivos\n", n4, n5);
        consecutivo = 1;
    }
    if (consecutivo == 0) {
        printf("Nao existem números consecutivos.\n");
    }
}
void ADS_N_A_1() {
	
	printf("\nCALCULO DE IMC! \n");
	
	float peso, altura, imc;
	
	printf("\nInforme seu peso em kg: ");
	scanf("%f", &peso);
	printf("Agora, informe sua altura em metros(m): ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5) printf("\nSeu IMC é %.2f e você está na classificação ABAIXO DO PESO!", imc);
	else if (imc <= 24.9) printf("\nSeu IMC é %.2f e você está na classificação NORMAL!", imc);
	else if (imc <= 29.9) printf("\nSeu IMC é %.2f e você está na classificação ACIMA DO PESO!", imc);
	else printf("\nSeu IMC é %.2f e você está na classificação OBESO!", imc);
}
void ADS_N_A_2() {
	
	printf ("\nTORRES DE HANÓI! \n");

    int A = 6, B = 0, C = 0;

    printf("Inicio:\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    A = A - 1;
    C = C + 1;
    printf("Disco 1: A -> C\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    A = A - 2;
    B = B + 2;
    printf("Disco 2: A -> B\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);
    
    C = C - 1;
    B = B + 1;
    printf("Disco 1: C -> B\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    A = A - 3;
    C = C + 3;
    printf("Disco 3: A -> C\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    B = B - 1;
    A = A + 1;
    printf("Disco 1: B -> A\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    B = B - 2;
    C = C + 2;
    printf("Disco 2: B -> C\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    A = A - 1;
    C = C + 1;
    printf("Disco 1: A -> C\n");
    printf("A = %d | B = %d | C = %d\n", A, B, C);
}

void ESOFT_M_A_0() {
	
	printf("\nVERIFICADOR DE NÚMEROS ÍMPARES E MULTIPLOS DE 5 AO MESMO TEMPO! \n");
	
	int n1, n2, n3, n4;
	
	printf("\nInforme os quatro numeros inteiros");
	printf("\nPrimeiro: ");
	scanf("%d", &n1);
	printf("Segundo: ");
	scanf("%d", &n2);
	printf("Terceiro: ");
	scanf("%d", &n3);
	printf("Quarto: ");
	scanf("%d", &n4);
	
	if (n1 % 2 != 0) {
		if (n1 % 5 == 0) printf("\nO numero %d e impar e multiplo de 5", n1);
	}
	if (n2 % 2 != 0) {
		if (n2 % 5 == 0) printf ("\nO numero %d e impar e multiplo de 5", n2);
	}
	if (n3 % 2 != 0) {
		if (n3 % 5 == 0) printf ("\nO numero %d e impar e multiplo de 5", n3);
	}
	if (n4 % 2 != 0) {
		if (n4 % 5 == 0) printf ("\nO numero %d e impar e multiplo de 5", n4);
	}
	if (n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0 && n4 % 2 == 0 || n1 != 5 && n2 != 5 && n3 != 5 && n4 != 5) printf("\nNenhum dos numeros inseridos sao impares e multiplos de 5 ao mesmo tempo!");
	
	
}
void ESOFT_M_A_1() {

	printf("\nTOTAL DE MOCHILAS! \n");
	
	int qtde_itens, cap_max, n_mochilas;
	
	printf("\nInforme a quantidade total de itens a serem transportados: ");
	scanf("%d", &qtde_itens);
	printf("Agora, informe também a capacidade máxima de cada mochila: ");
	scanf("%d", &cap_max);
	
	n_mochilas = qtde_itens / cap_max;
	
	printf("\nO número de mochilas a serem preenchidas totalmente é de %d", n_mochilas);
}
void ESOFT_M_A_2() {
	
	printf("\nCONVERSOR DE UNIDADE! \n");
	
	double valor, resultado;
    int de, para;
    int valido = 1;

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);
    printf("Digite o codigo da unidade do valor: ");
    scanf("%d", &de);
    printf("Digite o codigo da unidade de conversao: ");
    scanf("%d", &para);

    if (de == 1 && para == 2) {
        resultado = valor * 1.8 + 32;
    } else if (de == 2 && para == 1) {
        resultado = (valor - 32) / 1.8;
    } else if (de == 1 && para == 3) {
        resultado = valor + 273.15;
    } else if (de == 3 && para == 1) {
        resultado = valor - 273.15;
    } else if (de == 4 && para == 5) {
        resultado = valor / 1609.34;
    } else if (de == 5 && para == 4) {
        resultado = valor * 1609.34;
    } else if (de == 8 && para == 9) {
        resultado = valor * 2.205;
    } else if (de == 9 && para == 8) {
        resultado = valor / 2.205;
    } else if (de == 11 && para == 10) {
        resultado = valor / 1.609;
    } else if (de == 10 && para == 11) {
        resultado = valor * 1.609;
    } else {
        valido = 0;
    }

    if (valido) {
        printf("Valor convertido: %.2f\n", resultado);
    } else {
        printf("Unidade INEXISTENTE ou conversao INDISPONIVEL!\n");
    }
}

void ESOFT_M_B_0() {
	
	printf("\nTOTAL DE MOCHILAS! \n");
	
	int qtd_tot, capx;

    printf("Entre com a quantidade total de itens: ");
    scanf("%d", &qtd_tot);
    printf("Entre com a capacidade de cada mochila: ");
    scanf("%d", &capx);

    if (capx > 0) {
        printf("Mochilas totalmente preenchidas: %d\n", qtd_tot / capx);
        printf("Itens que sobraram: %d\n", qtd_tot % capx);
    } else {
        printf("Capacidade invalida!\n");
    }
}
void ESOFT_M_B_1() {
	
	printf("\nNÚMEROS DIFENRENTES EM ORDEM CRESCENTE! \n");
	
	int a, b, c, temp;

    printf("\nDigite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("os numeros tem que ser distintos\n");
    } else {
        if (a > b) { temp = a; a = b; b = temp; }
        if (b > c) { temp = b; b = c; c = temp; }
        if (a > b) { temp = a; a = b; b = temp; }

        printf("%d %d %d\n", a, b, c);
    }	
}
void ESOFT_M_B_2() {
	
	printf("\nIDENTIFICAÇÃO DA OPERAÇÃO! \n");
	
	double v1, v2;
    int codigo;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &v1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &v2);
    printf("Digite o codigo da operacao (1 a 4): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("%s\n", (v1 > v2) ? "Verdadeiro" : "Falso");
            break;
        case 2:
            printf("%s\n", (v1 < v2) ? "Verdadeiro" : "Falso");
            break;
        case 3:
            printf("%s\n", (v1 == v2) ? "Verdadeiro" : "Falso");
            break;
        case 4:
            printf("%s\n", (v1 != v2) ? "Verdadeiro" : "Falso");
            break;
        default:
            printf("operador invalido\n");
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	printf("OBS: 1 a 3(PROVA ADS), 4 a 6(PROVA ESOFT_A), 7 a 9(PROVA ESOFT_B)");
	printf("\nInforme a opção(1|2|3|4|5|6|7|8|9): ");
	scanf("%d", &op);
	
	switch(op) {
		case 1:
			ADS_N_A_0();
		break;
		
		case 2:
			ADS_N_A_1();
		break;
		
		case 3:
			ADS_N_A_2();
		break;
		
		case 4:
			ESOFT_M_A_0();
		break;
		
		case 5:
			ESOFT_M_A_1();
		break;
		
		case 6:
			ESOFT_M_A_2();
		break;
		
		case 7:
			ESOFT_M_B_0();
		break;
		
		case 8:
			ESOFT_M_B_1();
		break;
		
		case 9:
			ESOFT_M_B_2();
		break;
	
		default:
			printf("\nOPÇÃO INVÁLIDA! TENTE NOVAMENTE!");	
	}
	return 0;
}
