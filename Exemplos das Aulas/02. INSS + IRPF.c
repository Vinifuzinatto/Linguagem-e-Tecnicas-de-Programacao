#include <stdio.h>
#include <stdlib.h>

float calc_inss(float salario) { //Normalmente dentro de uma função, não se usa printf ou scanf. Em funções, normalmente, se usa calculos que ficariam muito repetitivos no int main. 
	if (salario <= 1412.00) return salario * 0.075;
	else if (salario <= 2666.68) return salario * 0.09;
	else if (salario <= 4000.03) return salario * 0.12;
	else return salario * 0.14;
}

float calc_irpf(float s_base) {
	if (s_base <= 2259.20) return s_base;
	else if (s_base <= 2826.65) return (s_base * 0.075) - 169.44;
	else if (s_base <= 3751.05) return (s_base * 0.15) - 381.44;
	else if (s_base <= 4664.68) return (s_base * 0.225) - 662.77;
	else return (s_base * 0.275) - 896.00;
}

int main() {
	
	float salario, des_INSS, des_irpf, sal_base; //sal_base = salario - des_INSS
	
	printf("Informe seu salario bruto: ");
	scanf("%f", &salario);
	
	des_INSS = calc_inss(salario);
	sal_base = salario - des_INSS;
	des_irpf = calc_irpf(sal_base);
	
	printf("\nDesconto do INSS = %f", des_INSS);
	printf("\nSalario base = %f", sal_base);
	printf("\nDesconto do IRPF = %f", des_irpf);

	return 0;
}
