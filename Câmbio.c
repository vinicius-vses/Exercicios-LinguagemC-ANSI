/*Escreva um algoritmo, que solicite ao usuário dois números inteiros diferentes de zero. 
A partir desses números exiba na tela a soma, a subtração, o produto, a divisão e a média aritmética.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	float r, d, e, p, i, dd, de, dp, di;
	printf("Digite uma quantidade de dinheiro em reais: ");
	scanf("%f", &r);
	printf("Real %.2f\n", r);
	d = (r / 5); // d�lar americano
	e = (r / 6);
	p = (r * 18); // peso argentino
	i = (r * 21);
	printf("Convers�o em d�lar: %.2f\n", d);
	printf("Convers�o em euro:. %.2f\n", e);
	printf("Convers�o em peso:. %.2f\n", p);
	printf("Convers�o em iene:. %.2f\n", i);
	dd = (r * 5) - r;
	de = (r * 6) - r;
	dp = (r * 18) - r;
	di = (r * 21) - r;
	printf("Diferen�a em d�lar: %.2f\n", dd);
	printf("Diferen�a em euro:. %.2f\n", de);
	printf("Diferen�a em peso:. %.2f\n", dp);
	printf("Diferen�a em iene:. %.2f\n", di);
	system("pause");
	return 0;
}
