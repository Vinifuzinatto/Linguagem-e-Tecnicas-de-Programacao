#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exemplo1() {
	int num[10], i, cont;
	
	for(i = 0; i < 10; i++) {
		printf("Infome o valor: ");
		scanf("%d", &num[i]);
	}
	printf("Acabou o for! \n");
	
	i = 0;
	while(i < 10) {
		scanf("%d", &num[i]);
		i++;
	}
	printf("Acabou o while! \n");
}
void exemplo2() {
	
	printf("\nExercicio 1: Leia um valor par e mostre sua raiz. Utilize while!");
	
		int valor;
		
		printf("Insira um valor par: ");
		scanf("%d", &valor);
		
		while(valor % 2 == 1) {
			printf("\nValor inserido impar! \nInsira um novo valor: ");
			scanf("%d", &valor);
		}
		printf("\nA raiz de %d = %.2f", valor, sqrt(valor));
}
void exemplo3() {
	
	printf("\nExercicio 2: Leia um valor par e mostre sua raiz. Utilize do... while!");

		int v;
	
		do {
			printf("Insira um valor par: ");
			scanf("%d", &v);
		} while(v % 2 == 1);
		
		printf("\nA raiz de %d = %.2f", v, sqrt(v));
}

int main() {
	
	int op;
	
	printf("Opcao 1: Ler 10 numeros com for! \n");
	printf("Opcao 2: Ler valor par e mostrar raiz! Uso de while \n");
	printf("Opcao 3: Ler valor par e mostrar raiz! Uso de do... while \n");
	
	printf("\nEscolha a opcao que deseja seguir(1|2|3): ");
	scanf("%d", &op);
	
	switch(op) {
		case 1:
			exemplo1();
		break;

		case 2:
			exemplo2();
		break;
		
		case 3:
			exemplo3();
		break;
		
		default:
			printf("\nOpcao invalida! Tente novamente!");
	}
	return 0;
}
