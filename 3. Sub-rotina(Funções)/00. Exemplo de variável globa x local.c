#include <stdio.h>
#include <stdlib.h>

int numero = 10; //Variável global

int main() {
	
	int dobro = numero * 2; //Variável local
	
	printf("%d", dobro);
	
	return 0;
}
