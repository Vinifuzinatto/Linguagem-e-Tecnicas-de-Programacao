#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma palavra e verifique se ela é um palíndromo. 

Entrada: ABBA
Saída: é um palíndromo

Palíndromo: Palavra, frase ou número que pode ser lido da esquerda para a direita
ou da direita para a esquerda, mantendo exatamente o mesmo sentido */

int main() {
	
	int i, j, palindromo;
	char palavra[30];
	
	printf("Informe a palavra: ");
	scanf("%s", &palavra);
	
	for(i = 0; i < 30 && palavra[i] != '\0'; i++); 
		
	for(j = i - 1, i = 0; i < j; i++, j--) {
		if(palavra[i] == palavra[j]) palindromo = 1;
		else {
			palindromo = 0;
			break;
		}
	}
	
	if(palindromo) printf("\neh palindromo");
	else printf("\nnao eh palindromo");	
	
	return 0;
}
