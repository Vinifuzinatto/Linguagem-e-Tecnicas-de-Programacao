#include <stdio.h>
#include <stdlib.h>

/*VARIÁVEL DA FUNÇÃO 		+		NOME DA FUNÇÃO					+					(tipo parametro1, tipo parametro2)
(ex: int, float, double, ...)		(pode ser qualquer um. Ex: pow, sqrt, fmod, ...)	(Lista de parâmetros. Ex: (float nota1, float nota2) ou (int a, int b) ...)
{
	return 									+										O que vc quer que a função faça.
	(Para retornar o número desejado. OBS.: A função VOID não precisa de RETURN)	(Ex: (nota1 + nota2) / 2; ou a + b;)
}
*/

float media_2v(float x, float y) {  //OS dois parâmetros tem que ser iguais ao q vc vai colocar dps do return.
	return (x + y) / 2;
}

int main() {
	
	float valor1, valor2, media;
	
	printf("Insira dois valores numericos para o calculo da media: ");
	scanf("%f %f", &valor1, &valor2);
	
	media = media_2v(valor1, valor2);
	
	printf("\nA media e %.2f", media);
	
	return 0;
}
