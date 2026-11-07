#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num = 10; //Número recebe 10
	int *p = &num; //O ponteiro inteiro recebe o endereço de memoria da variável número
	
	printf("Valor da variavel numero = %d \n", num);
	printf("Valor que o endereco de numero guarda = %d \n", *p);
	printf("Endereco de num = %p \n", (void *)p); //Endereço de memória de p
	
	*p = 50; //Altera a própria variável num, pois p aponta para num 
	
	printf("\nValor final = %d", num);
	
	return 0;
}
