#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
printf("EXERCÍCIO 1 (pt.1): Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos. \n");
	
	int inteiro_1, inteiro_2;
	
	printf("Insira um número: ");
	scanf("%d", &inteiro_1);
	printf("Insira outro número: ");
	scanf("%d", &inteiro_2);
	
	printf("\nOs dois números na ordem inversa são: %d e %d", inteiro_2, inteiro_1);
	
	printf("\n\n\n");
 	system("pause");

printf("\n\nEXERCÍCIO 1 (pt.2) Agora faça sem mexer na ordem de leitura e impressão.");

	int primeiro, segundo, aux;
	
	printf("\nInsira um numero: ");
	scanf("%d", &primeiro);
	printf("Insira outro numero: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	
	printf("\nOs dois números na ordem inversa são: %d e %d", primeiro, aux);
	
	printf("\n\n\n");
 	system("pause");
 	
printf("\n\nEXERCÍCIO 2 (pt.1): Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.");

	double valor_tipo_double;
	
	printf("\nInsira um número positivo qualquer: ");
	scanf("%lf", &valor_tipo_double);
	
	printf("\nResultado em notação científica: %E", valor_tipo_double);
	
	printf("\n\n\n");
 	system("pause");

/*Exercício 2 (pt.2): Agora faça sem usar a formatação da linguagem. (NAO FINALIZADO)*/

	/*double valor_double, A, n, notacao_cientifica;
	
	printf("Insira um numero positivo qualquer: ");
	scanf("%lf", &valor_double);
	
	A = valor_double / 
	notacao_cientifica = valor_double * pow (10, n);
	
	printf("\nO valor %lf em notacao cientifica e igual a %lf", valor_double, notacao_cientifica);*/
	
printf("\n\nEXERCÍCIO 3: Implemente um programa que leia um número n [com n positivo & n <=64] e mostre na tela o seu valor em base binária(bits).");

	int numero, resultado, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("\nInsira um valor para a conversão em binário: ");
	scanf("%d", &numero); 
	
	bit_64 = numero%2; 
	resultado = numero/2;
	
	bit_32 = resultado%2;
	resultado = resultado/2;
	
	bit_16 = resultado%2;
	resultado = resultado/2;
	
	bit_8 = resultado%2;
	resultado = resultado/2;
	
	bit_4 = resultado%2;
	resultado = resultado/2;
	
	bit_2 = resultado%2;
	resultado = resultado/2;

	
	printf("\nO valor %d convertido em binário equivale a %d%d%d%d%d%d%d", numero, resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
	
	printf("\n\n\n");
 	system("pause");
 	
printf("\n\nEXERCÍCIO 4: Faça um programa que leia o salário fixo e o valor total em vendas de um vendedor. Sabendo que este vendedor ganha 15 porcento de comissão sobre suas vendas efetuadas, mostre o total a receber no final do mês, com duas casas decimais.");

	float salario_fixo, total_vendas, comissao, salario_total;
	
	printf("\nInsira seu salário fixo no mês: ");
	scanf("%f", &salario_fixo);
	printf("Insira seu total de vendas efetivadas no mês: ");
	scanf("%f", &total_vendas);
	
	comissao = total_vendas * 15 / 100;
	salario_total = salario_fixo + comissao;
	
	printf("\nComissão do mês = %2.f R$ \nSalário total a receber no mês = %.2f R$", comissao, salario_total);

	printf("\n\n\n");
 	system("pause");
 	
printf("\n\nEXERCÍCIO 5: Elabore um programa que peça ao usuário para digitar 4 valores e mostre na tela a soma, média e o produtório desses valores.");

	float valor_1, valor_2, valor_3, valor_4, soma, media, produtorio;
	
	printf("\nInsira um primeiro valor qualquer: ");
	scanf("%f0.2", &valor_1);
	printf("Insira um segundo valor qualquer: ");
	scanf("%f0.2", &valor_2);
	printf("Insira um terceiro valor qualquer: ");
	scanf("%f0.2", &valor_3);
	printf("Insira um quarto valor qualquer: ");
	scanf("%f0.2", &valor_4);
	
	soma = valor_1 + valor_2 + valor_3 + valor_4;
	media = (valor_1 + valor_2 + valor_3 + valor_4) / 4;
	produtorio = valor_1 * valor_2 * valor_3 * valor_4;
	
	printf("\nOs seguintes valores tem: \nSoma = %f \nMedia = %f \nProdutorio = %f", soma, media, produtorio);

	printf("\n\n\n");
 	system("pause");
 	
printf("\n\nEXERCÍCIO 6: Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias.");

	int idade, idade_anos, idade_meses, idade_dias;
	
	printf("\nInforme sua idade em dias: ");
	scanf("%d", &idade);
	
	idade_anos = idade / 365;
	idade_dias = idade % 365;
	idade_meses = idade_dias / 30;
	idade_dias = idade_dias % 30;
	
	printf ("\nSua idade em: \nAnos = %d \nMeses = %d \nDias = %d", idade_anos, idade_meses, idade_dias);

	printf("\n\n\n");
 	system("pause");

printf("\n\nEXERCÍCIO 7: Faça um programa que calcule e mostre o volume de uma esfera, sendo fornecido o valor do seu raio (R). Considere para pi o valor 3.14159.");

	float volume, raio; //V = (4/3) * pi * R³
	
	printf("\nInsira o valor do raio da esfera: ");
	scanf("%f", &raio);
	
	volume = (4 / 3.0) * pi * pow(raio, 3);
	
	printf("\nVolume da esfera = %.2f m³", volume);
	
	printf("\n\n\n");
 	system("pause");	

printf("\n\nEXERCÍCIO 8: Leia os quatro valores do usuário correspondentes às coordenadas em um plano cartesiano, p1(x1,y1) e p2(x2,y2). A seguir, calcule e mostre a distância entre eles, aplicando a distância euclidiana.");

	float x1, x2, y1, y2, p1, p2, distancia;   //d = v((x2-x1)² + (y2-y1)²)
	
	printf("\nEscreva as coordenadas do ponto 1(P1): ");
	scanf("%f %f", &x1, &y1);
	printf("Escreva as coordenadas do ponto 2(P2): ");
	scanf("%f %f", &x2, &y2);
	
	p1 = pow(x2-x1, 2);
	p2 = pow(y2-y1, 2);
	distancia = sqrt(p1 + p2);

	printf("\nA distância entre p1 e p2 =%2.f m \n", distancia);

printf("\nFIM DAS ATIVIDADES!!!");

	return 0;
}
