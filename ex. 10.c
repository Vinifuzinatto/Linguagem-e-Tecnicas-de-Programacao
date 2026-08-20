#include <stdio.h>
#include <stdlib.h>

/*Exercício 10(pt.1): Faça um programa que leia três valores e apesente o maior dos três valores lidos seguido da mensagem "eh o maior". */
	
int main() {
	
	int a, b, c, maior, maior_temp;
	//unsigned int abs = valor é transfomado em sem sinal
	printf("Informe os tres valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	
	//conta
	maior_temp = (a+b+abs(a-b))/2;
	maior = (maior_temp+c+abs(maior_temp-c))/2;
	
	printf("\nO maior entre |%d|%d|%d| = %d \n", a, b, c, maior);
	
/*Exercício 10 (pt.2): Faça para quatro valores agora. */
	
	int A, B, C, D, MAIOR_TEMP_1, MAIOR_TEMP_2, MAIOR;
	
	printf("\nInfome os quatro valores a serem comparados: ");
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	//calculo:
	MAIOR_TEMP_1 = (A+B+abs(A-B))/2;
	MAIOR_TEMP_2 = (C+D+abs(C-D))/2;
	MAIOR = (MAIOR_TEMP_1+MAIOR_TEMP_2+abs(MAIOR_TEMP_1-MAIOR_TEMP_2))/2;
	
	printf("\nO maior valor entre |%d|%d|%d|%d| = %d", A, B, C, D, MAIOR);
	
	return 0;
}
