#include <stdio.h>
#include <stdlib.h>
#define bandeira 9
#define bomba 0

int main() {
	
	srand(time(NULL));	//srand() = Como se fosse a seed do minecraft, utilizando o tempo como parâmetro para ter a maior chance possível de não gerar seeds iguais 
	int campo [9] [9];
	int casaX, casaY, i, j;
	
	/*Printar na tela os números aleatórios: printf("rand = %d", rand() % 10); */ 
	
	//Laço limpador de memória; Preenche com 9 todas as casas do campo (Representa as casas seguras (sem bombas)
	for(i = 0; i < 9; i++){
		for(j = 0; j < 9; j++) campo[i] [j] = 9;
	}
	
	
	//Laço para preencher com bombas nosso jogo
	for(i= 0; i < 9; i++){
		for(j = 0; j < 9; j++)
			if(rand() % 10 == 0) campo[i] [j] = 0;	/*rand() = Devolve um número aletatório na contagem de ciclos;
													Se o número aleatório resto da divisão por 10 der 0, vc vai estar em cima de uma bomba. */
	} 
	
	printf("CAMPO MINADO! \n\n");
	
	for(i = 0; i < 9; i++) {
		//printf("\t") = centralizar o campo, quanto mais \t, mais centralizado ele fica
		
		for(j = 0; j < 9; j++) {
			//printf("|%d", campo[i] [j]) = Printar o campo com os 0's amostra
			
			if(campo[i] [j] == 0) printf("|9");  //Se tiver bomba, mascara com 9;
			else printf("|%d", campo[i] [j]);	 //Senão, printa normal.
		}
		printf("|\n");
	}
	
	return 0;
}
