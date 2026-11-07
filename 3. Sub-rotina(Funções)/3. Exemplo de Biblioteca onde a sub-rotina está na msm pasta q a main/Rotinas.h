#include <stdio.h>

void sub_rotina1() {
	printf("Mostrar uma mensagem! \n");
}
void sub_rotina2() {
	int a, b, c;
	
	printf("\nDigite um valor: ");
	scanf("%d%*c", &a);
	printf("Digite outro valor: ");
	scanf("%d%*c", &b);
	
	c = a - b;
	
	printf("\nResultado = %d", c);
}
int sub_rotina3(int x, int y) {
	int res;
	
	res = x * y;
	return res;
}
