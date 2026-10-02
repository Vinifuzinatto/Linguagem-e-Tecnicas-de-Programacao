#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ver_cons(int v1, int v2) {
	if (abs(v1 - v2) == 1) return 1;
	else return 0;
}

void exec0pt1() {
	printf("\nExercício 0(pt.1): Faça um programa que receba 5 números inteiros do teclado, verifique se em algum deles são números consecutivos, e mostre os valores que estão em ordem consecutiva. \n");
	
		int a, b, c, d, e;
		
		printf("\nInfome os cinco números inteiros: ");
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		
		//Consecutivos de A
		if (a + 1 == b) printf("\n%d é consecutivo de %d", b, a);
		if (a + 1 == c) printf("\n%d é consecutivo de %d", c, a);
		if (a + 1 == d) printf("\n%d é consecutivo de %d", d, a);
		if (a + 1 == e) printf("\n%d é consecutivo de %d", e, a);
		
		//Consecutivos de B
		if (b + 1 == a)  printf("\n%d é consecutivo de %d", a, b);
		if (b + 1 == c)  printf("\n%d é consecutivo de %d", c, b);
		if (b + 1 == d)  printf("\n%d é consecutivo de %d", d, b);
		if (b + 1 == e)  printf("\n%d é consecutivo de %d", e, b);
		
		//Consecutivos de C
		if (c + 1 == a)  printf("\n%d é consecutivo de %d", a, c);
		if (c + 1 == b)  printf("\n%d é consecutivo de %d", b, c);
		if (c + 1 == d)  printf("\n%d é consecutivo de %d", d, c);
		if (c + 1 == e)  printf("\n%d é consecutivo de %d", e, c);
		
		//Consecutivos de D
		if (d + 1 == a)  printf("\n%d é consecutivo de %d", a, d);
		if (d + 1 == b)  printf("\n%d é consecutivo de %d", b, d);
		if (d + 1 == c)  printf("\n%d é consecutivo de %d", c, d);
		if (d + 1 == e)  printf("\n%d é consecutivo de %d", e, d);
		
		//Consecutivos de E
		if (e + 1 == a) printf("\n%d é consecutivo de %d", a, e);
		if (e + 1 == b) printf("\n%d é consecutivo de %d", b, e);
		if (e + 1 == c) printf("\n%d é consecutivo de %d", c, e);
		if (e + 1 == d) printf("\n%d é consecutivo de %d", d, e);
}
void exec0pt2() {
	printf("\nExercício 0 (pt.2): Faça um programa que receba 5 números inteiros do teclado, verifique se em algum deles são números consecutivos, e mostre os valores que estão em ordem consecutiva. \n");
	
		int n1, n2, n3, n4, n5;
		
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
		
		if (ver_cons(n1, n2)) printf("\n%d e %d são consecutivos!", n1, n2);
		if (ver_cons(n1, n3)) printf("\n%d e %d são consecutivos!", n1, n3);
		if (ver_cons(n1, n4)) printf("\n%d e %d são consecutivos!", n1, n4);
		if (ver_cons(n1, n5)) printf("\n%d e %d são consecutivos!", n1, n5);
		if (ver_cons(n2, n3)) printf("\n%d e %d são consecutivos!", n2, n3);
		if (ver_cons(n2, n4)) printf("\n%d e %d são consecutivos!", n2, n4);
		if (ver_cons(n2, n5)) printf("\n%d e %d são consecutivos!", n2, n5);
		if (ver_cons(n3, n4)) printf("\n%d e %d são consecutivos!", n3, n4);
		if (ver_cons(n3, n5)) printf("\n%d e %d são consecutivos!", n3, n5);
		if (ver_cons(n4, n5)) printf("\n%d e %d são consecutivos!", n4, n5);
}
void exec1() {
	printf("\nExercício 1: O Índice de Massa Corporal (IMC) é um indicador utilizado para avaliar se uma pessoa está dentro do peso ideal em relação à sua altura. \n- O cálculo é: IMC = peso / altura², em que o peso é informado em quilogramas");
	printf("(kg) e a altura em metros(m). \nO programa deve calcular o IMC e exibir na tela o resultado acompanhado da classificação de acordo com a tabela do Ministério da Saúde abaixo: \n- IMC < 18,5 ==) ABAIXO DO PESO");
	printf("\n- 18,5 <= IMC <= 24,9 ==) NORMAL \n- 25,0 <= IMC <= 29,9 ==) ACIMA DO PESO \n- IMC >= 30,0 ==) OBESO \n");
	
		float peso, altura, imc;
		
		printf("\nInforme seu peso em kg: ");
		scanf("%f", &peso);
		printf("Agora, informe sua altura em metros: ");
		scanf("%f", &altura);
		
		imc = peso / (altura * altura);
		
		if (imc < 18.5) printf("\nIMC = %.2f \nClassificação = ABAIXO DO PESO!", imc);
		else if (imc < 25.0) printf("\nIMC = %.2f \nClassificação = NORMAL!", imc);
		else if (imc < 30.0) printf("\nIMC = %.2f \nClassificação = ACIMA DO PESO!", imc);
		else printf("\nIMC = %.2f \nClassificação = OBESO!", imc);
}
void exec2() {
	printf("\nExercício 2: Torres de Hanói é um quebra-cabeça de discos em uma base contendo três pinos. Consiste em passar todos os discos de uma extremidade a outra sem que um disco maior fique em cima de um menor.");
	printf("\nConsiderando que os A, B, C são pinos e que os valores 1, 2, 3 são, respectivamente, os discos do menor para o maior, onde empilhar um disco menor sobre um maior é somar seus valores naquele pino, e retirar um disco");
	printf(" menor de cima de um maior é subtrair aquele valor do pino. \nFaça um programa que calcule/mostre as operações necessárias para resolver uma Torre de Hanói, onde o pino A = 6 (1 + 2 + 3), o pino B = 0, o pino C = 0 \n");
	
	    int A = 6, B = 0, C = 0;
		
		printf("\nINÍCIO: A = %d | B = %d | C = %d\n", A, B, C);
		
		//1ª Mexida
		A -= 1;
		C += 1;
		printf("\nDisco 1: A -> C\n");
		printf("A = %d | B = %d | C = %d\n", A, B, C);
		
		//2ª Mexida
		A -= 2;
		B += 2;
		printf("\nDisco 2: A -> B\n");
		printf("A = %d | B = %d | C = %d\n", A, B, C);
		
		//3ª Mexida
		C -= 1;
		B += 1;
		printf("\nDisco 1: C -> B\n");
		printf("A = %d | B = %d | C = %d\n", A, B, C);
		
		//4ª Mexida
		A -= 3;
		C += 3;
		printf("\nDisco 3: A -> C\n");
		printf("A = %d | B = %d | C = %d\n", A, B, C);
		
		//5ª Mexida
		B -= 1;
		A += 1;
		printf("\nDisco 1: B -> A\n");
		printf("A = %d | B = %d | C = %d\n", A, B, C);
		
		//6ª Mexida
		B -= 2;
		C += 2;
		printf("\nDisco 2: B -> C\n");
		printf("A = %d | B = %d | C = %d\n", A, B, C);
		
		//7ª Mexida
		A -= 1;
		C += 1;
		printf("\nDisco 1: A -> C\n");
		printf("FIM: A = %d | B = %d | C = %d\n", A, B, C);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	printf("Escolha a questão que deseja checar(0|05|1|2): ");
	scanf("%d", &op);
	
	switch(op) {
		case 0:
			exec0pt1();
		break;
		
		case 05:
			exec0pt2();
		break;
		
		case 1:
			exec1();
		break;
		
		case 2:
			exec2();
		break;
		
		default:
			printf("\nOpção inválida! Tente novamente!");
	}
	return 0;
}
