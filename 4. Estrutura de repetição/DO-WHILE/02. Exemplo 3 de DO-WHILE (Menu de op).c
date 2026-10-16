#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("MENU DE OPCOES! \n");
	
	int opcao;
	
	do {
		printf("\n1 - Jogar");
		printf("\n2 - Instrucoes");
		printf("\n0 - Sair \n");
		
		printf("\nEscolha a opcao que deseja seguir: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				printf("Iniciando jogo... \n");
				break;
			case 2:
				printf("Mostrando instrucoes... \n");
				break;
			case 0:
				printf("Saindo... \n");
				break;
			default:
				printf("Opcao invalida! \n");
		}
	} while(opcao != 0);
	
	return 0;
}
