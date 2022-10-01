/*Escreva um algoritmo (portugol e linguagem C), que solicite ao usuário dois números inteiros diferentes
de zero. 
A partir desses números exiba na tela a soma, a subtração, o produto, a divisão e a média
aritmética.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, so, su, x, d, m;
	printf("Digite um numero inteiro diferente de 0:... ");
	scanf("%i", &n1);
	printf("Digite outro numero inteiro diferente de 0: ");
	scanf("%i", &n2);
	so = n1 + n2;
	su = n1 - n2;
	x = n1 * n2;
	d = n1 / n2;
	m = (n1 + n2) / 2;
	printf("A soma �:...........%i\n", so);
	printf("A subtracao �:......%i\n", su);
	printf("O produto �:.........%i\n", x);
	printf("A divis�o �:.........%i\n", d);
	printf("A m�dia aritm�tica �:%i\n", m);
	return 0;
}
