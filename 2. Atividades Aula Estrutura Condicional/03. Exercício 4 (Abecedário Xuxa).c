#include <stdio.h>
#include <stdlib.h>

//Exercício 4: Faça um programa que leia do teclado uma letra e imprima sua correspondência no "Abecedário da Xuxa".

int main() {
	
	char letra;
	
	printf("Insira uma letra do alfabeto(tirando|K|W|Y|): ");
	scanf("%c", &letra);
	
	if (letra == 'a' || letra == 'A'){
		printf("\nA de amor!");
	} 
	else if (letra == 'b' || letra == 'B'){
		printf("\nB de baixinho!");
	} 
	else if (letra == 'c' || letra == 'C'){
		printf("\nC de coracao!");
	}
	else if (letra == 'd' || letra == 'D'){
		printf("\nD de docinho!");
	}
	else if (letra == 'e' || letra == 'E'){
		printf("\nE de escola!");
	} 
	else if (letra == 'f' || letra == 'F'){
		printf("\nF de feijão!");
	} 
	else if (letra == 'g' || letra == 'G'){
		printf("\nG de gente!");
	} 
	else if (letra == 'h' || letra == 'H'){
		printf("\nH de humano!");
	} 
	else if (letra == 'i' || letra == 'I'){
		printf("\nI de igualdade!");
	} 
	else if (letra == 'j' || letra == 'J'){
		printf("\nJ de juventude!");
	} 
	else if (letra == 'l' || letra == 'L'){
		printf("\nL de liberdade!");
	} 
	else if (letra == 'm' || letra == 'M'){
		printf("\nM de molecagem!");
	} 
	else if (letra == 'n' || letra == 'N'){
		printf("\nN de natureza!");
	}
	else if (letra == 'o' || letra == 'O'){
		printf("\nO de obrigado!");
	} 
	else if (letra == 'p' || letra == 'P'){
		printf("\nP de protecao!");
	}
	else if (letra == 'q' || letra == 'Q'){
		printf("\nQ de quero-quero!");
	}
	else if (letra == 'r' || letra == 'R'){
		printf("\nR de riacho!");
	}
	else if (letra == 's' || letra == 'S'){
		printf("\nS de saudade!");
	}
	else if (letra == 't' || letra == 'T'){
		printf("\nT de Terra!");
	} 
	else if (letra == 'u' || letra == 'U'){
		printf("\nU de universo!");
	}
	else if (letra == 'v' || letra == 'V'){
		printf("\nV de vitória!");
	}
	else if (letra == 'x' || letra == 'X'){
		printf("\nX o que que e? E Xuxa!");
	}
	else if (letra == 'z' || letra == 'Z'){
		printf("\nZ e zum, zum, zum, zum, zum!");
	} 

	return 0;
}
