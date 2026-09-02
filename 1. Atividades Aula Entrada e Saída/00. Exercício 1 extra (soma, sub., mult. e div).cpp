#include <stdio.h>
#include <stdlib.h>

//soma, subtração, multiplicação e divisão de 2 números:

int main() {
	
	float a, b, c, r1, r2, r3;
		
	a = 5;
	b = 7;
	c = a + b;
	r1 = a - b;	 
	r2 = a * b;
	r3 = a / b;
	
	printf("As operações entre %f, %f são: \n + %f \n - %f \n * %f \n / %f", a, b, c, r1, r2, r3);
	return 0;
}




