#include <stdio.h>
#include <stdlib.h>

int main() {
	
//Exercício 1

	int n1, n2, n3, n4, aux;
	
	printf("Insira o primeiro valor numerico natural: ");
	scanf("%d", &n1);
	printf("Insira o segundo valor numerico natural: ");
	scanf("%d", &n2);
	printf("Insira o terceiro valor numerico natural: ");
	scanf("%d", &n3);
	printf("Insira o quarto valor numerico natural: ");
	scanf("%d", &n4);
	
	aux = n1; //Auxiliar guarda o n1 para não ser perdido
	
	n1 = n3;
	n3 = n4;
	n4 = n2;
	n2 = aux;
	
	printf("\nA troca dos valores e = %d %d %d %d", n1, n2, n3, n4);
	
	
//Exercício 2:

	/*float vpa, v_patrimonial, qtde_acoes, preco_atual, pvp;
	
	printf("Informe o valor patrimonial da empresa: ");
	scanf("%f", &v_patrimonial);
	printf("Informe a quantidade de acoes disponiveis: ");
	scanf("%f", &qtde_acoes);
	printf("Informe o preco atual das acoes: ");
	scanf("%f", &preco_atual);
	
	vpa = v_patrimonial / qtde_acoes;
	pvp = preco_atual / vpa;

	if(pvp < 0.0) printf("\nClassificacao PESSIMA!!!");
	else if(pvp >= 0.0 && pvp < 0.8) printf("\nClassificacao OTIMA!!!");
	else if(pvp >= 0.8 && pvp <= 1.2) printf("\nClassificacao INDIFERENTE!!!");
	else if(pvp > 1.2 && pvp <= 2.0) printf("\nClassificacao BOA!!!");
	else printf("\nClassificacao RUIM!!!"); //pvp > 2.0 */


	return 0;
}
