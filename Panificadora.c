/*Uma panificadora está tentando reduzir o desperdício na produção de pães franceses, para isso
está controlando melhor o uso dos insumos em relação a sua produção diária. Assim sendo, faça
um algoritmo que receba o peso da farinha comprada, em quilos, o
peso necessário para fazer um pãozinho, em gramas, e calcule quantos pães poderão ser
produzidos com a quantidade de farinha informada. Em seguida informe qual será o faturamento
da panificadora, se os pães forem vendidos a R$ 0,50 a unidade.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	float pf, fn, p, f;
	printf("Qual o peso, em quilos, da farinha comprada?...........................");
	scanf("%f", &pf);
	printf("Quanto de farinha � necess�rio para fazer um p�ozinho?................ ");
	scanf("%f", &fn);
	p = pf / (fn / 1000);
	printf("Quantos p�es ser�o produzidos com essa quantidade de farinha? %.0f\n ", p);
	f = (p * 0, 5);
	printf("O faturamento da panificadora ser�: %.2f\n ", f);
	scanf("%.2f", &f);
	system("pause");
	return 0;
}
