#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome[11];
	
	printf("Informe o nome: ");
	scanf("%10s", &nome);       //%10s: Limita a leitura a 10 caracteres, reservando a última posição para o '\0', que indica o fim da string.
	
	printf("\nNOME: %s \n", nome);
	
	printf("VET NOME: |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\\0| \n", nome[0], nome[1], nome[2], nome[3], nome[4], nome[5], nome[6], nome[7], nome[8], nome[9]);
	printf("Posicao:   0 1 2 3 4 5 6 7 8 9 10");
	
	return 0;
}
