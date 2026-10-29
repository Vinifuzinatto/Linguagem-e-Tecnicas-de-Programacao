#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void exec1() {
	printf("\nExercício 1: Faça um programa que leia 100 números inteiros e depois os imprima na ordem inversa em que eles foram lidos, e ordenados do maior para o menor. \n\n");

		int num[5], i, j, aux;
			
		for(i = 0; i < 5; i++) {
			printf("Digite o número: ");
			scanf("%d", &num[i]);	
		}
		
		printf("\nOrdem inversa:");
			
		for(i = 4; i != -1; i--)
			printf("\n%d", num[i]); 
				
		printf("\n\nOrdem decrescente:\n");
		
		for(i = 0; i < 5; i ++) {
			for(j = i + 1; j < 6; j++) {
				if(num[i] < num[j]) {
					aux = num[i];
					num[i] = num[j];
					num[j] = aux;
				}
			}	
		}
		
		for(i = 0; i < 5; i++) printf("%d \n", num[i]);
} 
void exec2() {
	printf("\nExercício 2: Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica. \n- Formato padrão: A x 10^n; \n- A: É maior ou igual a 1 e menor que 10(1 <= A < 10); \n- n: É um número inteiro. \n");
	printf("Considere somente números inteiros. \n");

		double A, valor;
		int n;
		
		printf("\nInfome o valor para a conversão: ");
		scanf("%lf", &valor);
		
		A = valor;
		while(A >= 10) {
			A /= 10;
			n++;
		}
		while(A < 1) {
			A *= 10;
			n--;
		}
		printf("\nO valor %.2lf = %.2lf x 10 ^ %d em notação científica!", valor, A, n);
}
void exec3() {
	printf("\nExercício 3: Implemente um programa que leia um número n (com n positivo e n <= 64) e mostre na tela o seu valor em base binária(bits). \n");

		int n, i, resto[7];
		
		printf("\nInforme o valor a ser convertido: ");
		scanf("%d", &n);
		
		if(n <= 0 || n > 64) printf("\nNúmero informado inválido!");
		
		else {
			for(i = 0; i < 7; i++){
				resto[i] = n % 2;
				n /= 2;
			}
			
			printf("\nResultado em binário(7 bits): ");
			
			for(i = 6; i >= 0; i--) printf("%d", resto[i]);
		}	
}
void exec4() {
	printf("\nExercício 4: Faça um programa que leia 10 valores e apresente o maior dos 10 valores lidos seguido da mensegem 'eh o maior!'. \nUtilize a fórmula: MaiorAB = (a+ b + abs(a - b)) / 2 \n\n");

	int valor[10], i, maior;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o número: ");
		scanf("%d", &valor[i]);
	}
	
	for(i = 0, maior = valor[0]; i < 10; i += 2) {
		int maior_temp = (valor[i] + valor[i + 1] + abs(valor[i] - valor[i + 1])) / 2;
		maior = (maior_temp + maior + abs(maior_temp - maior)) / 2;
	}
	
	printf("\n%d eh o maior!", maior);
}
void exec5() {
	printf("\nExercício 5: Faça um programa que tenha um vetor de 100 inteiros e para cada item do vetor, verifique sua paridade e sua primalidade. \n\n");

		int vet[100], i, divisor, j; //PRIMOS IMPORTANTES: 2 3 5 7 11 13 17 19
		
		//Verificador de paridade
		for(i = 0; i < 100; i++){
			printf("Digite o número a ser verificado: ");
			scanf("%d", &vet[i]);
		}
		
		//Testando primalidade para vet[0] = 7
		for(i = 0; i < 100; i++) {
			if(vet[i] % 2 == 0) printf("\nO valor %d é PAR!", vet[i]);
			else printf("\nO valor %d é ÍMPAR!", vet[i]);
			
			 //  7    < 2    
			if(vet[i] < 2) printf("\nO valor %d não é PRIMO!", vet[i]);
			else {
				divisor = 0;
				
				//REP. 1:  1 <=   7
				//REP. 2:  2 <=   7
				//REP. 3:  3 <=   7
				//REP. 4:  4 <=   7
				//REP. 5:  5 <=   7
				//REP. 6:  6 <=   7
				//REP. 7:  7 <=   7
				
				for(j = 1; j <= vet[i]; j++) {
					
				    //   7    % 1 == 0 (CONTA +1 NO CONJUNTO SOLUÇÃO)
				    //   7    % 2 == 0 
				    //   7    % 3 == 0 
				    //   7    % 4 == 0 
				    //   7    % 5 == 0 
				    //   7    % 6 == 0 
				    //   7    % 7 == 0 (CONTA +1 NO CONJUNTO SOLUÇÃO) 
				    
					if(vet[i] % j == 0) divisor++;
				}
				
				
				if(divisor == 2) printf("\nO valor %d É PRIMO!", vet[i]); //S = {1, 7}
				else printf("\nO valor %d NÃO É PRIMO!", vet[i]);
			}
			printf("\n");
		}
}
void exec6() {
	printf("\nExercício 6: Faça um programa que leia do usuário 4 vetores com 10 posições, correspondentes às coordenadas em um plano cartesiano P1(x1, y1) e P2(x2, y2). \nPor fim, Calcule e mostre a distância entre eles, ");
 	printf("aplicando a distância Euclidiana, segundo a fórmula: d = v((x2 - x1)² + (y2 - y1)²) \n\n");
 		
	 	 int i, ponto; //2 PONTOS = 1 POSIÇÃO
		 float VETx1[10], VETy1[10], VETx2[10], VETy2[10];
		 float P1, P2, d;
		 
		 for(i = 0, ponto = 1; i < 10; i++) {
		 	//PONTO 1
		 	printf("Infome as coordenadas do ponto %d(formato: X.XX X.XX): ", ponto);
		 	scanf("%f %f", &VETx1[i], &VETy1[i]);
	
		 	//PONTO 2
		 	printf("Infome as coordenadas do ponto %d(formato: X.XX X.XX): ", ponto + 1);
		 	scanf("%f %f", &VETx2[i], &VETy2[i]);
		 	
			 printf("\n");
			 ponto += 2;
		 }
	
		 printf("\n");
		 
		 i = 0;
		 ponto = 1;
		 while(i < 10) {
		 	P1 = pow(VETx2[i] - VETx1[i], 2);
		 	P2 = pow(VETy2[i] - VETy1[i], 2);
		 	
		 	d = sqrt(P1 + P2);
		 	
		 	printf("Distância do %d ao %d = %.2f", ponto, ponto + 1, d);
		 	
			printf("\n");
			ponto += 2;
			i++;
		 }
}
void exec7() {
	printf("\nExercício 7: Faça um programa que receba um vetor de 100 números inteiros do teclado, verifique se em algum dos números presentes no vetor estão em ordem consecutiva, ");
	printf("e mostre os valores que estão em ordem consecutiva. \n\n");
	 
		 int valor[100], i, j, CONT;
		 
		 for(i = 0; i < 100; i++) {
		 	printf("Digite o valor: ");
		 	scanf("%d", &valor[i]);
		 }
		 
		 for(i = 0, CONT = 0; i < 99; i++) {
		 	for(j = i + 1; j < 100; j++) {
		 		if(valor[i] + 1 == valor[j] || valor[i] - 1 == valor[j]) {
					printf("\n%d e %d são consecutivos!", valor[i], valor[j]); 
					CONT++;
				}
			 }
		 }
		 	
		 if(CONT == 0) printf("\nNenhum dos números fornecidos são consecutivos!");
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int op;
	
	printf("Exercícios! \n");
	printf("1- Ordenação de 100 números do maior ao menor + impressão inversa! \n");
	printf("2- Conversão de número para notação científica usando laço! \n");
	printf("3- Conversão de decimal para binário respeitando o intervalo! \n");
	printf("4- Ler 10 números e mostrar o maior! \n");
	printf("5- Verificar paridade e primalidade de 100 números! \n");
	printf("6- Distância de um ponto a outro com 10 posições e 20 pontos! \n");
	printf("7- Ordem consecutiva em um vetor de 100 números! \n");
	
	printf("\nEm relação aos exercícios propostos acima, escolha qual deseja ver(1|2|3|4|5|6|7): ");
	scanf("%d", &op);
	
	switch(op) {
		case 1:
			exec1();
			break;
		case 2:
			exec2();
			break;
		case 3:
			exec3();
			break;
		case 4:
			exec4();
			break;
		case 5:
			exec5();
			break;
		case 6:
			exec6();
			break;
		case 7:
			exec7();
			break;
		default:
			printf("\nOpção inválida! Tente novamente!");
	}

	return 0;
}
